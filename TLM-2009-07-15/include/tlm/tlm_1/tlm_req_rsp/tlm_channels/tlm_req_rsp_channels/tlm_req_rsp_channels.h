/*****************************************************************************

  The following code is derived, directly or indirectly, from the SystemC
  source code Copyright (c) 1996-2008 by all Contributors.
  All Rights reserved.

  The contents of this file are subject to the restrictions and limitations
  set forth in the SystemC Open Source License Version 3.0 (the "License");
  You may not use this file except in compliance with such restrictions and
  limitations. You may obtain instructions on how to receive a copy of the
  License at http://www.systemc.org/. Software distributed by Contributors
  under the License is distributed on an "AS IS" basis, WITHOUT WARRANTY OF
  ANY KIND, either express or implied. See the License for the specific
  language governing rights and limitations under the License.

 *****************************************************************************/

#ifndef __TLM_REQ_RSP_CHANNELS_H__
#define __TLM_REQ_RSP_CHANNELS_H__

#include "tlm_1/tlm_req_rsp/tlm_adapters/tlm_adapters.h"
#include "tlm_1/tlm_req_rsp/tlm_channels/tlm_fifo/tlm_fifo.h"
#include "tlm_1/tlm_req_rsp/tlm_channels/tlm_req_rsp_channels/tlm_put_get_imp.h"

namespace tlm {

template < typename REQ , typename RSP ,
     typename REQ_CHANNEL = tlm_fifo<REQ> ,
     typename RSP_CHANNEL = tlm_fifo<RSP> >

class tlm_req_rsp_channel : public sc_core::sc_module
{
public:
  // uni-directional slave interface

  sc_core::sc_export< tlm_fifo_get_if< REQ > > get_request_export;
  sc_core::sc_export< tlm_fifo_put_if< RSP > > put_response_export;

  // uni-directional master interface

  sc_core::sc_export< tlm_fifo_put_if< REQ > > put_request_export;
  sc_core::sc_export< tlm_fifo_get_if< RSP > > get_response_export;

  // master / slave interfaces

  sc_core::sc_export< tlm_master_if< REQ , RSP > > master_export;
  sc_core::sc_export< tlm_slave_if< REQ , RSP > > slave_export;


  tlm_req_rsp_channel( int req_size = 1 , int rsp_size = 1 ) :
    sc_core::sc_module( sc_core::sc_module_name( sc_core::sc_gen_unique_name("tlm_req_rsp_channel") ) ) ,
    request_fifo( req_size ) ,
    response_fifo( rsp_size ) ,
    master( request_fifo , response_fifo ) ,
    slave( request_fifo , response_fifo )
  {

    bind_exports();

  }

  tlm_req_rsp_channel( sc_core::sc_module_name module_name ,
           int req_size = 1 , int rsp_size = 1 ) :
    sc_core::sc_module( module_name  ) ,
    request_fifo( req_size ) ,
    response_fifo( rsp_size ) ,
    master( request_fifo , response_fifo ) ,
    slave( request_fifo , response_fifo )
  {

    bind_exports();

  }

private:
  void bind_exports() {

    put_request_export( request_fifo );
    get_request_export( request_fifo );

    put_response_export( response_fifo );
    get_response_export( response_fifo );

    master_export( master );
    slave_export( slave );

  }

protected:
  REQ_CHANNEL request_fifo;
  RSP_CHANNEL response_fifo;

  tlm_master_imp< REQ , RSP > master;
  tlm_slave_imp< REQ , RSP > slave;
};

template < typename REQ , typename RSP ,
     typename REQ_CHANNEL = tlm_fifo<REQ> ,
     typename RSP_CHANNEL = tlm_fifo<RSP> >
class tlm_transport_channel : public sc_core::sc_module
{
public:

  // master transport interface

  sc_core::sc_export< tlm_transport_if< REQ , RSP > > target_export;

  // slave interfaces

  sc_core::sc_export< tlm_fifo_get_if< REQ > > get_request_export;
  sc_core::sc_export< tlm_fifo_put_if< RSP > > put_response_export;

  sc_core::sc_export< tlm_slave_if< REQ , RSP > > slave_export;

  tlm_transport_channel() :
    sc_core::sc_module( sc_core::sc_module_name( sc_core::sc_gen_unique_name("transport_channel" ) ) ) ,
    target_export("target_export") ,
    req_rsp( "req_rsp" , 1 , 1 ) ,
    t2m("ts2m")
  {
    do_binding();
  }

  tlm_transport_channel( sc_core::sc_module_name nm ) :
    sc_core::sc_module( nm ) ,
    target_export("target_export") ,
    req_rsp( "req_rsp" , 1 , 1 ) ,
    t2m("tsm" )
  {
    do_binding();
  }

private:
  void do_binding() {

    target_export( t2m.target_export );

    t2m.master_port( req_rsp.master_export );

    get_request_export( req_rsp.get_request_export );
    put_response_export( req_rsp.put_response_export );
    slave_export( req_rsp.slave_export );

  }

  tlm_req_rsp_channel< REQ , RSP , REQ_CHANNEL , RSP_CHANNEL > req_rsp;
  tlm_transport_to_master< REQ , RSP > t2m;

};

} // namespace tlm

#endif

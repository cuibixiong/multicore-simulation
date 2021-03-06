;===============================================================================
; Author: Anthony
; Description: Read data from M2 shared memory by PAC1,M1_DMA1;
; Date: 2010/11/
;===============================================================================
  
;=== Polling M2 for sync. ===
  { MOVI r0, 0x25005000 | NOP | NOP | NOP | NOP }
_LOOP:    
  { LW r1, r0, 0x0  | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { SEQI r2, p1, p2, r1, 0xFFFFFFFF | NOP | NOP | NOP | NOP }
  { (p2) B _LOOP                    | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }    

;==== Address,offset address setting of M2 memory ====  

PACDSP_LDM_BaseAddr = 0x24100000;  

M2_Memory_Base = 0x25000000;  
bank_starting_address = 0x0000; 

data0_offset   = 0x11C0;
data1_offset   = 0x11C4;
data2_offset   = 0x11C8;
data3_offset   = 0x11CC;

data4_offset   = 0x1180;
data5_offset   = 0x1184;
data6_offset   = 0x1188;
data7_offset   = 0x118C;

data8_offset   = 0x11F0;
data9_offset   = 0x11F4;
dataA_offset   = 0x11F8;
dataB_offset   = 0x11FC;

dataC_offset   = 0x11A0;
dataD_offset   = 0x11A4;
dataE_offset   = 0x11A8;
dataF_offset   = 0x11AC;

t_data0_offset   = data0_offset + bank_starting_address;
t_data1_offset   = data1_offset + bank_starting_address;
t_data2_offset   = data2_offset + bank_starting_address;
t_data3_offset   = data3_offset + bank_starting_address;

t_data4_offset   = data4_offset + bank_starting_address;
t_data5_offset   = data5_offset + bank_starting_address;
t_data6_offset   = data6_offset + bank_starting_address;
t_data7_offset   = data7_offset + bank_starting_address;

t_data8_offset   = data8_offset + bank_starting_address;
t_data9_offset   = data9_offset + bank_starting_address;
t_dataA_offset   = dataA_offset + bank_starting_address;
t_dataB_offset   = dataB_offset + bank_starting_address;

t_dataC_offset   = dataC_offset + bank_starting_address;
t_dataD_offset   = dataD_offset + bank_starting_address;
t_dataE_offset   = dataE_offset + bank_starting_address;
t_dataF_offset   = dataF_offset + bank_starting_address;  

;==== Test for M2 bank0; ====

 { movi r0,  PACDSP_LDM_BaseAddr  | movi a0, PACDSP_LDM_BaseAddr  | nop | nop | nop }
 { movi r10, M2_Memory_Base       | movi a1, M2_Memory_Base       | nop | nop | nop }

  
 { NOP | NOP | NOP | NOP | NOP } 
  
 ;Read data0,data8 from M2 memory;
 { lw   r1, r10, t_data0_offset | lw d0, a1, t_data8_offset | nop | nop | nop }
 { NOP  | NOP | NOP | NOP | NOP } 
 { NOP  | NOP | NOP | NOP | NOP }  
 { sw   r1, r0, data0_offset  | sw d0, a0, data8_offset     | nop | nop | nop }

 ;Read data1,data9 from M2 memory;
 { lw   r1, r10, t_data1_offset | lw d0, a1, t_data9_offset | nop | nop | nop }
 { NOP  | NOP | NOP | NOP | NOP } 
 { NOP  | NOP | NOP | NOP | NOP }  
 { sw   r1, r0, data1_offset  | sw d0, a0, data9_offset     | nop | nop | nop }

 ;Read data2,dataA from M2 memory;
 { lw   r1, r10, t_data2_offset | lw d0, a1, t_dataA_offset | nop | nop | nop }
 { NOP  | NOP | NOP | NOP | NOP } 
 { NOP  | NOP | NOP | NOP | NOP }  
 { sw   r1, r0, data2_offset  | sw d0, a0, dataA_offset     | nop | nop | nop }

 ;Read data3,dataB from M2 memory;
 { lw   r1, r10, t_data3_offset | lw d0, a1, t_dataB_offset | nop | nop | nop }
 { NOP  | NOP | NOP | NOP | NOP } 
 { NOP  | NOP | NOP | NOP | NOP }  
 { sw   r1, r0, data3_offset  | sw d0, a0, dataB_offset     | nop | nop | nop }

 ;Read data4,dataC from M2 memory;
 { lw   r1, r10, t_data4_offset | lw d0, a1, t_dataC_offset | nop | nop | nop }
 { NOP  | NOP | NOP | NOP | NOP } 
 { NOP  | NOP | NOP | NOP | NOP }  
 { sw   r1, r0, data4_offset  | sw d0, a0, dataC_offset     | nop | nop | nop }

 ;Read data5,dataD from M2 memory;
 { lw   r1, r10, t_data5_offset | lw d0, a1, t_dataD_offset | nop | nop | nop }
 { NOP  | NOP | NOP | NOP | NOP } 
 { NOP  | NOP | NOP | NOP | NOP }  
 { sw   r1, r0, data5_offset  | sw d0, a0, dataD_offset     | nop | nop | nop }

 ;Read data6,dataE from M2 memory;
 { lw   r1, r10, t_data6_offset | lw d0, a1, t_dataE_offset | nop | nop | nop }
 { NOP  | NOP | NOP | NOP | NOP } 
 { NOP  | NOP | NOP | NOP | NOP }  
 { sw   r1, r0, data6_offset  | sw d0, a0, dataE_offset     | nop | nop | nop }

 ;Read data7,dataF from M2 memory;
 { lw   r1, r10, t_data7_offset | lw d0, a1, t_dataF_offset | nop | nop | nop }
 { NOP  | NOP | NOP | NOP | NOP } 
 { NOP  | NOP | NOP | NOP | NOP }  
 { sw   r1, r0, data7_offset  | sw d0, a0, dataF_offset     | nop | nop | nop }
 
 { NOP | NOP | NOP | NOP | NOP }  
 { NOP | NOP | NOP | NOP | NOP }  
 { NOP | NOP | NOP | NOP | NOP }  
 { NOP | NOP | NOP | NOP | NOP }  

;==== Read data from M2 Memory by M1 DMA_0;   
;;PACDSP CORE0 DMA SETTING
PACDSP_M1_DMA_Base  = 0x2415C000;  
 
;CH0 Register Offset 
 DMA_SAR0_offset   = 0x70;
 DMA_DAR0_offset   = 0x74;
 DMA_SGR0_offset   = 0x78;
 DMA_DSR0_offset   = 0x7C;
 DMA_CTL0_offset   = 0x80;
 DMA_ENA0_offset   = 0x84;
 DMA_CLR0_offset   = 0x88;
 DMA_LLST0_offset  = 0x8C;
 DMA_PDCTL0_offset = 0x90;
 DMA_SHAPE0_offset = 0x94;
 DMA_RES0_offset   = 0x98;
 
;CH1 Register Offset 
 DMA_SAR1_offset   = 0xB0;
 DMA_DAR1_offset   = 0xB4;
 DMA_SGR1_offset   = 0xB8;
 DMA_DSR1_offset   = 0xBC;
 DMA_CTL1_offset   = 0xC0;
 DMA_ENA1_offset   = 0xC4;
 DMA_CLR1_offset   = 0xC8;
 DMA_LLST1_offset  = 0xCC;
 DMA_PDCTL1_offset = 0xD0;
 DMA_SHAPE1_offset = 0xD4;
 DMA_RES1_offset   = 0xD8;
 
;CH2 Register Offset 
 DMA_SAR2_offset   = 0xF0;
 DMA_DAR2_offset   = 0xF4;
 DMA_SGR2_offset   = 0xF8;
 DMA_DSR2_offset   = 0xFC;
 DMA_CTL2_offset   = 0x100;
 DMA_ENA2_offset   = 0x104;
 DMA_CLR2_offset   = 0x108;
 DMA_LLST2_offset  = 0x10C;
 DMA_PDCTL2_offset = 0x110;
 DMA_SHAPE2_offset = 0x114;
 DMA_RES2_offset   = 0x118;
 
;CH3 Register Offset 
 DMA_SAR3_offset   = 0x130;
 DMA_DAR3_offset   = 0x134;
 DMA_SGR3_offset   = 0x138;
 DMA_DSR3_offset   = 0x13C;
 DMA_CTL3_offset   = 0x140;
 DMA_ENA3_offset   = 0x144;
 DMA_CLR3_offset   = 0x148;
 DMA_LLST3_offset  = 0x14C;
 DMA_PDCTL3_offset = 0x150;
 DMA_SHAPE3_offset = 0x154;
 DMA_RES3_offset   = 0x158; 

Luma_BaseAddr      = 0x30022000
Chroma_BaseAddr    = 0x25001000;  
M1_Luma_result     = 0x24100000;    
M1_Chroma_result   = 0x24101000;  

DMA_M1_SR      = 0x24158054 ; 
 
;======= CLEAR DMA STATUS scalar clr ch0, c1 clr ch1, c2 clr ch2, ch3 ======================

 { movi r0, PACDSP_M1_DMA_Base | movi a0, PACDSP_M1_DMA_Base    | movi d0, 0x1        | movi a0, PACDSP_M1_DMA_Base  | movi d0, 0x1 }
 { movi r1, 0x1                 | sw d0, a0, DMA_CLR1_offset    | nop                 | nop                          | nop          }
 { sw r1, r0, DMA_CLR0_offset   | nop                           | nop                 | nop                          | nop          }
 { movi r11, 0                  | nop                           | nop                 | nop                          | nop          }
 { movi r10, 16                 | movi d6, 0                    | nop                 | nop                          | nop          }
 { movi r8, 0                   | movi d7, 0                    | nop                 | nop                          | nop          }

;;CH0 Test 2D -> 1D Luma Transfer, CH1 Test 2D -> 1D Chroma Transfer

DMA_Setup:
 ;;Scalar Set CH0 DMA, C1 set CH1 DMA, C2 set CH2 DMA
 { movi r0, PACDSP_M1_DMA_Base | movi a0, PACDSP_M1_DMA_Base  | nop                 | nop | nop          }
 ;;SAR                                                                                      
 { movi r1, Luma_BaseAddr       | movi d0, Chroma_BaseAddr      | nop                 | nop | nop          }
 { add r1, r1, r11              | add d0, d0, d6                | nop                 | nop | nop          }
 { sw r1, r0, DMA_SAR0_offset   | sw d0, a0, DMA_SAR1_offset    | nop                 | nop | nop          }
 ;;DAR                                                                                      
 { movi r2, M1_Luma_result      | movi a1, M1_Chroma_result     | nop                 | nop | nop          }
 { add r2, r2, r8               | add a1, a1, d7                | nop                 | nop | nop          }
 { sw r2, r0, DMA_DAR0_offset   | sw a1, a0, DMA_DAR1_offset    | nop                 | nop | nop          }
 ;;SGR                                                                                      
 { movi r3, 0x00400780          | movi d1, 0x00400780           | nop                 | nop | nop          }
 { sw r3, r0, DMA_SGR0_offset   | sw d1, a0, DMA_SGR1_offset    | nop                 | nop | nop          }
 ;;DSR                                                                                      
 { movi r4, 0x00000000          | movi d2, 0x00000000           | nop                 | nop | nop          }
 { sw r4, r0, DMA_DSR0_offset   | sw d2, a0, DMA_DSR1_offset    | nop                 | nop | nop          }
 ;;CTL                                                                                      
 { movi r5, 0x00010104          | movi d3, 0x00008104           | nop                 | nop | nop          }
 { sw r5, r0, DMA_CTL0_offset   | sw d3, a0, DMA_CTL1_offset    | nop                 | nop | nop          }
 ;;Enable DMA                                                                               
 { movi r6, 0x0                 | movi d4, 0x1                  | nop                 | nop | nop          }
 { sw r6, r0, DMA_ENA0_offset   | sw d4, a0, DMA_ENA1_offset    | nop                 | nop | nop          }
 {  NOP                         |  NOP                          |  NOP                | NOP | NOP  }
 {  NOP                         |  NOP                          |  NOP                | NOP | NOP  }
 ;;WAIT DMA Transfer Complete
 ;************************************************************** wait until DMA done
 {  MOVI R5, DMA_M1_SR      |  NOP  |  NOP  |  NOP  |  NOP  }
 _Label1:
 {  LW R6, R5, 0            |  NOP  |  NOP  |  NOP  |  NOP  }
 {  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  } 
 {  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
 {  SEQI R7, P1, P2, R6, 0x00002222  |  NOP  |  NOP  |  NOP  |  NOP  }
 {  (P2)B _Label1           |  NOP  |  NOP  |  NOP  |  NOP  }
 {  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
 {  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
 {  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
 {  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
 {  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }       

 { LBCB r10, DMA_Setup      |  NOP               |  NOP  |  NOP  |  NOP  }    
 {  addi r8, r8, 0x10       |  addi d7, d7, 0x8  |  NOP  |  NOP  |  NOP  }
 {  addi r11, r11, 0x4      |  addi d6, d6, 0x4  |  NOP  |  NOP  |  NOP  }
 {  NOP                     |  NOP               |  NOP  |  NOP  |  NOP  }
 {  NOP                     |  NOP               |  NOP  |  NOP  |  NOP  }
 {  NOP                     |  NOP               |  NOP  |  NOP  |  NOP  }     
   
 { NOP | NOP | NOP | NOP | NOP }   
 { TRAP | NOP | NOP | NOP | NOP }  
  

#include "header.h"
#include "ticmacros.h"

#define NO_Mask 0xFFFFFFFF /* 32 bits 1 */
#define All_Mask 0x00000000

int main()
{



  /* Initial DATA */
  /* =================== */

  /* raw data */
  A(0x25000000); W(0x0a0a0a0a);

  A(0x25000004); W(0x0a0a0a0a);

  A(0x25000008); W(0x0a0a0a0a);

  A(0x2500000c); W(0x0a0a0a0a);

  A(0x25000010); W(0x0a0a0a0a);

  A(0x25000014); W(0x0a0a0a0a);

  A(0x25000018); W(0x0a0a0a0a);

  A(0x2500001c); W(0x0a0a0a0a);

  A(0x25000020); W(0x0a0a0a0a);

  A(0x25000024); W(0x0a0a0a0a);

  A(0x25000028); W(0x0a0a0a0a);

  A(0x2500002c); W(0x0a0a0a0a);

  A(0x25000030); W(0x0a0a0a0a);

  A(0x25000034); W(0x0a0a0a0a);

  A(0x25000038); W(0x0a0a0a0a);

  A(0x2500003c); W(0x0a0a0a0a);

  A(0x25000040); W(0x0a0a0a0a);

  A(0x25000044); W(0x0a0a0a0a);

  A(0x25000048); W(0x0a0a0a0a);

  A(0x2500004c); W(0x0a0a0a0a);

  A(0x25000050); W(0x0a0a0a0a);

  A(0x25000054); W(0x0a0a0a0a);

  A(0x25000058); W(0x0a0a0a0a);

  A(0x2500005c); W(0x0a0a0a0a);

  A(0x25000060); W(0x0a0a0a0a);

  A(0x25000064); W(0x0a0a0a0a);

  A(0x25000068); W(0x0a0a0a0a);

  A(0x2500006c); W(0x0a0a0a0a);

  A(0x25000070); W(0x0a0a0a0a);

  A(0x25000074); W(0x0a0a0a0a);

  A(0x25000078); W(0x0a0a0a0a);

  A(0x2500007c); W(0x0a0a0a0a);

  A(0x25000080); W(0x0a0a0a0a);

  A(0x25000084); W(0x0a0a0a0a);

  A(0x25000088); W(0x0a0a0a0a);

  A(0x2500008c); W(0x0a0a0a0a);

  A(0x25000090); W(0x0a0a0a0a);

  A(0x25000094); W(0x0a0a0a0a);

  A(0x25000098); W(0x0a0a0a0a);

  A(0x2500009c); W(0x0a0a0a0a);

  A(0x250000a0); W(0x0a0a0a0a);

  A(0x250000a4); W(0x0a0a0a0a);

  A(0x250000a8); W(0x0a0a0a0a);

  A(0x250000ac); W(0x0a0a0a0a);

  A(0x250000b0); W(0x0a0a0a0a);

  A(0x250000b4); W(0x0a0a0a0a);

  A(0x250000b8); W(0x0a0a0a0a);

  A(0x250000bc); W(0x0a0a0a0a);

  A(0x250000c0); W(0x0a0a0a0a);

  A(0x250000c4); W(0x0a0a0a0a);

  A(0x250000c8); W(0x0a0a0a0a);

  A(0x250000cc); W(0x0a0a0a0a);

  A(0x250000d0); W(0x0a0a0a0a);

  A(0x250000d4); W(0x0a0a0a0a);

  A(0x250000d8); W(0x0a0a0a0a);

  A(0x250000dc); W(0x0a0a0a0a);

  A(0x250000e0); W(0x0a0a0a0a);

  A(0x250000e4); W(0x0a0a0a0a);

  A(0x250000e8); W(0x0a0a0a0a);

  A(0x250000ec); W(0x0a0a0a0a);

  A(0x250000f0); W(0x0a0a0a0a);

  A(0x250000f4); W(0x0a0a0a0a);

  A(0x250000f8); W(0x0a0a0a0a);

  A(0x250000fc); W(0x0a0a0a0a);

  /* PreRowPelY */
  A(0x25000100); W(0x0a0a0a0a);

  A(0x25000104); W(0x0a0a0a0a);

  A(0x25000108); W(0x0a0a0a0a);

  A(0x2500010c); W(0x0a0a0a0a);

  /* PreColPelY */
  A(0x25000110); W(0x14141414);

  A(0x25000114); W(0x14141414);

  A(0x25000118); W(0x14141414);

  A(0x2500011c); W(0x14141414);

  A(0x25000120); W(0x00000014);

  /* parameters setting */
  A(0x25000128); W(0x01900a00);

  A(0x2500012c); W(0x01100200);

  A(0x25000130); W(0x00000100);

  /* =================== */
  /* End of initial DATA */


  /* compare result */
  /* Keep reading CBUSY for delaying the result check */
  int i;

  A(0x24050008);
  for (i = 0; i <= 300; i++)
    R(0x00000000,All_Mask);

  /* Result */
  A(0x25000190); R(0x00000000,NO_Mask);
  /* Residual */
  A(0x25000200); R(0x00000000,NO_Mask);
  A(0x25000204); R(0x00000000,NO_Mask);
  A(0x25000208); R(0x00000000,NO_Mask);
  A(0x2500020c); R(0x00000000,NO_Mask);
  A(0x25000210); R(0x00000000,NO_Mask);
  A(0x25000214); R(0x00000000,NO_Mask);
  A(0x25000218); R(0x00000000,NO_Mask);
  A(0x2500021c); R(0x00000000,NO_Mask);
  A(0x25000220); R(0x00000000,NO_Mask);
  A(0x25000224); R(0x00000000,NO_Mask);
  A(0x25000228); R(0x00000000,NO_Mask);
  A(0x2500022c); R(0x00000000,NO_Mask);
  A(0x25000230); R(0x00000000,NO_Mask);
  A(0x25000234); R(0x00000000,NO_Mask);
  A(0x25000238); R(0x00000000,NO_Mask);
  A(0x2500023c); R(0x00000000,NO_Mask);
  A(0x25000240); R(0x00000000,NO_Mask);
  A(0x25000244); R(0x00000000,NO_Mask);
  A(0x25000248); R(0x00000000,NO_Mask);
  A(0x2500024c); R(0x00000000,NO_Mask);
  A(0x25000250); R(0x00000000,NO_Mask);
  A(0x25000254); R(0x00000000,NO_Mask);
  A(0x25000258); R(0x00000000,NO_Mask);
  A(0x2500025c); R(0x00000000,NO_Mask);
  A(0x25000260); R(0x00000000,NO_Mask);
  A(0x25000264); R(0x00000000,NO_Mask);
  A(0x25000268); R(0x00000000,NO_Mask);
  A(0x2500026c); R(0x00000000,NO_Mask);
  A(0x25000270); R(0x00000000,NO_Mask);
  A(0x25000274); R(0x00000000,NO_Mask);
  A(0x25000278); R(0x00000000,NO_Mask);
  A(0x2500027c); R(0x00000000,NO_Mask);
  A(0x25000280); R(0x00000000,NO_Mask);
  A(0x25000284); R(0x00000000,NO_Mask);
  A(0x25000288); R(0x00000000,NO_Mask);
  A(0x2500028c); R(0x00000000,NO_Mask);
  A(0x25000290); R(0x00000000,NO_Mask);
  A(0x25000294); R(0x00000000,NO_Mask);
  A(0x25000298); R(0x00000000,NO_Mask);
  A(0x2500029c); R(0x00000000,NO_Mask);
  A(0x250002a0); R(0x00000000,NO_Mask);
  A(0x250002a4); R(0x00000000,NO_Mask);
  A(0x250002a8); R(0x00000000,NO_Mask);
  A(0x250002ac); R(0x00000000,NO_Mask);
  A(0x250002b0); R(0x00000000,NO_Mask);
  A(0x250002b4); R(0x00000000,NO_Mask);
  A(0x250002b8); R(0x00000000,NO_Mask);
  A(0x250002bc); R(0x00000000,NO_Mask);
  A(0x250002c0); R(0x00000000,NO_Mask);
  A(0x250002c4); R(0x00000000,NO_Mask);
  A(0x250002c8); R(0x00000000,NO_Mask);
  A(0x250002cc); R(0x00000000,NO_Mask);
  A(0x250002d0); R(0x00000000,NO_Mask);
  A(0x250002d4); R(0x00000000,NO_Mask);
  A(0x250002d8); R(0x00000000,NO_Mask);
  A(0x250002dc); R(0x00000000,NO_Mask);
  A(0x250002e0); R(0x00000000,NO_Mask);
  A(0x250002e4); R(0x00000000,NO_Mask);
  A(0x250002e8); R(0x00000000,NO_Mask);
  A(0x250002ec); R(0x00000000,NO_Mask);
  A(0x250002f0); R(0x00000000,NO_Mask);
  A(0x250002f4); R(0x00000000,NO_Mask);
  A(0x250002f8); R(0x00000000,NO_Mask);
  A(0x250002fc); R(0x00000000,NO_Mask);
  A(0x25000300); R(0x00000000,NO_Mask);
  A(0x25000304); R(0x00000000,NO_Mask);
  A(0x25000308); R(0x00000000,NO_Mask);
  A(0x2500030c); R(0x00000000,NO_Mask);
  A(0x25000310); R(0x00000000,NO_Mask);
  A(0x25000314); R(0x00000000,NO_Mask);
  A(0x25000318); R(0x00000000,NO_Mask);
  A(0x2500031c); R(0x00000000,NO_Mask);
  A(0x25000320); R(0x00000000,NO_Mask);
  A(0x25000324); R(0x00000000,NO_Mask);
  A(0x25000328); R(0x00000000,NO_Mask);
  A(0x2500032c); R(0x00000000,NO_Mask);
  A(0x25000330); R(0x00000000,NO_Mask);
  A(0x25000334); R(0x00000000,NO_Mask);
  A(0x25000338); R(0x00000000,NO_Mask);
  A(0x2500033c); R(0x00000000,NO_Mask);
  A(0x25000340); R(0x00000000,NO_Mask);
  A(0x25000344); R(0x00000000,NO_Mask);
  A(0x25000348); R(0x00000000,NO_Mask);
  A(0x2500034c); R(0x00000000,NO_Mask);
  A(0x25000350); R(0x00000000,NO_Mask);
  A(0x25000354); R(0x00000000,NO_Mask);
  A(0x25000358); R(0x00000000,NO_Mask);
  A(0x2500035c); R(0x00000000,NO_Mask);
  A(0x25000360); R(0x00000000,NO_Mask);
  A(0x25000364); R(0x00000000,NO_Mask);
  A(0x25000368); R(0x00000000,NO_Mask);
  A(0x2500036c); R(0x00000000,NO_Mask);
  A(0x25000370); R(0x00000000,NO_Mask);
  A(0x25000374); R(0x00000000,NO_Mask);
  A(0x25000378); R(0x00000000,NO_Mask);
  A(0x2500037c); R(0x00000000,NO_Mask);
  A(0x25000380); R(0x00000000,NO_Mask);
  A(0x25000384); R(0x00000000,NO_Mask);
  A(0x25000388); R(0x00000000,NO_Mask);
  A(0x2500038c); R(0x00000000,NO_Mask);
  A(0x25000390); R(0x00000000,NO_Mask);
  A(0x25000394); R(0x00000000,NO_Mask);
  A(0x25000398); R(0x00000000,NO_Mask);
  A(0x2500039c); R(0x00000000,NO_Mask);
  A(0x250003a0); R(0x00000000,NO_Mask);
  A(0x250003a4); R(0x00000000,NO_Mask);
  A(0x250003a8); R(0x00000000,NO_Mask);
  A(0x250003ac); R(0x00000000,NO_Mask);
  A(0x250003b0); R(0x00000000,NO_Mask);
  A(0x250003b4); R(0x00000000,NO_Mask);
  A(0x250003b8); R(0x00000000,NO_Mask);
  A(0x250003bc); R(0x00000000,NO_Mask);
  A(0x250003c0); R(0x00000000,NO_Mask);
  A(0x250003c4); R(0x00000000,NO_Mask);
  A(0x250003c8); R(0x00000000,NO_Mask);
  A(0x250003cc); R(0x00000000,NO_Mask);
  A(0x250003d0); R(0x00000000,NO_Mask);
  A(0x250003d4); R(0x00000000,NO_Mask);
  A(0x250003d8); R(0x00000000,NO_Mask);
  A(0x250003dc); R(0x00000000,NO_Mask);
  A(0x250003e0); R(0x00000000,NO_Mask);
  A(0x250003e4); R(0x00000000,NO_Mask);
  A(0x250003e8); R(0x00000000,NO_Mask);
  A(0x250003ec); R(0x00000000,NO_Mask);
  A(0x250003f0); R(0x00000000,NO_Mask);
  A(0x250003f4); R(0x00000000,NO_Mask);
  A(0x250003f8); R(0x00000000,NO_Mask);
  A(0x250003fc); R(0x00000000,NO_Mask);


  E();

  return 0;

}

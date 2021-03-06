#include "header.h"
#include "ticmacros.h"

#define NO_Mask 0xFFFFFFFF /* 32 bits 1 */
#define All_Mask 0x00000000

int main()
{



  /* Initial DATA */
  /* =================== */

  /* Residual Y */
  /* raw data */
  A(0x25000000); W(0x0f0f0f0f);

  A(0x25000004); W(0x0f0f0f0f);

  A(0x25000008); W(0x0f0f0f0f);

  A(0x2500000c); W(0x0f0f0f0f);

  A(0x25000010); W(0x0f0f0f0f);

  A(0x25000014); W(0x0f0f0f0f);

  A(0x25000018); W(0x0f0f0f0f);

  A(0x2500001c); W(0x0f0f0f0f);

  A(0x25000020); W(0x0f0f0f0f);

  A(0x25000024); W(0x0f0f0f0f);

  A(0x25000028); W(0x0f0f0f0f);

  A(0x2500002c); W(0x0f0f0f0f);

  A(0x25000030); W(0x0f0f0f0f);

  A(0x25000034); W(0x0f0f0f0f);

  A(0x25000038); W(0x0f0f0f0f);

  A(0x2500003c); W(0x0f0f0f0f);

  A(0x25000040); W(0x0f0f0f0f);

  A(0x25000044); W(0x0f0f0f0f);

  A(0x25000048); W(0x0f0f0f0f);

  A(0x2500004c); W(0x0f0f0f0f);

  A(0x25000050); W(0x0f0f0f0f);

  A(0x25000054); W(0x0f0f0f0f);

  A(0x25000058); W(0x0f0f0f0f);

  A(0x2500005c); W(0x0f0f0f0f);

  A(0x25000060); W(0x0f0f0f0f);

  A(0x25000064); W(0x0f0f0f0f);

  A(0x25000068); W(0x0f0f0f0f);

  A(0x2500006c); W(0x0f0f0f0f);

  A(0x25000070); W(0x0f0f0f0f);

  A(0x25000074); W(0x0f0f0f0f);

  A(0x25000078); W(0x0f0f0f0f);

  A(0x2500007c); W(0x0f0f0f0f);

  A(0x25000080); W(0x0f0f0f0f);

  A(0x25000084); W(0x0f0f0f0f);

  A(0x25000088); W(0x0f0f0f0f);

  A(0x2500008c); W(0x0f0f0f0f);

  A(0x25000090); W(0x0f0f0f0f);

  A(0x25000094); W(0x0f0f0f0f);

  A(0x25000098); W(0x0f0f0f0f);

  A(0x2500009c); W(0x0f0f0f0f);

  A(0x250000a0); W(0x0f0f0f0f);

  A(0x250000a4); W(0x0f0f0f0f);

  A(0x250000a8); W(0x0f0f0f0f);

  A(0x250000ac); W(0x0f0f0f0f);

  A(0x250000b0); W(0x0f0f0f0f);

  A(0x250000b4); W(0x0f0f0f0f);

  A(0x250000b8); W(0x0f0f0f0f);

  A(0x250000bc); W(0x0f0f0f0f);

  A(0x250000c0); W(0x0f0f0f0f);

  A(0x250000c4); W(0x0f0f0f0f);

  A(0x250000c8); W(0x0f0f0f0f);

  A(0x250000cc); W(0x0f0f0f0f);

  A(0x250000d0); W(0x0f0f0f0f);

  A(0x250000d4); W(0x0f0f0f0f);

  A(0x250000d8); W(0x0f0f0f0f);

  A(0x250000dc); W(0x0f0f0f0f);

  A(0x250000e0); W(0x0f0f0f0f);

  A(0x250000e4); W(0x0f0f0f0f);

  A(0x250000e8); W(0x0f0f0f0f);

  A(0x250000ec); W(0x0f0f0f0f);

  A(0x250000f0); W(0x0f0f0f0f);

  A(0x250000f4); W(0x0f0f0f0f);

  A(0x250000f8); W(0x0f0f0f0f);

  A(0x250000fc); W(0x0f0f0f0f);

  /* PreRowPelY */
  A(0x25000100); W(0x0a0a0a0a);

  A(0x25000104); W(0x0a0a0a0a);

  A(0x25000108); W(0x0a0a0a0a);

  A(0x2500010c); W(0x0a0a0a0a);

  A(0x25000110); W(0x0a0a0a0a);

  A(0x25000114); W(0x00000000);

  /* PreColPelY */
  A(0x25000118); W(0x14141414);

  A(0x2500011c); W(0x14141414);

  A(0x25000120); W(0x14141414);

  A(0x25000124); W(0x14141414);

  A(0x25000128); W(0x00000014);

  A(0x2500012c); W(0x00000000);

  /* parameters setting */
  A(0x25000130); W(0x01400800);

  A(0x25000134); W(0x03380238);

  A(0x25000138); W(0x01000118);

  A(0x2500013c); W(0x00000000);

  /* Intra4x4PredMode */
  A(0x25000140); W(0x00000102);
  A(0x25000144); W(0x00000101);
  A(0x25000148); W(0x00000000);
  A(0x2500014c); W(0x00000000);
  /* =================== */
  /* End of initial DATA */


  /* compare result */
  /* Keep reading CBUSY for delaying the result check */
  int i;

  A(0x24050008);
  for (i = 0; i <= 800; i++)
    R(0x00000000,All_Mask);

  /* OutYReconstructed */
  A(0x25000238); R(0x0f0f0f0f,NO_Mask);
  A(0x2500023c); R(0x0f0f0f0f,NO_Mask);
  A(0x25000240); R(0x0f0f0f0f,NO_Mask);
  A(0x25000244); R(0x0f0f0f0f,NO_Mask);
  A(0x25000248); R(0x0f0f0f0f,NO_Mask);
  A(0x2500024c); R(0x0f0f0f0f,NO_Mask);
  A(0x25000250); R(0x0f0f0f0f,NO_Mask);
  A(0x25000254); R(0x0f0f0f0f,NO_Mask);
  A(0x25000258); R(0x0f0f0f0f,NO_Mask);
  A(0x2500025c); R(0x0f0f0f0f,NO_Mask);
  A(0x25000260); R(0x0f0f0f0f,NO_Mask);
  A(0x25000264); R(0x0f0f0f0f,NO_Mask);
  A(0x25000268); R(0x0f0f0f0f,NO_Mask);
  A(0x2500026c); R(0x0f0f0f0f,NO_Mask);
  A(0x25000270); R(0x0f0f0f0f,NO_Mask);
  A(0x25000274); R(0x0f0f0f0f,NO_Mask);
  A(0x25000278); R(0x0f0f0f0f,NO_Mask);
  A(0x2500027c); R(0x0f0f0f0f,NO_Mask);
  A(0x25000280); R(0x0f0f0f0f,NO_Mask);
  A(0x25000284); R(0x0f0f0f0f,NO_Mask);
  A(0x25000288); R(0x0f0f0f0f,NO_Mask);
  A(0x2500028c); R(0x0f0f0f0f,NO_Mask);
  A(0x25000290); R(0x0f0f0f0f,NO_Mask);
  A(0x25000294); R(0x0f0f0f0f,NO_Mask);
  A(0x25000298); R(0x0f0f0f0f,NO_Mask);
  A(0x2500029c); R(0x0f0f0f0f,NO_Mask);
  A(0x250002a0); R(0x0f0f0f0f,NO_Mask);
  A(0x250002a4); R(0x0f0f0f0f,NO_Mask);
  A(0x250002a8); R(0x0f0f0f0f,NO_Mask);
  A(0x250002ac); R(0x0f0f0f0f,NO_Mask);
  A(0x250002b0); R(0x0f0f0f0f,NO_Mask);
  A(0x250002b4); R(0x0f0f0f0f,NO_Mask);
  A(0x250002b8); R(0x0f0f0f0f,NO_Mask);
  A(0x250002bc); R(0x0f0f0f0f,NO_Mask);
  A(0x250002c0); R(0x0f0f0f0f,NO_Mask);
  A(0x250002c4); R(0x0f0f0f0f,NO_Mask);
  A(0x250002c8); R(0x0f0f0f0f,NO_Mask);
  A(0x250002cc); R(0x0f0f0f0f,NO_Mask);
  A(0x250002d0); R(0x0f0f0f0f,NO_Mask);
  A(0x250002d4); R(0x0f0f0f0f,NO_Mask);
  A(0x250002d8); R(0x0f0f0f0f,NO_Mask);
  A(0x250002dc); R(0x0f0f0f0f,NO_Mask);
  A(0x250002e0); R(0x0f0f0f0f,NO_Mask);
  A(0x250002e4); R(0x0f0f0f0f,NO_Mask);
  A(0x250002e8); R(0x0f0f0f0f,NO_Mask);
  A(0x250002ec); R(0x0f0f0f0f,NO_Mask);
  A(0x250002f0); R(0x0f0f0f0f,NO_Mask);
  A(0x250002f4); R(0x0f0f0f0f,NO_Mask);
  A(0x250002f8); R(0x0f0f0f0f,NO_Mask);
  A(0x250002fc); R(0x0f0f0f0f,NO_Mask);
  A(0x25000300); R(0x0f0f0f0f,NO_Mask);
  A(0x25000304); R(0x0f0f0f0f,NO_Mask);
  A(0x25000308); R(0x0f0f0f0f,NO_Mask);
  A(0x2500030c); R(0x0f0f0f0f,NO_Mask);
  A(0x25000310); R(0x0f0f0f0f,NO_Mask);
  A(0x25000314); R(0x0f0f0f0f,NO_Mask);
  A(0x25000318); R(0x0f0f0f0f,NO_Mask);
  A(0x2500031c); R(0x0f0f0f0f,NO_Mask);
  A(0x25000320); R(0x0f0f0f0f,NO_Mask);
  A(0x25000324); R(0x0f0f0f0f,NO_Mask);
  A(0x25000328); R(0x0f0f0f0f,NO_Mask);
  A(0x2500032c); R(0x0f0f0f0f,NO_Mask);
  A(0x25000330); R(0x0f0f0f0f,NO_Mask);
  A(0x25000334); R(0x0f0f0f0f,NO_Mask);
  /* Residual */
  A(0x25000338); R(0xff8fff8f,NO_Mask);
  A(0x2500033c); R(0xff8fff8f,NO_Mask);
  A(0x25000340); R(0x00000000,NO_Mask);
  A(0x25000344); R(0x00000000,NO_Mask);
  A(0x25000348); R(0x00000000,NO_Mask);
  A(0x2500034c); R(0x00000000,NO_Mask);
  A(0x25000350); R(0x00000000,NO_Mask);
  A(0x25000354); R(0x00000000,NO_Mask);
  A(0x25000358); R(0xff8fff8f,NO_Mask);
  A(0x2500035c); R(0xff8fff8f,NO_Mask);
  A(0x25000360); R(0x00000000,NO_Mask);
  A(0x25000364); R(0x00000000,NO_Mask);
  A(0x25000368); R(0x00000000,NO_Mask);
  A(0x2500036c); R(0x00000000,NO_Mask);
  A(0x25000370); R(0x00000000,NO_Mask);
  A(0x25000374); R(0x00000000,NO_Mask);
  A(0x25000378); R(0xff8fff8f,NO_Mask);
  A(0x2500037c); R(0xff8fff8f,NO_Mask);
  A(0x25000380); R(0x00000000,NO_Mask);
  A(0x25000384); R(0x00000000,NO_Mask);
  A(0x25000388); R(0x00000000,NO_Mask);
  A(0x2500038c); R(0x00000000,NO_Mask);
  A(0x25000390); R(0x00000000,NO_Mask);
  A(0x25000394); R(0x00000000,NO_Mask);
  A(0x25000398); R(0xff8fff8f,NO_Mask);
  A(0x2500039c); R(0xff8fff8f,NO_Mask);
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
  A(0x25000400); R(0x00000000,NO_Mask);
  A(0x25000404); R(0x00000000,NO_Mask);
  A(0x25000408); R(0x00000000,NO_Mask);
  A(0x2500040c); R(0x00000000,NO_Mask);
  A(0x25000410); R(0x00000000,NO_Mask);
  A(0x25000414); R(0x00000000,NO_Mask);
  A(0x25000418); R(0x00000000,NO_Mask);
  A(0x2500041c); R(0x00000000,NO_Mask);
  A(0x25000420); R(0x00000000,NO_Mask);
  A(0x25000424); R(0x00000000,NO_Mask);
  A(0x25000428); R(0x00000000,NO_Mask);
  A(0x2500042c); R(0x00000000,NO_Mask);
  A(0x25000430); R(0x00000000,NO_Mask);
  A(0x25000434); R(0x00000000,NO_Mask);
  A(0x25000438); R(0x00000000,NO_Mask);
  A(0x2500043c); R(0x00000000,NO_Mask);
  A(0x25000440); R(0x00000000,NO_Mask);
  A(0x25000444); R(0x00000000,NO_Mask);
  A(0x25000448); R(0x00000000,NO_Mask);
  A(0x2500044c); R(0x00000000,NO_Mask);
  A(0x25000450); R(0x00000000,NO_Mask);
  A(0x25000454); R(0x00000000,NO_Mask);
  A(0x25000458); R(0x00000000,NO_Mask);
  A(0x2500045c); R(0x00000000,NO_Mask);
  A(0x25000460); R(0x00000000,NO_Mask);
  A(0x25000464); R(0x00000000,NO_Mask);
  A(0x25000468); R(0x00000000,NO_Mask);
  A(0x2500046c); R(0x00000000,NO_Mask);
  A(0x25000470); R(0x00000000,NO_Mask);
  A(0x25000474); R(0x00000000,NO_Mask);
  A(0x25000478); R(0x00000000,NO_Mask);
  A(0x2500047c); R(0x00000000,NO_Mask);
  A(0x25000480); R(0x00000000,NO_Mask);
  A(0x25000484); R(0x00000000,NO_Mask);
  A(0x25000488); R(0x00000000,NO_Mask);
  A(0x2500048c); R(0x00000000,NO_Mask);
  A(0x25000490); R(0x00000000,NO_Mask);
  A(0x25000494); R(0x00000000,NO_Mask);
  A(0x25000498); R(0x00000000,NO_Mask);
  A(0x2500049c); R(0x00000000,NO_Mask);
  A(0x250004a0); R(0x00000000,NO_Mask);
  A(0x250004a4); R(0x00000000,NO_Mask);
  A(0x250004a8); R(0x00000000,NO_Mask);
  A(0x250004ac); R(0x00000000,NO_Mask);
  A(0x250004b0); R(0x00000000,NO_Mask);
  A(0x250004b4); R(0x00000000,NO_Mask);
  A(0x250004b8); R(0x00000000,NO_Mask);
  A(0x250004bc); R(0x00000000,NO_Mask);
  A(0x250004c0); R(0x00000000,NO_Mask);
  A(0x250004c4); R(0x00000000,NO_Mask);
  A(0x250004c8); R(0x00000000,NO_Mask);
  A(0x250004cc); R(0x00000000,NO_Mask);
  A(0x250004d0); R(0x00000000,NO_Mask);
  A(0x250004d4); R(0x00000000,NO_Mask);
  A(0x250004d8); R(0x00000000,NO_Mask);
  A(0x250004dc); R(0x00000000,NO_Mask);
  A(0x250004e0); R(0x00000000,NO_Mask);
  A(0x250004e4); R(0x00000000,NO_Mask);
  A(0x250004e8); R(0x00000000,NO_Mask);
  A(0x250004ec); R(0x00000000,NO_Mask);
  A(0x250004f0); R(0x00000000,NO_Mask);
  A(0x250004f4); R(0x00000000,NO_Mask);
  A(0x250004f8); R(0x00000000,NO_Mask);
  A(0x250004fc); R(0x00000000,NO_Mask);
  A(0x25000500); R(0x00000000,NO_Mask);
  A(0x25000504); R(0x00000000,NO_Mask);
  A(0x25000508); R(0x00000000,NO_Mask);
  A(0x2500050c); R(0x00000000,NO_Mask);
  A(0x25000510); R(0x00000000,NO_Mask);
  A(0x25000514); R(0x00000000,NO_Mask);
  A(0x25000518); R(0x00000000,NO_Mask);
  A(0x2500051c); R(0x00000000,NO_Mask);
  A(0x25000520); R(0x00000000,NO_Mask);
  A(0x25000524); R(0x00000000,NO_Mask);
  A(0x25000528); R(0x00000000,NO_Mask);
  A(0x2500052c); R(0x00000000,NO_Mask);
  A(0x25000530); R(0x00000000,NO_Mask);
  A(0x25000534); R(0x00000000,NO_Mask);


  E();

  return 0;

}

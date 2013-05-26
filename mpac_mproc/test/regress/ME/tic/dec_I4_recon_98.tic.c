#include "header.h"
#include "ticmacros.h"

#define NO_Mask 0xFFFFFFFF /* 32 bits 1 */
#define All_Mask 0x00000000

int main()
{



  /* Initial DATA */
  /* =================== */

  /* Residual Y */
  A(0x25000000); W(0xfff2ffef);

  A(0x25000004); W(0xfff4fff4);

  A(0x25000008); W(0x0001fffb);

  A(0x2500000c); W(0x00010000);

  A(0x25000010); W(0xfffdfff8);

  A(0x25000014); W(0xfffcfff8);

  A(0x25000018); W(0xfffd0001);

  A(0x2500001c); W(0x0004fffd);

  A(0x25000020); W(0xffecffec);

  A(0x25000024); W(0xfff3ffec);

  A(0x25000028); W(0xfffa0002);

  A(0x2500002c); W(0x00010000);

  A(0x25000030); W(0x0001fffb);

  A(0x25000034); W(0xffff0000);

  A(0x25000038); W(0xfffe0000);

  A(0x2500003c); W(0x00050000);

  A(0x25000040); W(0xfff0ffed);

  A(0x25000044); W(0xfff0fff5);

  A(0x25000048); W(0x0005ffff);

  A(0x2500004c); W(0x00010001);

  A(0x25000050); W(0x00010000);

  A(0x25000054); W(0xfffdfffd);

  A(0x25000058); W(0xffff0005);

  A(0x2500005c); W(0xfffdfffd);

  A(0x25000060); W(0xffefffef);

  A(0x25000064); W(0xfff0ffed);

  A(0x25000068); W(0x00040000);

  A(0x2500006c); W(0x00040001);

  A(0x25000070); W(0xfffdffff);

  A(0x25000074); W(0xfffbffff);

  A(0x25000078); W(0xffff0004);

  A(0x2500007c); W(0xfffd0000);

  A(0x25000080); W(0x00030004);

  A(0x25000084); W(0xfffc0004);

  A(0x25000088); W(0xffff0001);

  A(0x2500008c); W(0xfffb0001);

  A(0x25000090); W(0xfffafffb);

  A(0x25000094); W(0xfffc0001);

  A(0x25000098); W(0x0001ffff);

  A(0x2500009c); W(0x0005ffff);

  A(0x250000a0); W(0x0002fffe);

  A(0x250000a4); W(0xfffe0000);

  A(0x250000a8); W(0xfffd0000);

  A(0x250000ac); W(0x00000001);

  A(0x250000b0); W(0xffffffff);

  A(0x250000b4); W(0x00000002);

  A(0x250000b8); W(0x00010004);

  A(0x250000bc); W(0x00020002);

  A(0x250000c0); W(0x0002fffd);

  A(0x250000c4); W(0x00000002);

  A(0x250000c8); W(0x0002fffc);

  A(0x250000cc); W(0x0000fffd);

  A(0x250000d0); W(0x00000001);

  A(0x250000d4); W(0xfffe0000);

  A(0x250000d8); W(0xfffe0002);

  A(0x250000dc); W(0xfffffffd);

  A(0x250000e0); W(0x00000001);

  A(0x250000e4); W(0xfffbfffb);

  A(0x250000e8); W(0x00030001);

  A(0x250000ec); W(0x00000001);

  A(0x250000f0); W(0x0002fffc);

  A(0x250000f4); W(0xfffefffe);

  A(0x250000f8); W(0xfffd0000);

  A(0x250000fc); W(0x00010006);

  A(0x25000100); W(0x00010003);

  A(0x25000104); W(0xffff0002);

  A(0x25000108); W(0xfffeffff);

  A(0x2500010c); W(0xffffffff);

  A(0x25000110); W(0xffffffff);

  A(0x25000114); W(0xfffc0000);

  A(0x25000118); W(0x00020004);

  A(0x2500011c); W(0xfffd0001);

  A(0x25000120); W(0xfffafffe);

  A(0x25000124); W(0x00000004);

  A(0x25000128); W(0xfffd0002);

  A(0x2500012c); W(0xfffd0001);

  A(0x25000130); W(0xfffd0000);

  A(0x25000134); W(0x0002ffff);

  A(0x25000138); W(0xfffcffff);

  A(0x2500013c); W(0xfffcfffc);

  A(0x25000140); W(0x0000fffb);

  A(0x25000144); W(0x00040001);

  A(0x25000148); W(0x0001fffe);

  A(0x2500014c); W(0x00050002);

  A(0x25000150); W(0x0001fffe);

  A(0x25000154); W(0x0006fffe);

  A(0x25000158); W(0x0001fffd);

  A(0x2500015c); W(0x0003fffe);

  A(0x25000160); W(0xfffb0002);

  A(0x25000164); W(0x0006ffff);

  A(0x25000168); W(0x00010000);

  A(0x2500016c); W(0x0004fffa);

  A(0x25000170); W(0xffff0000);

  A(0x25000174); W(0xffff0000);

  A(0x25000178); W(0x00030002);

  A(0x2500017c); W(0xfffc0000);

  A(0x25000180); W(0xffffffff);

  A(0x25000184); W(0xfffa0008);

  A(0x25000188); W(0xfffeffff);

  A(0x2500018c); W(0x0005ffff);

  A(0x25000190); W(0xfffe0000);

  A(0x25000194); W(0xfffa0000);

  A(0x25000198); W(0xfffdfffd);

  A(0x2500019c); W(0xfffd0004);

  A(0x250001a0); W(0x0000fffc);

  A(0x250001a4); W(0xfff8ffff);

  A(0x250001a8); W(0x00030001);

  A(0x250001ac); W(0x00020000);

  A(0x250001b0); W(0x0002fffa);

  A(0x250001b4); W(0xfffb0001);

  A(0x250001b8); W(0xffff0003);

  A(0x250001bc); W(0x0001fffe);

  A(0x250001c0); W(0x0000fffd);

  A(0x250001c4); W(0xfffe0006);

  A(0x250001c8); W(0xfffafffc);

  A(0x250001cc); W(0x0003fffd);

  A(0x250001d0); W(0xfffcfffd);

  A(0x250001d4); W(0x0001fffd);

  A(0x250001d8); W(0xfffe0000);

  A(0x250001dc); W(0x00040005);

  A(0x250001e0); W(0x0000fffb);

  A(0x250001e4); W(0xfffeffff);

  A(0x250001e8); W(0xfffdfffe);

  A(0x250001ec); W(0xfffefffb);

  A(0x250001f0); W(0x0005fffd);

  A(0x250001f4); W(0xfffc0001);

  A(0x250001f8); W(0x00050000);

  A(0x250001fc); W(0xfffd0001);

  /* PreRowPelY */
  A(0x25000200); W(0x0a0a0a0a);

  A(0x25000204); W(0x0a0a0a0a);

  A(0x25000208); W(0x0a0a0a0a);

  A(0x2500020c); W(0x0a0a0a0a);

  A(0x25000210); W(0x0a0a0a0a);

  A(0x25000214); W(0x00000000);

  /* PreColPelY */
  A(0x25000218); W(0x14141414);

  A(0x2500021c); W(0x14141414);

  A(0x25000220); W(0x14141414);

  A(0x25000224); W(0x10181414);

  A(0x25000228); W(0x00000014);

  A(0x2500022c); W(0x00000000);

  /* Intra4x4PredMode */
  A(0x25000230); W(0x06030101);
  A(0x25000234); W(0x04030201);
  A(0x25000238); W(0x01000000);
  A(0x2500023c); W(0x02080706);
  /* parameters setting */
  A(0x25000240); W(0x02300900);

  A(0x25000244); W(0xffff0258);

  A(0x25000248); W(0x02000218);

  A(0x2500024c); W(0x00000000);

  /* =================== */
  /* End of initial DATA */


  /* compare result */
  /* Keep reading CBUSY for delaying the result check */
  int i;

  A(0x24050008);
  for (i = 0; i <= 400; i++)
    R(0x00000000,All_Mask);

  /* OutYReconstructed */
  A(0x25000258); R(0x08080603,NO_Mask);
  A(0x2500025c); R(0x09080903,NO_Mask);
  A(0x25000260); R(0x05010601,NO_Mask);
  A(0x25000264); R(0x08010105,NO_Mask);
  A(0x25000268); R(0x07000000,NO_Mask);
  A(0x2500026c); R(0x08070109,NO_Mask);
  A(0x25000270); R(0x07080903,NO_Mask);
  A(0x25000274); R(0x09040204,NO_Mask);
  A(0x25000278); R(0x04090401,NO_Mask);
  A(0x2500027c); R(0x05050903,NO_Mask);
  A(0x25000280); R(0x02020605,NO_Mask);
  A(0x25000284); R(0x01010309,NO_Mask);
  A(0x25000288); R(0x04010303,NO_Mask);
  A(0x2500028c); R(0x08050804,NO_Mask);
  A(0x25000290); R(0x03070507,NO_Mask);
  A(0x25000294); R(0x01040308,NO_Mask);
  A(0x25000298); R(0x01070507,NO_Mask);
  A(0x2500029c); R(0x01060204,NO_Mask);
  A(0x250002a0); R(0x02060001,NO_Mask);
  A(0x250002a4); R(0x08040703,NO_Mask);
  A(0x250002a8); R(0x04050500,NO_Mask);
  A(0x250002ac); R(0x03040003,NO_Mask);
  A(0x250002b0); R(0x05080405,NO_Mask);
  A(0x250002b4); R(0x07080507,NO_Mask);
  A(0x250002b8); R(0x07080700,NO_Mask);
  A(0x250002bc); R(0x03000602,NO_Mask);
  A(0x250002c0); R(0x01050606,NO_Mask);
  A(0x250002c4); R(0x05010105,NO_Mask);
  A(0x250002c8); R(0x02020606,NO_Mask);
  A(0x250002cc); R(0x04070806,NO_Mask);
  A(0x250002d0); R(0x00010702,NO_Mask);
  A(0x250002d4); R(0x05090002,NO_Mask);
  A(0x250002d8); R(0x01040709,NO_Mask);
  A(0x250002dc); R(0x03060605,NO_Mask);
  A(0x250002e0); R(0x00040203,NO_Mask);
  A(0x250002e4); R(0x02080705,NO_Mask);
  A(0x250002e8); R(0x02060004,NO_Mask);
  A(0x250002ec); R(0x01080508,NO_Mask);
  A(0x250002f0); R(0x05030002,NO_Mask);
  A(0x250002f4); R(0x01020202,NO_Mask);
  A(0x250002f8); R(0x06030601,NO_Mask);
  A(0x250002fc); R(0x09090904,NO_Mask);
  A(0x25000300); R(0x09000503,NO_Mask);
  A(0x25000304); R(0x08030802,NO_Mask);
  A(0x25000308); R(0x08010108,NO_Mask);
  A(0x2500030c); R(0x08010906,NO_Mask);
  A(0x25000310); R(0x03050609,NO_Mask);
  A(0x25000314); R(0x01050908,NO_Mask);
  A(0x25000318); R(0x02090007,NO_Mask);
  A(0x2500031c); R(0x07010001,NO_Mask);
  A(0x25000320); R(0x00060305,NO_Mask);
  A(0x25000324); R(0x01080101,NO_Mask);
  A(0x25000328); R(0x00000104,NO_Mask);
  A(0x2500032c); R(0x02000301,NO_Mask);
  A(0x25000330); R(0x00080800,NO_Mask);
  A(0x25000334); R(0x05020307,NO_Mask);
  A(0x25000338); R(0x06070105,NO_Mask);
  A(0x2500033c); R(0x09030002,NO_Mask);
  A(0x25000340); R(0x05010104,NO_Mask);
  A(0x25000344); R(0x08090204,NO_Mask);
  A(0x25000348); R(0x06000103,NO_Mask);
  A(0x2500034c); R(0x04010304,NO_Mask);
  A(0x25000350); R(0x00050901,NO_Mask);
  A(0x25000354); R(0x01050904,NO_Mask);


  E();

  return 0;

}

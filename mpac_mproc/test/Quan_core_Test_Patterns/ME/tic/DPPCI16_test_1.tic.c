#include "header.h"
#include "ticmacros.h"

#define NO_Mask 0xFFFFFFFF /* 32 bits 1 */
#define All_Mask 0x00000000

int main()
{



  /* Initial DATA */
  /* =================== */

  /* Residual */
  A(0x25000000); W(0xffa1002d);

  A(0x25000004); W(0x0016fffc);

  A(0x25000008); W(0x0086000b);

  A(0x2500000c); W(0x00820009);

  A(0x25000010); W(0x0038005d);

  A(0x25000014); W(0x001dffc5);

  A(0x25000018); W(0x002b003a);

  A(0x2500001c); W(0x002f0064);

  A(0x25000020); W(0xff98000e);

  A(0x25000024); W(0x0073ffc2);

  A(0x25000028); W(0x0044ff94);

  A(0x2500002c); W(0x005b0023);

  A(0x25000030); W(0x0050002b);

  A(0x25000034); W(0x0074002c);

  A(0x25000038); W(0x0077ffb7);

  A(0x2500003c); W(0x005a002c);

  A(0x25000040); W(0xff9eff8e);

  A(0x25000044); W(0x000fffe6);

  A(0x25000048); W(0x0066ff9a);

  A(0x2500004c); W(0x006d0007);

  A(0x25000050); W(0x00430014);

  A(0x25000054); W(0xffc40001);

  A(0x25000058); W(0xffdbffe4);

  A(0x2500005c); W(0x00690069);

  A(0x25000060); W(0xffa2ffe9);

  A(0x25000064); W(0xfff40052);

  A(0x25000068); W(0xffeb005c);

  A(0x2500006c); W(0xfffdffc5);

  A(0x25000070); W(0x0068ffb1);

  A(0x25000074); W(0xffdeffe7);

  A(0x25000078); W(0x00890055);

  A(0x2500007c); W(0x005affae);

  A(0x25000080); W(0x000bff9d);

  A(0x25000084); W(0xffadffdf);

  A(0x25000088); W(0x005dffe7);

  A(0x2500008c); W(0x0071ff91);

  A(0x25000090); W(0x00080016);

  A(0x25000094); W(0x0070ffab);

  A(0x25000098); W(0xff8a0059);

  A(0x2500009c); W(0xffb8004f);

  A(0x250000a0); W(0x0018ffa2);

  A(0x250000a4); W(0x00750022);

  A(0x250000a8); W(0x005e0079);

  A(0x250000ac); W(0xffa1ffe8);

  A(0x250000b0); W(0x0046003c);

  A(0x250000b4); W(0x0007fff5);

  A(0x250000b8); W(0x001a0045);

  A(0x250000bc); W(0x0059ffd7);

  A(0x250000c0); W(0x002dff9b);

  A(0x250000c4); W(0xfff8007c);

  A(0x250000c8); W(0x00830000);

  A(0x250000cc); W(0xff8cffdf);

  A(0x250000d0); W(0x00000001);

  A(0x250000d4); W(0xffd00072);

  A(0x250000d8); W(0x00380000);

  A(0x250000dc); W(0x0019ffff);

  A(0x250000e0); W(0xff97ffc6);

  A(0x250000e4); W(0xffb50004);

  A(0x250000e8); W(0x0062006b);

  A(0x250000ec); W(0x001dffcc);

  A(0x250000f0); W(0x0038001e);

  A(0x250000f4); W(0xffdaff9b);

  A(0x250000f8); W(0xffe8ffc8);

  A(0x250000fc); W(0xffd9ffa9);

  A(0x25000100); W(0xff9bff8b);

  A(0x25000104); W(0x00010047);

  A(0x25000108); W(0xff9cff95);

  A(0x2500010c); W(0x000c0003);

  A(0x25000110); W(0xffec0012);

  A(0x25000114); W(0x00880053);

  A(0x25000118); W(0xffc8ff9a);

  A(0x2500011c); W(0xffd60017);

  A(0x25000120); W(0xff91ffd5);

  A(0x25000124); W(0xffb70001);

  A(0x25000128); W(0x0044006a);

  A(0x2500012c); W(0xfffe004a);

  A(0x25000130); W(0x005bfff2);

  A(0x25000134); W(0x0030004e);

  A(0x25000138); W(0x006dffba);

  A(0x2500013c); W(0xffbb007f);

  A(0x25000140); W(0x003c007f);

  A(0x25000144); W(0xff8a0033);

  A(0x25000148); W(0xffac004e);

  A(0x2500014c); W(0xffd6000c);

  A(0x25000150); W(0xffd5000e);

  A(0x25000154); W(0x001effd4);

  A(0x25000158); W(0x00620013);

  A(0x2500015c); W(0x005f006a);

  A(0x25000160); W(0xffe20069);

  A(0x25000164); W(0x0049ff8c);

  A(0x25000168); W(0x004cff9c);

  A(0x2500016c); W(0x0004ffbe);

  A(0x25000170); W(0x0082001e);

  A(0x25000174); W(0x004effaa);

  A(0x25000178); W(0xff9f0066);

  A(0x2500017c); W(0x005b007f);

  A(0x25000180); W(0x00280051);

  A(0x25000184); W(0x0015005b);

  A(0x25000188); W(0xffdd004b);

  A(0x2500018c); W(0xffcf0061);

  A(0x25000190); W(0xffab0029);

  A(0x25000194); W(0xffb20064);

  A(0x25000198); W(0x00440083);

  A(0x2500019c); W(0x00630087);

  A(0x250001a0); W(0x0089ff9c);

  A(0x250001a4); W(0xffae0022);

  A(0x250001a8); W(0x0056004c);

  A(0x250001ac); W(0xffe00028);

  A(0x250001b0); W(0x0048004f);

  A(0x250001b4); W(0x002bffa4);

  A(0x250001b8); W(0xff99005d);

  A(0x250001bc); W(0x0024fffc);

  A(0x250001c0); W(0xffcd0038);

  A(0x250001c4); W(0xfff9ffaf);

  A(0x250001c8); W(0x00860020);

  A(0x250001cc); W(0xffbf003e);

  A(0x250001d0); W(0x0018ffa8);

  A(0x250001d4); W(0xffa1ffe8);

  A(0x250001d8); W(0xffe5ffd3);

  A(0x250001dc); W(0xffe5007a);

  A(0x250001e0); W(0x0013ffe5);

  A(0x250001e4); W(0xffa7000a);

  A(0x250001e8); W(0xffa8ffdf);

  A(0x250001ec); W(0xffa4fffd);

  A(0x250001f0); W(0x00170067);

  A(0x250001f4); W(0x003a0045);

  A(0x250001f8); W(0xffb70026);

  A(0x250001fc); W(0xffd4ffd5);

  /* PreRowPelY */
  A(0x25000200); W(0xb61c83d2);

  A(0x25000204); W(0x2a14ca46);

  A(0x25000208); W(0xe4a0134a);

  A(0x2500020c); W(0x47d907e9);

  /* PreColPelY */
  A(0x25000210); W(0x0fde5ef5);

  A(0x25000214); W(0xae0da011);

  A(0x25000218); W(0x3b94a366);

  A(0x2500021c); W(0x559644a5);

  A(0x25000220); W(0x0000007d);

  /* parameters setting */
  A(0x25000228); W(0x00020f00);

  A(0x2500022c); W(0xffff0300);

  A(0x25000230); W(0x02000210);

  A(0x25000234); W(0x00000000);

  /* =================== */
  /* End of initial DATA */


  /* compare result */
  /* Keep reading CBUSY for delaying the result check */
  int i;

  A(0x24050008);
  for (i = 0; i <= 300; i++)
    R(0x00000000,All_Mask);

  /* OutYReconstructed */
  A(0x25000300); R(0x8c7217a3,NO_Mask);
  A(0x25000304); R(0xf87ffc81,NO_Mask);
  A(0x25000308); R(0x933baed3,NO_Mask);
  A(0x2500030c); R(0xa5daa1b0,NO_Mask);
  A(0x25000310); R(0xe9380e84,NO_Mask);
  A(0x25000314); R(0xd199ba0a,NO_Mask);
  A(0x25000318); R(0xeaa2c6a1,NO_Mask);
  A(0x2500031c); R(0xd0a2ed2d,NO_Mask);
  A(0x25000320); R(0x855c1404,NO_Mask);
  A(0x25000324); R(0xe37ddc10,NO_Mask);
  A(0x25000328); R(0x3a77b98a,NO_Mask);
  A(0x2500032c); R(0xdfdf515a,NO_Mask);
  A(0x25000330); R(0x6ac8185f,NO_Mask);
  A(0x25000334); R(0x733b61d2,NO_Mask);
  A(0x25000338); R(0x545dde27,NO_Mask);
  A(0x2500033c); R(0xd024ffcb,NO_Mask);
  A(0x25000340); R(0x23558113,NO_Mask);
  A(0x25000344); R(0xe707d35d,NO_Mask);
  A(0x25000348); R(0xe6217e8c,NO_Mask);
  A(0x2500034c); R(0x2ec500cf,NO_Mask);
  A(0x25000350); R(0xeb988e18,NO_Mask);
  A(0x25000354); R(0x175ed4ef,NO_Mask);
  A(0x25000358); R(0x7d6bbcb2,NO_Mask);
  A(0x2500035c); R(0xcf4d90bb,NO_Mask);
  A(0x25000360); R(0x6ef2a311,NO_Mask);
  A(0x25000364); R(0x0255f976,NO_Mask);
  A(0x25000368); R(0x46e87677,NO_Mask);
  A(0x2500036c); R(0x8f75ae76,NO_Mask);
  A(0x25000370); R(0x2b7a0d3c,NO_Mask);
  A(0x25000374); R(0x9342d8e1,NO_Mask);
  A(0x25000378); R(0x5011ae94,NO_Mask);
  A(0x2500037c); R(0x4f1f5e3e,NO_Mask);
  A(0x25000380); R(0x77bd1101,NO_Mask);
  A(0x25000384); R(0x8279120b,NO_Mask);
  A(0x25000388); R(0xfec96288,NO_Mask);
  A(0x2500038c); R(0x4c8d3e10,NO_Mask);
  A(0x25000390); R(0x2d77074b,NO_Mask);
  A(0x25000394); R(0x74c0bae0,NO_Mask);
  A(0x25000398); R(0xa6c4d168,NO_Mask);
  A(0x2500039c); R(0x31f5e330,NO_Mask);
  A(0x250003a0); R(0x00a9b2f5,NO_Mask);
  A(0x250003a4); R(0x4c8222c4,NO_Mask);
  A(0x250003a8); R(0x944a4b84,NO_Mask);
  A(0x250003ac); R(0xd5e0d889,NO_Mask);
  A(0x250003b0); R(0xbf0258df,NO_Mask);
  A(0x250003b4); R(0x7a34c212,NO_Mask);
  A(0x250003b8); R(0xc420f894,NO_Mask);
  A(0x250003bc); R(0xd1f515dc,NO_Mask);
  A(0x250003c0); R(0x8bd19ec7,NO_Mask);
  A(0x250003c4); R(0x45d753c1,NO_Mask);
  A(0x250003c8); R(0x28da219f,NO_Mask);
  A(0x250003cc); R(0xd9fdbaf9,NO_Mask);
  A(0x250003d0); R(0x2498ff12,NO_Mask);
  A(0x250003d4); R(0x569eccc2,NO_Mask);
  A(0x250003d8); R(0xa11abec5,NO_Mask);
  A(0x250003dc); R(0x9a720fd3,NO_Mask);
  A(0x250003e0); R(0x6f2543ae,NO_Mask);
  A(0x250003e4); R(0x35b4fc96,NO_Mask);
  A(0x250003e8); R(0x175e8e1e,NO_Mask);
  A(0x250003ec); R(0x5bf05b49,NO_Mask);
  A(0x250003f0); R(0x1d80895b,NO_Mask);
  A(0x250003f4); R(0x1a731e55,NO_Mask);
  A(0x250003f8); R(0xb0bb8ddd,NO_Mask);
  A(0x250003fc); R(0x4a4b2d9c,NO_Mask);


  E();

  return 0;

}

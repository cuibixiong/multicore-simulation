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
  A(0x25000000); W(0x8c7217a3);

  A(0x25000004); W(0xf87ffc81);

  A(0x25000008); W(0x933baed3);

  A(0x2500000c); W(0xa5daa1b0);

  A(0x25000010); W(0xe9380e84);

  A(0x25000014); W(0xd199ba0a);

  A(0x25000018); W(0xeaa2c6a1);

  A(0x2500001c); W(0xd0a2ed2d);

  A(0x25000020); W(0x855c1404);

  A(0x25000024); W(0xe37ddc10);

  A(0x25000028); W(0x3a77b98a);

  A(0x2500002c); W(0xdfdf515a);

  A(0x25000030); W(0x6ac8185f);

  A(0x25000034); W(0x733b61d2);

  A(0x25000038); W(0x545dde27);

  A(0x2500003c); W(0xd024ffcb);

  A(0x25000040); W(0x23558113);

  A(0x25000044); W(0xe707d35d);

  A(0x25000048); W(0xe6217e8c);

  A(0x2500004c); W(0x2ec500cf);

  A(0x25000050); W(0xeb988e18);

  A(0x25000054); W(0x175ed4ef);

  A(0x25000058); W(0x7d6bbcb2);

  A(0x2500005c); W(0xcf4d90bb);

  A(0x25000060); W(0x6ef2a311);

  A(0x25000064); W(0x0255f976);

  A(0x25000068); W(0x46e87677);

  A(0x2500006c); W(0x8f75ae76);

  A(0x25000070); W(0x2b7a0d3c);

  A(0x25000074); W(0x9342d8e1);

  A(0x25000078); W(0x5011ae94);

  A(0x2500007c); W(0x4f1f5e3e);

  A(0x25000080); W(0x77bd1101);

  A(0x25000084); W(0x8279120b);

  A(0x25000088); W(0xfec96288);

  A(0x2500008c); W(0x4c8d3e10);

  A(0x25000090); W(0x2d77074b);

  A(0x25000094); W(0x74c0bae0);

  A(0x25000098); W(0xa6c4d168);

  A(0x2500009c); W(0x31f5e330);

  A(0x250000a0); W(0x00a9b2f5);

  A(0x250000a4); W(0x4c8222c4);

  A(0x250000a8); W(0x944a4b84);

  A(0x250000ac); W(0xd5e0d889);

  A(0x250000b0); W(0xbf0258df);

  A(0x250000b4); W(0x7a34c212);

  A(0x250000b8); W(0xc420f894);

  A(0x250000bc); W(0xd1f515dc);

  A(0x250000c0); W(0x8bd19ec7);

  A(0x250000c4); W(0x45d753c1);

  A(0x250000c8); W(0x28da219f);

  A(0x250000cc); W(0xd9fdbaf9);

  A(0x250000d0); W(0x2498ff12);

  A(0x250000d4); W(0x569eccc2);

  A(0x250000d8); W(0xa11abec5);

  A(0x250000dc); W(0x9a720fd3);

  A(0x250000e0); W(0x6f2543ae);

  A(0x250000e4); W(0x35b4fc96);

  A(0x250000e8); W(0x175e8e1e);

  A(0x250000ec); W(0x5bf05b49);

  A(0x250000f0); W(0x1d80895b);

  A(0x250000f4); W(0x1a731e55);

  A(0x250000f8); W(0xb0bb8ddd);

  A(0x250000fc); W(0x4a4b2d9c);

  /* PreRowPelY */
  A(0x25000100); W(0xb61c83d2);

  A(0x25000104); W(0x2a14ca46);

  A(0x25000108); W(0xe4a0134a);

  A(0x2500010c); W(0x47d907e9);

  A(0x25000110); W(0x8658e9e6);

  A(0x25000114); W(0x00000000);

  /* PreColPelY */
  A(0x25000118); W(0x0fde5ef5);

  A(0x2500011c); W(0xae0da011);

  A(0x25000120); W(0x3b94a366);

  A(0x25000124); W(0x559644a5);

  A(0x25000128); W(0x0000007d);

  A(0x2500012c); W(0x00000000);

  /* parameters setting */
  A(0x25000130); W(0x01400f00);

  A(0x25000134); W(0x03380238);

  A(0x25000138); W(0x01000118);

  A(0x2500013c); W(0x00000000);

  /* Intra4x4PredMode */
  A(0x25000140); W(0x05070207);
  A(0x25000144); W(0x06030708);
  A(0x25000148); W(0x04010203);
  A(0x2500014c); W(0x06030606);
  /* =================== */
  /* End of initial DATA */


  /* compare result */
  /* Keep reading CBUSY for delaying the result check */
  int i;

  A(0x24050008);
  for (i = 0; i <= 800; i++)
    R(0x00000000,All_Mask);

  /* OutYReconstructed */
  A(0x25000238); R(0x8c7217a3,NO_Mask);
  A(0x2500023c); R(0xf87ffc81,NO_Mask);
  A(0x25000240); R(0x933baed3,NO_Mask);
  A(0x25000244); R(0xa5daa1b0,NO_Mask);
  A(0x25000248); R(0xe9380e84,NO_Mask);
  A(0x2500024c); R(0xd199ba0a,NO_Mask);
  A(0x25000250); R(0xeaa2c6a1,NO_Mask);
  A(0x25000254); R(0xd0a2ed2d,NO_Mask);
  A(0x25000258); R(0x855c1404,NO_Mask);
  A(0x2500025c); R(0xe37ddc10,NO_Mask);
  A(0x25000260); R(0x3a77b98a,NO_Mask);
  A(0x25000264); R(0xdfdf515a,NO_Mask);
  A(0x25000268); R(0x6ac8185f,NO_Mask);
  A(0x2500026c); R(0x733b61d2,NO_Mask);
  A(0x25000270); R(0x545dde27,NO_Mask);
  A(0x25000274); R(0xd024ffcb,NO_Mask);
  A(0x25000278); R(0x23558113,NO_Mask);
  A(0x2500027c); R(0xe707d35d,NO_Mask);
  A(0x25000280); R(0xe6217e8c,NO_Mask);
  A(0x25000284); R(0x2ec500cf,NO_Mask);
  A(0x25000288); R(0xeb988e18,NO_Mask);
  A(0x2500028c); R(0x175ed4ef,NO_Mask);
  A(0x25000290); R(0x7d6bbcb2,NO_Mask);
  A(0x25000294); R(0xcf4d90bb,NO_Mask);
  A(0x25000298); R(0x6ef2a311,NO_Mask);
  A(0x2500029c); R(0x0255f976,NO_Mask);
  A(0x250002a0); R(0x46e87677,NO_Mask);
  A(0x250002a4); R(0x8f75ae76,NO_Mask);
  A(0x250002a8); R(0x2b7a0d3c,NO_Mask);
  A(0x250002ac); R(0x9342d8e1,NO_Mask);
  A(0x250002b0); R(0x5011ae94,NO_Mask);
  A(0x250002b4); R(0x4f1f5e3e,NO_Mask);
  A(0x250002b8); R(0x77bd1101,NO_Mask);
  A(0x250002bc); R(0x8279120b,NO_Mask);
  A(0x250002c0); R(0xfec96288,NO_Mask);
  A(0x250002c4); R(0x4c8d3e10,NO_Mask);
  A(0x250002c8); R(0x2d77074b,NO_Mask);
  A(0x250002cc); R(0x74c0bae0,NO_Mask);
  A(0x250002d0); R(0xa6c4d168,NO_Mask);
  A(0x250002d4); R(0x31f5e330,NO_Mask);
  A(0x250002d8); R(0x00a9b2f5,NO_Mask);
  A(0x250002dc); R(0x4c8222c4,NO_Mask);
  A(0x250002e0); R(0x944a4b84,NO_Mask);
  A(0x250002e4); R(0xd5e0d889,NO_Mask);
  A(0x250002e8); R(0xbf0258df,NO_Mask);
  A(0x250002ec); R(0x7a34c212,NO_Mask);
  A(0x250002f0); R(0xc420f894,NO_Mask);
  A(0x250002f4); R(0xd1f515dc,NO_Mask);
  A(0x250002f8); R(0x8bd19ec7,NO_Mask);
  A(0x250002fc); R(0x45d753c1,NO_Mask);
  A(0x25000300); R(0x28da219f,NO_Mask);
  A(0x25000304); R(0xd9fdbaf9,NO_Mask);
  A(0x25000308); R(0x2498ff12,NO_Mask);
  A(0x2500030c); R(0x569eccc2,NO_Mask);
  A(0x25000310); R(0xa11abec5,NO_Mask);
  A(0x25000314); R(0x9a720fd3,NO_Mask);
  A(0x25000318); R(0x6f2543ae,NO_Mask);
  A(0x2500031c); R(0x35b4fc96,NO_Mask);
  A(0x25000320); R(0x175e8e1e,NO_Mask);
  A(0x25000324); R(0x5bf05b49,NO_Mask);
  A(0x25000328); R(0x1d80895b,NO_Mask);
  A(0x2500032c); R(0x1a731e55,NO_Mask);
  A(0x25000330); R(0xb0bb8ddd,NO_Mask);
  A(0x25000334); R(0x4a4b2d9c,NO_Mask);
  /* Residual */
  A(0x25000338); R(0xffc7fff8,NO_Mask);
  A(0x2500033c); R(0x000e0009,NO_Mask);
  A(0x25000340); R(0x0086000b,NO_Mask);
  A(0x25000344); R(0x00820009,NO_Mask);
  A(0x25000348); R(0xffcfffee,NO_Mask);
  A(0x2500034c); R(0xffd0ff61,NO_Mask);
  A(0x25000350); R(0x00310038,NO_Mask);
  A(0x25000354); R(0x000e004a,NO_Mask);
  A(0x25000358); R(0xffb20007,NO_Mask);
  A(0x2500035c); R(0x0066ffc4,NO_Mask);
  A(0x25000360); R(0x0044ff94,NO_Mask);
  A(0x25000364); R(0x005b0023,NO_Mask);
  A(0x25000368); R(0x0003ffc7,NO_Mask);
  A(0x2500036c); R(0x005bfff7,NO_Mask);
  A(0x25000370); R(0x006dffb9,NO_Mask);
  A(0x25000374); R(0x0011000f,NO_Mask);
  A(0x25000378); R(0xffabffb4,NO_Mask);
  A(0x2500037c); R(0xfffdffde,NO_Mask);
  A(0x25000380); R(0x0066ff9a,NO_Mask);
  A(0x25000384); R(0x006d0007,NO_Mask);
  A(0x25000388); R(0x002affdf,NO_Mask);
  A(0x2500038c); R(0xffc70004,NO_Mask);
  A(0x25000390); R(0xffc1ffea,NO_Mask);
  A(0x25000394); R(0xfff70048,NO_Mask);
  A(0x25000398); R(0xffa40003,NO_Mask);
  A(0x2500039c); R(0xffee0045,NO_Mask);
  A(0x250003a0); R(0xffeb005c,NO_Mask);
  A(0x250003a4); R(0xfffdffc5,NO_Mask);
  A(0x250003a8); R(0x006bffb4,NO_Mask);
  A(0x250003ac); R(0xffe1ffea,NO_Mask);
  A(0x250003b0); R(0x006c004b,NO_Mask);
  A(0x250003b4); R(0x000cff65,NO_Mask);
  A(0x250003b8); R(0x0011ffd7,NO_Mask);
  A(0x250003bc); R(0xff85ffbc,NO_Mask);
  A(0x250003c0); R(0x0039ffbf,NO_Mask);
  A(0x250003c4); R(0x0090ffb9,NO_Mask);
  A(0x250003c8); R(0x0003fffc,NO_Mask);
  A(0x250003cc); R(0x002cffad,NO_Mask);
  A(0x250003d0); R(0xff6a0032,NO_Mask);
  A(0x250003d4); R(0xff73000b,NO_Mask);
  A(0x250003d8); R(0x0009ffc2,NO_Mask);
  A(0x250003dc); R(0x004ffffc,NO_Mask);
  A(0x250003e0); R(0x0038007d,NO_Mask);
  A(0x250003e4); R(0xffc4ffea,NO_Mask);
  A(0x250003e8); R(0x00480037,NO_Mask);
  A(0x250003ec); R(0xffc2ffb1,NO_Mask);
  A(0x250003f0); R(0xffe90009,NO_Mask);
  A(0x250003f4); R(0x0039ffb0,NO_Mask);
  A(0x250003f8); R(0x000affa1,NO_Mask);
  A(0x250003fc); R(0xffd40054,NO_Mask);
  A(0x25000400); R(0x005b000f,NO_Mask);
  A(0x25000404); R(0xffb4ffbb,NO_Mask);
  A(0x25000408); R(0xffbc0003,NO_Mask);
  A(0x2500040c); R(0xffc0002d,NO_Mask);
  A(0x25000410); R(0x00240014,NO_Mask);
  A(0x25000414); R(0xffe8ffc3,NO_Mask);
  A(0x25000418); R(0xff71ffb7,NO_Mask);
  A(0x2500041c); R(0xffb7ffde,NO_Mask);
  A(0x25000420); R(0x00660047,NO_Mask);
  A(0x25000424); R(0x001fffa6,NO_Mask);
  A(0x25000428); R(0xfff3ffda,NO_Mask);
  A(0x2500042c); R(0xffabff8b,NO_Mask);
  A(0x25000430); R(0x0008fff3,NO_Mask);
  A(0x25000434); R(0xffc5ffbd,NO_Mask);
  A(0x25000438); R(0xffc6ffcd,NO_Mask);
  A(0x2500043c); R(0xffc60051,NO_Mask);
  A(0x25000440); R(0xff94ff8d,NO_Mask);
  A(0x25000444); R(0x0004fffb,NO_Mask);
  A(0x25000448); R(0xffd3fffd,NO_Mask);
  A(0x2500044c); R(0x007e002f,NO_Mask);
  A(0x25000450); R(0xffc7ff69,NO_Mask);
  A(0x25000454); R(0x00060042,NO_Mask);
  A(0x25000458); R(0xff9b0000,NO_Mask);
  A(0x2500045c); R(0xff78ffc6,NO_Mask);
  A(0x25000460); R(0x003c0062,NO_Mask);
  A(0x25000464); R(0xfff60042,NO_Mask);
  A(0x25000468); R(0x004effed,NO_Mask);
  A(0x2500046c); R(0x00170039,NO_Mask);
  A(0x25000470); R(0x0026ff5e,NO_Mask);
  A(0x25000474); R(0xffba004e,NO_Mask);
  A(0x25000478); R(0x00010089,NO_Mask);
  A(0x2500047c); R(0xff84fff4,NO_Mask);
  A(0x25000480); R(0xffa40046,NO_Mask);
  A(0x25000484); R(0xffce0004,NO_Mask);
  A(0x25000488); R(0xffdd0024,NO_Mask);
  A(0x2500048c); R(0x0011ffcf,NO_Mask);
  A(0x25000490); R(0x0020ffec,NO_Mask);
  A(0x25000494); R(0x0018000e,NO_Mask);
  A(0x25000498); R(0xffa3002e,NO_Mask);
  A(0x2500049c); R(0x0040ff86,NO_Mask);
  A(0x250004a0); R(0x0044ff94,NO_Mask);
  A(0x250004a4); R(0xfffcffb6,NO_Mask);
  A(0x250004a8); R(0x00960031,NO_Mask);
  A(0x250004ac); R(0x0056ffc0,NO_Mask);
  A(0x250004b0); R(0xff700030,NO_Mask);
  A(0x250004b4); R(0x00190058,NO_Mask);
  A(0x250004b8); R(0xfff90022,NO_Mask);
  A(0x250004bc); R(0xffe6002c,NO_Mask);
  A(0x250004c0); R(0xffea003a,NO_Mask);
  A(0x250004c4); R(0xffdc0064,NO_Mask);
  A(0x250004c8); R(0xffa2fff6,NO_Mask);
  A(0x250004cc); R(0xff840039,NO_Mask);
  A(0x250004d0); R(0x00170083,NO_Mask);
  A(0x250004d4); R(0x005a0059,NO_Mask);
  A(0x250004d8); R(0x00bbffce,NO_Mask);
  A(0x250004dc); R(0xffe00054,NO_Mask);
  A(0x250004e0); R(0x00450044,NO_Mask);
  A(0x250004e4); R(0xffe30035,NO_Mask);
  A(0x250004e8); R(0x001d0046,NO_Mask);
  A(0x250004ec); R(0x0022ff76,NO_Mask);
  A(0x250004f0); R(0xffa2006e,NO_Mask);
  A(0x250004f4); R(0xfff7fffc,NO_Mask);
  A(0x250004f8); R(0xffad0018,NO_Mask);
  A(0x250004fc); R(0xffd9ff8f,NO_Mask);
  A(0x25000500); R(0x007e0045,NO_Mask);
  A(0x25000504); R(0xffcc002d,NO_Mask);
  A(0x25000508); R(0xffeaff7d,NO_Mask);
  A(0x2500050c); R(0xff63ffdf,NO_Mask);
  A(0x25000510); R(0xfffbffed,NO_Mask);
  A(0x25000514); R(0xffee008b,NO_Mask);
  A(0x25000518); R(0x00340006,NO_Mask);
  A(0x2500051c); R(0xffc8002b,NO_Mask);
  A(0x25000520); R(0xffcd000d,NO_Mask);
  A(0x25000524); R(0xff93fff5,NO_Mask);
  A(0x25000528); R(0x000e0039,NO_Mask);
  A(0x2500052c); R(0xffd60007,NO_Mask);
  A(0x25000530); R(0xffcd0038,NO_Mask);
  A(0x25000534); R(0xffeaffef,NO_Mask);


  E();

  return 0;

}

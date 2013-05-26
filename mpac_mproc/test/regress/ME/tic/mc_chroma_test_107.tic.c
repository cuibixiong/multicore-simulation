#include "header.h"
#include "ticmacros.h"

#define NO_Mask 0xFFFFFFFF /* 32 bits 1 */
#define All_Mask 0x00000000

int main()
{



  /* Initial DATA */
  /* =================== */

  /* Residual Cb */
  A(0x25000000); W(0xffb0ff5a);

  A(0x25000004); W(0xffa6ff91);

  A(0x25000008); W(0xffa5ff8f);

  A(0x2500000c); W(0xffa3ff8e);

  A(0x25000010); W(0xffedff28);

  A(0x25000014); W(0xff7fffb7);

  A(0x25000018); W(0xff7effb5);

  A(0x2500001c); W(0xff7cffb4);

  A(0x25000020); W(0xffacff56);

  A(0x25000024); W(0xffa2ff8d);

  A(0x25000028); W(0xffa1ff8b);

  A(0x2500002c); W(0xff9fff8a);

  A(0x25000030); W(0xffe9ff24);

  A(0x25000034); W(0xff7bffb3);

  A(0x25000038); W(0xff7affb1);

  A(0x2500003c); W(0xff78ffb0);

  A(0x25000040); W(0xffa8ff52);

  A(0x25000044); W(0xffa7ff51);

  A(0x25000048); W(0xff93ffa6);

  A(0x2500004c); W(0xffbaff9a);

  A(0x25000050); W(0xffe5ff20);

  A(0x25000054); W(0xffe4ff1f);

  A(0x25000058); W(0xff87ffb0);

  A(0x2500005c); W(0xffcbffa1);

  A(0x25000060); W(0xffa4ff4e);

  A(0x25000064); W(0xffa3ff4d);

  A(0x25000068); W(0xff8fffa2);

  A(0x2500006c); W(0xff8dffa1);

  A(0x25000070); W(0xffe1ff1c);

  A(0x25000074); W(0xffe0ff1b);

  A(0x25000078); W(0xff83ffac);

  A(0x2500007c); W(0xff81ffab);


  /* Residual Cr */
  A(0x25000080); W(0xff51ffb2);

  A(0x25000084); W(0xff84ffaa);

  A(0x25000088); W(0xff83ffa8);

  A(0x2500008c); W(0xff81ffa7);

  A(0x25000090); W(0xff44ffcc);

  A(0x25000094); W(0xff8cff88);

  A(0x25000098); W(0xff8bff86);

  A(0x2500009c); W(0xff89ff85);

  A(0x250000a0); W(0xff4dffae);

  A(0x250000a4); W(0xff80ffa6);

  A(0x250000a8); W(0xff7fffa4);

  A(0x250000ac); W(0xff7dffa3);

  A(0x250000b0); W(0xff40ffc8);

  A(0x250000b4); W(0xff88ff84);

  A(0x250000b8); W(0xff87ff82);

  A(0x250000bc); W(0xff85ff81);

  A(0x250000c0); W(0xff49ffaa);

  A(0x250000c4); W(0xff48ffa9);

  A(0x250000c8); W(0xffcaff77);

  A(0x250000cc); W(0xff85ffb3);

  A(0x250000d0); W(0xff3cffc4);

  A(0x250000d4); W(0xff3bffc3);

  A(0x250000d8); W(0xffa4ff68);

  A(0x250000dc); W(0xff7dff9f);

  A(0x250000e0); W(0xff45ffa6);

  A(0x250000e4); W(0xff44ffa5);

  A(0x250000e8); W(0xffc6ff73);

  A(0x250000ec); W(0xffc4ff72);

  A(0x250000f0); W(0xff38ffc0);

  A(0x250000f4); W(0xff37ffbf);

  A(0x250000f8); W(0xffa0ff64);

  A(0x250000fc); W(0xff9eff63);


  /* search window buffer */
  A(0x25000100); W(0x00000000);

  A(0x25000104); W(0x00000000);

  A(0x25000108); W(0x00000000);

  A(0x2500010c); W(0x00000000);

  A(0x25000110); W(0x00000000);

  A(0x25000114); W(0x00000000);

  A(0x25000118); W(0x00000000);

  A(0x2500011c); W(0x00000000);

  A(0x25000120); W(0x00000000);

  A(0x25000124); W(0x00000000);

  A(0x25000128); W(0x00000000);

  A(0x2500012c); W(0x00000000);

  A(0x25000130); W(0x00000000);

  A(0x25000134); W(0x00000000);

  A(0x25000138); W(0x00000000);

  A(0x2500013c); W(0x00000000);

  A(0x25000140); W(0x00000000);

  A(0x25000144); W(0x00000000);

  A(0x25000148); W(0x00000000);

  A(0x2500014c); W(0x00000000);

  A(0x25000150); W(0x00000000);

  A(0x25000154); W(0x00000000);

  A(0x25000158); W(0x00000000);

  A(0x2500015c); W(0x00000000);

  A(0x25000160); W(0x00000000);

  A(0x25000164); W(0x00000000);

  A(0x25000168); W(0x00000000);

  A(0x2500016c); W(0x00000000);

  A(0x25000170); W(0x00000000);

  A(0x25000174); W(0x00000000);

  A(0x25000178); W(0x00000000);

  A(0x2500017c); W(0x00000000);

  A(0x25000180); W(0x00000000);

  A(0x25000184); W(0x00000000);

  A(0x25000188); W(0x00000000);

  A(0x2500018c); W(0x00000000);

  A(0x25000190); W(0x00000000);

  A(0x25000194); W(0x00000000);

  A(0x25000198); W(0x00000000);

  A(0x2500019c); W(0x00000000);

  A(0x250001a0); W(0x00000000);

  A(0x250001a4); W(0x00000000);

  A(0x250001a8); W(0x00000000);

  A(0x250001ac); W(0x00000000);

  A(0x250001b0); W(0x00000000);

  A(0x250001b4); W(0x00000000);

  A(0x250001b8); W(0x00000000);

  A(0x250001bc); W(0x00000000);

  A(0x250001c0); W(0x00000000);

  A(0x250001c4); W(0x00000000);

  A(0x250001c8); W(0x00000000);

  A(0x250001cc); W(0x00000000);

  A(0x250001d0); W(0x00000000);

  A(0x250001d4); W(0x00000000);

  A(0x250001d8); W(0x00000000);

  A(0x250001dc); W(0x00000000);

  A(0x250001e0); W(0x00000000);

  A(0x250001e4); W(0x00000000);

  A(0x250001e8); W(0x00000000);

  A(0x250001ec); W(0x00000000);

  A(0x250001f0); W(0x00000000);

  A(0x250001f4); W(0x00000000);

  A(0x250001f8); W(0x00000000);

  A(0x250001fc); W(0x00000000);

  A(0x25000200); W(0xe586aa10);

  A(0x25000204); W(0x849e9663);

  A(0x25000208); W(0x00000000);

  A(0x2500020c); W(0x00000000);

  A(0x25000210); W(0x00000000);

  A(0x25000214); W(0x00000000);

  A(0x25000218); W(0xa00f648a);

  A(0x2500021c); W(0x6c781ba1);

  A(0x25000220); W(0xf8b056d0);

  A(0x25000224); W(0x283b9552);

  A(0x25000228); W(0x00000000);

  A(0x2500022c); W(0x00000000);

  A(0x25000230); W(0x00000000);

  A(0x25000234); W(0x00000000);

  A(0x25000238); W(0xa38b01d3);

  A(0x2500023c); W(0xce9ab540);

  A(0x25000240); W(0x84abdc06);

  A(0x25000244); W(0xdb55a314);

  A(0x25000248); W(0x00000000);

  A(0x2500024c); W(0x00000000);

  A(0x25000250); W(0x00000000);

  A(0x25000254); W(0x00000000);

  A(0x25000258); W(0xc0742a0e);

  A(0x2500025c); W(0x5076ca0a);

  A(0x25000260); W(0x0ec28cfa);

  A(0x25000264); W(0x6328b21a);

  A(0x25000268); W(0x00000000);

  A(0x2500026c); W(0x00000000);

  A(0x25000270); W(0x00000000);

  A(0x25000274); W(0x00000000);

  A(0x25000278); W(0x15ca1de8);

  A(0x2500027c); W(0x863682db);

  A(0x25000280); W(0x60b72ba7);

  A(0x25000284); W(0x832c7eca);

  A(0x25000288); W(0x00000000);

  A(0x2500028c); W(0x00000000);

  A(0x25000290); W(0x00000000);

  A(0x25000294); W(0x00000000);

  A(0x25000298); W(0x99cf8010);

  A(0x2500029c); W(0x18995c1c);

  A(0x250002a0); W(0xcbaf52f5);

  A(0x250002a4); W(0x3c591f04);

  A(0x250002a8); W(0x00000000);

  A(0x250002ac); W(0x00000000);

  A(0x250002b0); W(0x00000000);

  A(0x250002b4); W(0x00000000);

  A(0x250002b8); W(0xda408405);

  A(0x250002bc); W(0x9fad9263);

  A(0x250002c0); W(0x82d20bff);

  A(0x250002c4); W(0xd859bb6f);

  A(0x250002c8); W(0x00000000);

  A(0x250002cc); W(0x00000000);

  A(0x250002d0); W(0x00000000);

  A(0x250002d4); W(0x00000000);

  A(0x250002d8); W(0x0744c15e);

  A(0x250002dc); W(0xf711f2be);

  A(0x250002e0); W(0x9c6bb622);

  A(0x250002e4); W(0xb73e9b00);

  A(0x250002e8); W(0x00000000);

  A(0x250002ec); W(0x00000000);

  A(0x250002f0); W(0x00000000);

  A(0x250002f4); W(0x00000000);

  A(0x250002f8); W(0x605a2d03);

  A(0x250002fc); W(0xb80a5764);

  A(0x25000300); W(0x90909822);

  A(0x25000304); W(0x2a8a9b1a);

  A(0x25000308); W(0x00000000);

  A(0x2500030c); W(0x00000000);

  A(0x25000310); W(0x00000000);

  A(0x25000314); W(0x00000000);

  A(0x25000318); W(0xe6f3e442);

  A(0x2500031c); W(0x19e20950);

  A(0x25000320); W(0xff1af424);

  A(0x25000324); W(0xcc73734c);

  A(0x25000328); W(0x00000000);

  A(0x2500032c); W(0x00000000);

  A(0x25000330); W(0x00000000);

  A(0x25000334); W(0x00000000);

  A(0x25000338); W(0xb1ec8699);

  A(0x2500033c); W(0xe20061d8);

  A(0x25000340); W(0x7988d1ea);

  A(0x25000344); W(0x048716ad);

  A(0x25000348); W(0x00000000);

  A(0x2500034c); W(0x00000000);

  A(0x25000350); W(0x00000000);

  A(0x25000354); W(0x00000000);

  A(0x25000358); W(0xb1fb520c);

  A(0x2500035c); W(0xd5baac10);

  A(0x25000360); W(0xa2617a6d);

  A(0x25000364); W(0x93403814);

  A(0x25000368); W(0x00000000);

  A(0x2500036c); W(0x00000000);

  A(0x25000370); W(0x00000000);

  A(0x25000374); W(0x00000000);

  A(0x25000378); W(0x4b38ff0f);

  A(0x2500037c); W(0xdcc5f3ba);

  A(0x25000380); W(0x00c76bd5);

  A(0x25000384); W(0x1456acf9);

  A(0x25000388); W(0x00000000);

  A(0x2500038c); W(0x00000000);

  A(0x25000390); W(0x00000000);

  A(0x25000394); W(0x00000000);

  A(0x25000398); W(0x958f934f);

  A(0x2500039c); W(0x940793fe);

  A(0x250003a0); W(0x74e45d65);

  A(0x250003a4); W(0xa6b18016);

  A(0x250003a8); W(0x00000000);

  A(0x250003ac); W(0x00000000);

  A(0x250003b0); W(0x00000000);

  A(0x250003b4); W(0x00000000);

  A(0x250003b8); W(0xa0444a57);

  A(0x250003bc); W(0xf168b841);

  A(0x250003c0); W(0xd60f659b);

  A(0x250003c4); W(0x7834887b);

  A(0x250003c8); W(0x00000000);

  A(0x250003cc); W(0x00000000);

  A(0x250003d0); W(0x00000000);

  A(0x250003d4); W(0x00000000);

  A(0x250003d8); W(0x37ebf008);

  A(0x250003dc); W(0xbf32a1c7);

  A(0x250003e0); W(0x0865622a);

  A(0x250003e4); W(0x3c9cd283);

  A(0x250003e8); W(0x00000000);

  A(0x250003ec); W(0x00000000);

  A(0x250003f0); W(0x00000000);

  A(0x250003f4); W(0x00000000);

  A(0x250003f8); W(0xe98697a7);

  A(0x250003fc); W(0x0835ceca);

  A(0x25000400); W(0x85dbeb6e);

  A(0x25000404); W(0xb4aa2844);

  A(0x25000408); W(0x00000000);

  A(0x2500040c); W(0x00000000);

  A(0x25000410); W(0x00000000);

  A(0x25000414); W(0x00000000);

  A(0x25000418); W(0x17eed343);

  A(0x2500041c); W(0x10ee84d5);

  A(0x25000420); W(0x56c17d75);

  A(0x25000424); W(0xeea0780e);

  A(0x25000428); W(0x00000000);

  A(0x2500042c); W(0x00000000);

  A(0x25000430); W(0x00000000);

  A(0x25000434); W(0x00000000);

  A(0x25000438); W(0xb60b2e68);

  A(0x2500043c); W(0x894408b8);

  A(0x25000440); W(0x271062f6);

  A(0x25000444); W(0x8ef0cdf5);

  A(0x25000448); W(0x00000000);

  A(0x2500044c); W(0x00000000);

  A(0x25000450); W(0x00000000);

  A(0x25000454); W(0x00000000);

  A(0x25000458); W(0xad931c09);

  A(0x2500045c); W(0x637670ec);

  A(0x25000460); W(0x54e7d14e);

  A(0x25000464); W(0xf981a050);

  A(0x25000468); W(0x00000000);

  A(0x2500046c); W(0x00000000);

  A(0x25000470); W(0x00000000);

  A(0x25000474); W(0x00000000);

  A(0x25000478); W(0x6834f788);

  A(0x2500047c); W(0xe480da32);

  A(0x25000480); W(0xbc74bd57);

  A(0x25000484); W(0x1e0a0a34);

  A(0x25000488); W(0x00000000);

  A(0x2500048c); W(0x00000000);

  A(0x25000490); W(0x00000000);

  A(0x25000494); W(0x00000000);

  A(0x25000498); W(0x05def109);

  A(0x2500049c); W(0x2bf6a5d0);

  A(0x250004a0); W(0x6ae4678d);

  A(0x250004a4); W(0x14982589);

  A(0x250004a8); W(0x00000000);

  A(0x250004ac); W(0x00000000);

  A(0x250004b0); W(0x00000000);

  A(0x250004b4); W(0x00000000);

  A(0x250004b8); W(0xcb9e9caa);

  A(0x250004bc); W(0xec094675);

  A(0x250004c0); W(0x5bae597d);

  A(0x250004c4); W(0xbdfd089e);

  A(0x250004c8); W(0x00000000);

  A(0x250004cc); W(0x00000000);

  A(0x250004d0); W(0x00000000);

  A(0x250004d4); W(0x00000000);

  A(0x250004d8); W(0xecaeb042);

  A(0x250004dc); W(0x0d9ac52b);

  A(0x250004e0); W(0xe315f1ca);

  A(0x250004e4); W(0x4026a965);

  A(0x250004e8); W(0x00000000);

  A(0x250004ec); W(0x00000000);

  A(0x250004f0); W(0x00000000);

  A(0x250004f4); W(0x00000000);

  A(0x250004f8); W(0x7eb5210f);

  A(0x250004fc); W(0xf2f02191);

  A(0x25000500); W(0xd7da8646);

  A(0x25000504); W(0x84062147);

  A(0x25000508); W(0x00000000);

  A(0x2500050c); W(0x00000000);

  A(0x25000510); W(0x00000000);

  A(0x25000514); W(0x00000000);

  A(0x25000518); W(0x62236136);

  A(0x2500051c); W(0x6b176fde);

  A(0x25000520); W(0x78e1f4c4);

  A(0x25000524); W(0x3cde44df);

  A(0x25000528); W(0x00000000);

  A(0x2500052c); W(0x00000000);

  A(0x25000530); W(0x00000000);

  A(0x25000534); W(0x00000000);

  A(0x25000538); W(0x4e4de46d);

  A(0x2500053c); W(0x947c7927);

  A(0x25000540); W(0x0cbde2b9);

  A(0x25000544); W(0xdb0c4999);

  A(0x25000548); W(0x00000000);

  A(0x2500054c); W(0x00000000);

  A(0x25000550); W(0x00000000);

  A(0x25000554); W(0x00000000);

  A(0x25000558); W(0xbd32204c);

  A(0x2500055c); W(0x56a88aaa);

  A(0x25000560); W(0x04ba93dc);

  A(0x25000564); W(0x58cd9f2d);

  A(0x25000568); W(0x00000000);

  A(0x2500056c); W(0x00000000);

  A(0x25000570); W(0x00000000);

  A(0x25000574); W(0x00000000);

  A(0x25000578); W(0x11826fe5);

  A(0x2500057c); W(0xeef5c12c);

  A(0x25000580); W(0xdde2c21b);

  A(0x25000584); W(0x60f41bfc);

  A(0x25000588); W(0x00000000);

  A(0x2500058c); W(0x00000000);

  A(0x25000590); W(0x00000000);

  A(0x25000594); W(0x00000000);

  A(0x25000598); W(0xf67ec7b3);

  A(0x2500059c); W(0x4675e9b0);

  A(0x250005a0); W(0x7cced928);

  A(0x250005a4); W(0xa7f70826);

  A(0x250005a8); W(0x00000000);

  A(0x250005ac); W(0x00000000);

  A(0x250005b0); W(0x00000000);

  A(0x250005b4); W(0x00000000);

  A(0x250005b8); W(0x2884e5fb);

  A(0x250005bc); W(0x2f3f5880);

  A(0x250005c0); W(0x8039b621);

  A(0x250005c4); W(0x55923dba);

  A(0x250005c8); W(0x00000000);

  A(0x250005cc); W(0x00000000);

  A(0x250005d0); W(0x00000000);

  A(0x250005d4); W(0x00000000);

  A(0x250005d8); W(0x98ab8cf2);

  A(0x250005dc); W(0xa8c1b303);

  A(0x250005e0); W(0x3593046a);

  A(0x250005e4); W(0x859dae9b);

  A(0x250005e8); W(0x00000000);

  A(0x250005ec); W(0x00000000);

  A(0x250005f0); W(0x00000000);

  A(0x250005f4); W(0x00000000);

  A(0x250005f8); W(0x5b837027);

  A(0x250005fc); W(0xddf97982);

  A(0x25000600); W(0x00000000);

  A(0x25000604); W(0x00000000);

  A(0x25000608); W(0x00000000);

  A(0x2500060c); W(0x00000000);

  A(0x25000610); W(0x00000000);

  A(0x25000614); W(0x00000000);

  A(0x25000618); W(0x00000000);

  A(0x2500061c); W(0x00000000);

  A(0x25000620); W(0x00000000);

  A(0x25000624); W(0x00000000);

  A(0x25000628); W(0x00000000);

  A(0x2500062c); W(0x00000000);

  A(0x25000630); W(0x00000000);

  A(0x25000634); W(0x00000000);

  A(0x25000638); W(0x00000000);

  A(0x2500063c); W(0x00000000);

  A(0x25000640); W(0x00000000);

  A(0x25000644); W(0x00000000);

  A(0x25000648); W(0x00000000);

  A(0x2500064c); W(0x00000000);

  A(0x25000650); W(0x00000000);

  A(0x25000654); W(0x00000000);

  A(0x25000658); W(0x00000000);

  A(0x2500065c); W(0x00000000);

  A(0x25000660); W(0x00000000);

  A(0x25000664); W(0x00000000);

  A(0x25000668); W(0x00000000);

  A(0x2500066c); W(0x00000000);

  A(0x25000670); W(0x00000000);

  A(0x25000674); W(0x00000000);

  A(0x25000678); W(0x00000000);

  A(0x2500067c); W(0x00000000);

  A(0x25000680); W(0x00000000);

  A(0x25000684); W(0x00000000);

  A(0x25000688); W(0x00000000);

  A(0x2500068c); W(0x00000000);

  A(0x25000690); W(0x00000000);

  A(0x25000694); W(0x00000000);

  A(0x25000698); W(0x00000000);

  A(0x2500069c); W(0x00000000);

  A(0x250006a0); W(0x00000000);

  A(0x250006a4); W(0x00000000);

  A(0x250006a8); W(0x00000000);

  A(0x250006ac); W(0x00000000);

  A(0x250006b0); W(0x00000000);

  A(0x250006b4); W(0x00000000);

  A(0x250006b8); W(0x00000000);

  A(0x250006bc); W(0x00000000);

  A(0x250006c0); W(0x00000000);

  A(0x250006c4); W(0x00000000);

  A(0x250006c8); W(0x00000000);

  A(0x250006cc); W(0x00000000);

  A(0x250006d0); W(0x00000000);

  A(0x250006d4); W(0x00000000);

  A(0x250006d8); W(0x00000000);

  A(0x250006dc); W(0x00000000);

  A(0x250006e0); W(0x00000000);

  A(0x250006e4); W(0x00000000);

  A(0x250006e8); W(0x00000000);

  A(0x250006ec); W(0x00000000);

  A(0x250006f0); W(0x00000000);

  A(0x250006f4); W(0x00000000);

  A(0x250006f8); W(0x00000000);

  A(0x250006fc); W(0x00000000);

  A(0x25000700); W(0x00000000);

  A(0x25000704); W(0x00000000);

  A(0x25000708); W(0x00000000);

  A(0x2500070c); W(0x00000000);

  A(0x25000710); W(0x00000000);

  A(0x25000714); W(0x00000000);

  A(0x25000718); W(0x00000000);

  A(0x2500071c); W(0x00000000);

  A(0x25000720); W(0x00000000);

  A(0x25000724); W(0x00000000);

  A(0x25000728); W(0x00000000);

  A(0x2500072c); W(0x00000000);

  A(0x25000730); W(0x00000000);

  A(0x25000734); W(0x00000000);

  A(0x25000738); W(0x00000000);

  A(0x2500073c); W(0x00000000);

  A(0x25000740); W(0x00000000);

  A(0x25000744); W(0x00000000);

  A(0x25000748); W(0x00000000);

  A(0x2500074c); W(0x00000000);

  A(0x25000750); W(0x00000000);

  A(0x25000754); W(0x00000000);

  A(0x25000758); W(0x00000000);

  A(0x2500075c); W(0x00000000);

  A(0x25000760); W(0x00000000);

  A(0x25000764); W(0x00000000);

  A(0x25000768); W(0x00000000);

  A(0x2500076c); W(0x00000000);

  A(0x25000770); W(0x00000000);

  A(0x25000774); W(0x00000000);

  A(0x25000778); W(0x00000000);

  A(0x2500077c); W(0x00000000);

  A(0x25000780); W(0x00000000);

  A(0x25000784); W(0x00000000);

  A(0x25000788); W(0x00000000);

  A(0x2500078c); W(0x00000000);

  A(0x25000790); W(0x00000000);

  A(0x25000794); W(0x00000000);

  A(0x25000798); W(0x00000000);

  A(0x2500079c); W(0x00000000);

  A(0x250007a0); W(0x00000000);

  A(0x250007a4); W(0x00000000);

  A(0x250007a8); W(0x00000000);

  A(0x250007ac); W(0x00000000);

  A(0x250007b0); W(0x00000000);

  A(0x250007b4); W(0x00000000);

  A(0x250007b8); W(0x00000000);

  A(0x250007bc); W(0x00000000);

  A(0x250007c0); W(0x00000000);

  A(0x250007c4); W(0x00000000);

  A(0x250007c8); W(0x00000000);

  A(0x250007cc); W(0x00000000);

  A(0x250007d0); W(0x00000000);

  A(0x250007d4); W(0x00000000);

  A(0x250007d8); W(0x00000000);

  A(0x250007dc); W(0x00000000);

  A(0x250007e0); W(0x00000000);

  A(0x250007e4); W(0x00000000);

  A(0x250007e8); W(0x00000000);

  A(0x250007ec); W(0x00000000);

  A(0x250007f0); W(0x00000000);

  A(0x250007f4); W(0x00000000);

  A(0x250007f8); W(0x00000000);

  A(0x250007fc); W(0x00000000);

  A(0x25000800); W(0x00000000);

  A(0x25000804); W(0x00000000);

  A(0x25000808); W(0x00000000);

  A(0x2500080c); W(0x00000000);

  A(0x25000810); W(0x00000000);

  A(0x25000814); W(0x00000000);

  A(0x25000818); W(0x00000000);

  A(0x2500081c); W(0x00000000);

  A(0x25000820); W(0x00000000);

  A(0x25000824); W(0x00000000);

  A(0x25000828); W(0x00000000);

  A(0x2500082c); W(0x00000000);

  A(0x25000830); W(0x00000000);

  A(0x25000834); W(0x00000000);

  A(0x25000838); W(0x00000000);

  A(0x2500083c); W(0x00000000);

  A(0x25000840); W(0x00000000);

  A(0x25000844); W(0x00000000);

  A(0x25000848); W(0x00000000);

  A(0x2500084c); W(0x00000000);

  A(0x25000850); W(0x00000000);

  A(0x25000854); W(0x00000000);

  A(0x25000858); W(0x00000000);

  A(0x2500085c); W(0x00000000);

  A(0x25000860); W(0x00000000);

  A(0x25000864); W(0x00000000);

  A(0x25000868); W(0x00000000);

  A(0x2500086c); W(0x00000000);

  A(0x25000870); W(0x00000000);

  A(0x25000874); W(0x00000000);

  A(0x25000878); W(0x00000000);

  A(0x2500087c); W(0x00000000);

  A(0x25000880); W(0x00000000);

  A(0x25000884); W(0x00000000);

  A(0x25000888); W(0x00000000);

  A(0x2500088c); W(0x00000000);

  A(0x25000890); W(0x00000000);

  A(0x25000894); W(0x00000000);

  A(0x25000898); W(0x00000000);

  A(0x2500089c); W(0x00000000);

  A(0x250008a0); W(0x00000000);

  A(0x250008a4); W(0x00000000);

  A(0x250008a8); W(0x00000000);

  A(0x250008ac); W(0x00000000);

  A(0x250008b0); W(0x00000000);

  A(0x250008b4); W(0x00000000);

  A(0x250008b8); W(0x00000000);

  A(0x250008bc); W(0x00000000);

  A(0x250008c0); W(0x00000000);

  A(0x250008c4); W(0x00000000);

  A(0x250008c8); W(0x00000000);

  A(0x250008cc); W(0x00000000);

  A(0x250008d0); W(0x00000000);

  A(0x250008d4); W(0x00000000);

  A(0x250008d8); W(0x00000000);

  A(0x250008dc); W(0x00000000);

  A(0x250008e0); W(0x00000000);

  A(0x250008e4); W(0x00000000);

  A(0x250008e8); W(0x00000000);

  A(0x250008ec); W(0x00000000);

  A(0x250008f0); W(0x00000000);

  A(0x250008f4); W(0x00000000);

  A(0x250008f8); W(0x00000000);

  A(0x250008fc); W(0x00000000);

  A(0x25000900); W(0x00000000);

  A(0x25000904); W(0x00000000);

  A(0x25000908); W(0x00000000);

  A(0x2500090c); W(0x00000000);

  A(0x25000910); W(0x00000000);

  A(0x25000914); W(0x00000000);

  A(0x25000918); W(0x00000000);

  A(0x2500091c); W(0x00000000);

  A(0x25000920); W(0x00000000);

  A(0x25000924); W(0x00000000);

  A(0x25000928); W(0x00000000);

  A(0x2500092c); W(0x00000000);

  A(0x25000930); W(0x00000000);

  A(0x25000934); W(0x00000000);

  A(0x25000938); W(0x00000000);

  A(0x2500093c); W(0x00000000);

  A(0x25000940); W(0x00000000);

  A(0x25000944); W(0x00000000);

  A(0x25000948); W(0x00000000);

  A(0x2500094c); W(0x00000000);

  A(0x25000950); W(0x00000000);

  A(0x25000954); W(0x00000000);

  A(0x25000958); W(0x00000000);

  A(0x2500095c); W(0x00000000);

  A(0x25000960); W(0x00000000);

  A(0x25000964); W(0x00000000);

  A(0x25000968); W(0x00000000);

  A(0x2500096c); W(0x00000000);

  A(0x25000970); W(0x00000000);

  A(0x25000974); W(0x00000000);

  A(0x25000978); W(0x00000000);

  A(0x2500097c); W(0x00000000);

  A(0x25000980); W(0x00000000);

  A(0x25000984); W(0x00000000);

  A(0x25000988); W(0x00000000);

  A(0x2500098c); W(0x00000000);

  A(0x25000990); W(0x00000000);

  A(0x25000994); W(0x00000000);

  A(0x25000998); W(0x00000000);

  A(0x2500099c); W(0x00000000);

  A(0x250009a0); W(0x00000000);

  A(0x250009a4); W(0x00000000);

  A(0x250009a8); W(0x00000000);

  A(0x250009ac); W(0x00000000);

  A(0x250009b0); W(0x00000000);

  A(0x250009b4); W(0x00000000);

  A(0x250009b8); W(0x00000000);

  A(0x250009bc); W(0x00000000);

  A(0x250009c0); W(0x00000000);

  A(0x250009c4); W(0x00000000);

  A(0x250009c8); W(0x00000000);

  A(0x250009cc); W(0x00000000);

  A(0x250009d0); W(0x00000000);

  A(0x250009d4); W(0x00000000);

  A(0x250009d8); W(0x00000000);

  A(0x250009dc); W(0x00000000);

  A(0x250009e0); W(0x00000000);

  A(0x250009e4); W(0x00000000);

  A(0x250009e8); W(0x00000000);

  A(0x250009ec); W(0x00000000);

  A(0x250009f0); W(0x00000000);

  A(0x250009f4); W(0x00000000);

  A(0x250009f8); W(0x00000000);

  A(0x250009fc); W(0x00000000);

  A(0x25000a00); W(0x00000000);

  A(0x25000a04); W(0x00000000);

  A(0x25000a08); W(0x00000000);

  A(0x25000a0c); W(0x00000000);

  A(0x25000a10); W(0x00000000);

  A(0x25000a14); W(0x00000000);

  A(0x25000a18); W(0x00000000);

  A(0x25000a1c); W(0x00000000);

  A(0x25000a20); W(0x00000000);

  A(0x25000a24); W(0x00000000);

  A(0x25000a28); W(0x00000000);

  A(0x25000a2c); W(0x00000000);

  A(0x25000a30); W(0x00000000);

  A(0x25000a34); W(0x00000000);

  A(0x25000a38); W(0x00000000);

  A(0x25000a3c); W(0x00000000);

  A(0x25000a40); W(0x00000000);

  A(0x25000a44); W(0x00000000);

  A(0x25000a48); W(0x00000000);

  A(0x25000a4c); W(0x00000000);

  A(0x25000a50); W(0x00000000);

  A(0x25000a54); W(0x00000000);

  A(0x25000a58); W(0x00000000);

  A(0x25000a5c); W(0x00000000);

  A(0x25000a60); W(0x00000000);

  A(0x25000a64); W(0x00000000);

  A(0x25000a68); W(0x00000000);

  A(0x25000a6c); W(0x00000000);

  A(0x25000a70); W(0x00000000);

  A(0x25000a74); W(0x00000000);

  A(0x25000a78); W(0x00000000);

  A(0x25000a7c); W(0x00000000);

  A(0x25000a80); W(0x00000000);

  A(0x25000a84); W(0x00000000);

  A(0x25000a88); W(0x00000000);

  A(0x25000a8c); W(0x00000000);

  A(0x25000a90); W(0x00000000);

  A(0x25000a94); W(0x00000000);

  A(0x25000a98); W(0x00000000);

  A(0x25000a9c); W(0x00000000);

  A(0x25000aa0); W(0x00000000);

  A(0x25000aa4); W(0x00000000);

  A(0x25000aa8); W(0x00000000);

  A(0x25000aac); W(0x00000000);

  A(0x25000ab0); W(0x00000000);

  A(0x25000ab4); W(0x00000000);

  A(0x25000ab8); W(0x00000000);

  A(0x25000abc); W(0x00000000);

  A(0x25000ac0); W(0x00000000);

  A(0x25000ac4); W(0x00000000);

  A(0x25000ac8); W(0x00000000);

  A(0x25000acc); W(0x00000000);

  A(0x25000ad0); W(0x00000000);

  A(0x25000ad4); W(0x00000000);

  A(0x25000ad8); W(0x00000000);

  A(0x25000adc); W(0x00000000);

  A(0x25000ae0); W(0x00000000);

  A(0x25000ae4); W(0x00000000);

  A(0x25000ae8); W(0x00000000);

  A(0x25000aec); W(0x00000000);

  A(0x25000af0); W(0x00000000);

  A(0x25000af4); W(0x00000000);

  A(0x25000af8); W(0x00000000);

  A(0x25000afc); W(0x00000000);

  A(0x25000b00); W(0x00000000);

  A(0x25000b04); W(0x00000000);

  A(0x25000b08); W(0x00000000);

  A(0x25000b0c); W(0x00000000);

  A(0x25000b10); W(0x00000000);

  A(0x25000b14); W(0x00000000);

  A(0x25000b18); W(0x00000000);

  A(0x25000b1c); W(0x00000000);

  A(0x25000b20); W(0x00000000);

  A(0x25000b24); W(0x00000000);

  A(0x25000b28); W(0x00000000);

  A(0x25000b2c); W(0x00000000);

  A(0x25000b30); W(0x00000000);

  A(0x25000b34); W(0x00000000);

  A(0x25000b38); W(0x00000000);

  A(0x25000b3c); W(0x00000000);

  A(0x25000b40); W(0x00000000);

  A(0x25000b44); W(0x00000000);

  A(0x25000b48); W(0x00000000);

  A(0x25000b4c); W(0x00000000);

  A(0x25000b50); W(0x00000000);

  A(0x25000b54); W(0x00000000);

  A(0x25000b58); W(0x00000000);

  A(0x25000b5c); W(0x00000000);

  A(0x25000b60); W(0x00000000);

  A(0x25000b64); W(0x00000000);

  A(0x25000b68); W(0x00000000);

  A(0x25000b6c); W(0x00000000);

  A(0x25000b70); W(0x00000000);

  A(0x25000b74); W(0x00000000);

  A(0x25000b78); W(0x00000000);

  A(0x25000b7c); W(0x00000000);

  A(0x25000b80); W(0x00000000);

  A(0x25000b84); W(0x00000000);

  A(0x25000b88); W(0x00000000);

  A(0x25000b8c); W(0x00000000);

  A(0x25000b90); W(0x00000000);

  A(0x25000b94); W(0x00000000);

  A(0x25000b98); W(0x00000000);

  A(0x25000b9c); W(0x00000000);

  A(0x25000ba0); W(0x00000000);

  A(0x25000ba4); W(0x00000000);

  A(0x25000ba8); W(0x00000000);

  A(0x25000bac); W(0x00000000);

  A(0x25000bb0); W(0x00000000);

  A(0x25000bb4); W(0x00000000);

  A(0x25000bb8); W(0x00000000);

  A(0x25000bbc); W(0x00000000);

  A(0x25000bc0); W(0x00000000);

  A(0x25000bc4); W(0x00000000);

  A(0x25000bc8); W(0x00000000);

  A(0x25000bcc); W(0x00000000);

  A(0x25000bd0); W(0x00000000);

  A(0x25000bd4); W(0x00000000);

  A(0x25000bd8); W(0x00000000);

  A(0x25000bdc); W(0x00000000);

  A(0x25000be0); W(0x00000000);

  A(0x25000be4); W(0x00000000);

  A(0x25000be8); W(0x00000000);

  A(0x25000bec); W(0x00000000);

  A(0x25000bf0); W(0x00000000);

  A(0x25000bf4); W(0x00000000);

  A(0x25000bf8); W(0x00000000);

  A(0x25000bfc); W(0x00000000);

  A(0x25000c00); W(0x00000000);

  A(0x25000c04); W(0x00000000);

  A(0x25000c08); W(0x00000000);

  A(0x25000c0c); W(0x00000000);

  A(0x25000c10); W(0x00000000);

  A(0x25000c14); W(0x00000000);

  A(0x25000c18); W(0x00000000);

  A(0x25000c1c); W(0x00000000);

  A(0x25000c20); W(0x00000000);

  A(0x25000c24); W(0x00000000);

  A(0x25000c28); W(0x00000000);

  A(0x25000c2c); W(0x00000000);

  A(0x25000c30); W(0x00000000);

  A(0x25000c34); W(0x00000000);

  A(0x25000c38); W(0x00000000);

  A(0x25000c3c); W(0x00000000);

  A(0x25000c40); W(0x00000000);

  A(0x25000c44); W(0x00000000);

  A(0x25000c48); W(0x00000000);

  A(0x25000c4c); W(0x00000000);

  A(0x25000c50); W(0x00000000);

  A(0x25000c54); W(0x00000000);

  A(0x25000c58); W(0x00000000);

  A(0x25000c5c); W(0x00000000);

  A(0x25000c60); W(0x00000000);

  A(0x25000c64); W(0x00000000);

  A(0x25000c68); W(0x00000000);

  A(0x25000c6c); W(0x00000000);

  A(0x25000c70); W(0x00000000);

  A(0x25000c74); W(0x00000000);

  A(0x25000c78); W(0x00000000);

  A(0x25000c7c); W(0x00000000);

  A(0x25000c80); W(0x00000000);

  A(0x25000c84); W(0x00000000);

  A(0x25000c88); W(0x00000000);

  A(0x25000c8c); W(0x00000000);

  A(0x25000c90); W(0x00000000);

  A(0x25000c94); W(0x00000000);

  A(0x25000c98); W(0x00000000);

  A(0x25000c9c); W(0x00000000);

  A(0x25000ca0); W(0x00000000);

  A(0x25000ca4); W(0x00000000);

  A(0x25000ca8); W(0x00000000);

  A(0x25000cac); W(0x00000000);

  A(0x25000cb0); W(0x00000000);

  A(0x25000cb4); W(0x00000000);

  A(0x25000cb8); W(0x00000000);

  A(0x25000cbc); W(0x00000000);

  A(0x25000cc0); W(0x00000000);

  A(0x25000cc4); W(0x00000000);

  A(0x25000cc8); W(0x00000000);

  A(0x25000ccc); W(0x00000000);

  A(0x25000cd0); W(0x00000000);

  A(0x25000cd4); W(0x00000000);

  A(0x25000cd8); W(0x00000000);

  A(0x25000cdc); W(0x00000000);

  A(0x25000ce0); W(0x00000000);

  A(0x25000ce4); W(0x00000000);

  A(0x25000ce8); W(0x00000000);

  A(0x25000cec); W(0x00000000);

  A(0x25000cf0); W(0x00000000);

  A(0x25000cf4); W(0x00000000);

  A(0x25000cf8); W(0x00000000);

  A(0x25000cfc); W(0x00000000);

  A(0x25000d00); W(0x00000000);

  A(0x25000d04); W(0x00000000);

  A(0x25000d08); W(0x00000000);

  A(0x25000d0c); W(0x00000000);

  A(0x25000d10); W(0x00000000);

  A(0x25000d14); W(0x00000000);

  A(0x25000d18); W(0x00000000);

  A(0x25000d1c); W(0x00000000);

  A(0x25000d20); W(0x00000000);

  A(0x25000d24); W(0x00000000);

  A(0x25000d28); W(0x00000000);

  A(0x25000d2c); W(0x00000000);

  A(0x25000d30); W(0x00000000);

  A(0x25000d34); W(0x00000000);

  A(0x25000d38); W(0x00000000);

  A(0x25000d3c); W(0x00000000);

  A(0x25000d40); W(0x00000000);

  A(0x25000d44); W(0x00000000);

  A(0x25000d48); W(0x00000000);

  A(0x25000d4c); W(0x00000000);

  A(0x25000d50); W(0x00000000);

  A(0x25000d54); W(0x00000000);

  A(0x25000d58); W(0x00000000);

  A(0x25000d5c); W(0x00000000);

  A(0x25000d60); W(0x00000000);

  A(0x25000d64); W(0x00000000);

  A(0x25000d68); W(0x00000000);

  A(0x25000d6c); W(0x00000000);

  A(0x25000d70); W(0x00000000);

  A(0x25000d74); W(0x00000000);

  A(0x25000d78); W(0x00000000);

  A(0x25000d7c); W(0x00000000);

  A(0x25000d80); W(0x00000000);

  A(0x25000d84); W(0x00000000);

  A(0x25000d88); W(0x00000000);

  A(0x25000d8c); W(0x00000000);

  A(0x25000d90); W(0x00000000);

  A(0x25000d94); W(0x00000000);

  A(0x25000d98); W(0x00000000);

  A(0x25000d9c); W(0x00000000);

  A(0x25000da0); W(0x00000000);

  A(0x25000da4); W(0x00000000);

  A(0x25000da8); W(0x00000000);

  A(0x25000dac); W(0x00000000);

  A(0x25000db0); W(0x00000000);

  A(0x25000db4); W(0x00000000);

  A(0x25000db8); W(0x00000000);

  A(0x25000dbc); W(0x00000000);

  A(0x25000dc0); W(0x00000000);

  A(0x25000dc4); W(0x00000000);

  A(0x25000dc8); W(0x00000000);

  A(0x25000dcc); W(0x00000000);

  A(0x25000dd0); W(0x00000000);

  A(0x25000dd4); W(0x00000000);

  A(0x25000dd8); W(0x00000000);

  A(0x25000ddc); W(0x00000000);

  A(0x25000de0); W(0x00000000);

  A(0x25000de4); W(0x00000000);

  A(0x25000de8); W(0x00000000);

  A(0x25000dec); W(0x00000000);

  A(0x25000df0); W(0x00000000);

  A(0x25000df4); W(0x00000000);

  A(0x25000df8); W(0x00000000);

  A(0x25000dfc); W(0x00000000);

  A(0x25000e00); W(0x00000000);

  A(0x25000e04); W(0x00000000);

  A(0x25000e08); W(0x00000000);

  A(0x25000e0c); W(0x00000000);

  A(0x25000e10); W(0x00000000);

  A(0x25000e14); W(0x00000000);

  A(0x25000e18); W(0x00000000);

  A(0x25000e1c); W(0x00000000);

  A(0x25000e20); W(0x00000000);

  A(0x25000e24); W(0x00000000);

  A(0x25000e28); W(0x00000000);

  A(0x25000e2c); W(0x00000000);

  A(0x25000e30); W(0x00000000);

  A(0x25000e34); W(0x00000000);

  A(0x25000e38); W(0x00000000);

  A(0x25000e3c); W(0x00000000);

  A(0x25000e40); W(0x00000000);

  A(0x25000e44); W(0x00000000);

  A(0x25000e48); W(0x00000000);

  A(0x25000e4c); W(0x00000000);

  A(0x25000e50); W(0x00000000);

  A(0x25000e54); W(0x00000000);

  A(0x25000e58); W(0x00000000);

  A(0x25000e5c); W(0x00000000);

  A(0x25000e60); W(0x00000000);

  A(0x25000e64); W(0x00000000);

  A(0x25000e68); W(0x00000000);

  A(0x25000e6c); W(0x00000000);

  A(0x25000e70); W(0x00000000);

  A(0x25000e74); W(0x00000000);

  A(0x25000e78); W(0x00000000);

  A(0x25000e7c); W(0x00000000);

  A(0x25000e80); W(0x00000000);

  A(0x25000e84); W(0x00000000);

  A(0x25000e88); W(0x00000000);

  A(0x25000e8c); W(0x00000000);

  A(0x25000e90); W(0x00000000);

  A(0x25000e94); W(0x00000000);

  A(0x25000e98); W(0x00000000);

  A(0x25000e9c); W(0x00000000);

  A(0x25000ea0); W(0x00000000);

  A(0x25000ea4); W(0x00000000);

  A(0x25000ea8); W(0x00000000);

  A(0x25000eac); W(0x00000000);

  A(0x25000eb0); W(0x00000000);

  A(0x25000eb4); W(0x00000000);

  A(0x25000eb8); W(0x00000000);

  A(0x25000ebc); W(0x00000000);

  A(0x25000ec0); W(0x00000000);

  A(0x25000ec4); W(0x00000000);

  A(0x25000ec8); W(0x00000000);

  A(0x25000ecc); W(0x00000000);

  A(0x25000ed0); W(0x00000000);

  A(0x25000ed4); W(0x00000000);

  A(0x25000ed8); W(0x00000000);

  A(0x25000edc); W(0x00000000);

  A(0x25000ee0); W(0x00000000);

  A(0x25000ee4); W(0x00000000);

  A(0x25000ee8); W(0x00000000);

  A(0x25000eec); W(0x00000000);

  A(0x25000ef0); W(0x00000000);

  A(0x25000ef4); W(0x00000000);

  A(0x25000ef8); W(0x00000000);

  A(0x25000efc); W(0x00000000);

  A(0x25000f00); W(0x00000000);

  A(0x25000f04); W(0x00000000);

  A(0x25000f08); W(0x00000000);

  A(0x25000f0c); W(0x00000000);

  A(0x25000f10); W(0x00000000);

  A(0x25000f14); W(0x00000000);

  A(0x25000f18); W(0x00000000);

  A(0x25000f1c); W(0x00000000);

  A(0x25000f20); W(0x00000000);

  A(0x25000f24); W(0x00000000);

  A(0x25000f28); W(0x00000000);

  A(0x25000f2c); W(0x00000000);

  A(0x25000f30); W(0x00000000);

  A(0x25000f34); W(0x00000000);

  A(0x25000f38); W(0x00000000);

  A(0x25000f3c); W(0x00000000);

  A(0x25000f40); W(0x00000000);

  A(0x25000f44); W(0x00000000);

  A(0x25000f48); W(0x00000000);

  A(0x25000f4c); W(0x00000000);

  A(0x25000f50); W(0x00000000);

  A(0x25000f54); W(0x00000000);

  A(0x25000f58); W(0x00000000);

  A(0x25000f5c); W(0x00000000);

  A(0x25000f60); W(0x00000000);

  A(0x25000f64); W(0x00000000);

  A(0x25000f68); W(0x00000000);

  A(0x25000f6c); W(0x00000000);

  A(0x25000f70); W(0x00000000);

  A(0x25000f74); W(0x00000000);

  A(0x25000f78); W(0x00000000);

  A(0x25000f7c); W(0x00000000);

  A(0x25000f80); W(0x00000000);

  A(0x25000f84); W(0x00000000);

  A(0x25000f88); W(0x00000000);

  A(0x25000f8c); W(0x00000000);

  A(0x25000f90); W(0x00000000);

  A(0x25000f94); W(0x00000000);

  A(0x25000f98); W(0x00000000);

  A(0x25000f9c); W(0x00000000);

  A(0x25000fa0); W(0x00000000);

  A(0x25000fa4); W(0x00000000);

  A(0x25000fa8); W(0x00000000);

  A(0x25000fac); W(0x00000000);

  A(0x25000fb0); W(0x00000000);

  A(0x25000fb4); W(0x00000000);

  A(0x25000fb8); W(0x00000000);

  A(0x25000fbc); W(0x00000000);

  A(0x25000fc0); W(0x00000000);

  A(0x25000fc4); W(0x00000000);

  A(0x25000fc8); W(0x00000000);

  A(0x25000fcc); W(0x00000000);

  A(0x25000fd0); W(0x00000000);

  A(0x25000fd4); W(0x00000000);

  A(0x25000fd8); W(0x00000000);

  A(0x25000fdc); W(0x00000000);

  A(0x25000fe0); W(0x00000000);

  A(0x25000fe4); W(0x00000000);

  A(0x25000fe8); W(0x00000000);

  A(0x25000fec); W(0x00000000);

  A(0x25000ff0); W(0x00000000);

  A(0x25000ff4); W(0x00000000);

  A(0x25000ff8); W(0x00000000);

  A(0x25000ffc); W(0x00000000);

  A(0x25001000); W(0x00000000);

  A(0x25001004); W(0x00000000);

  A(0x25001008); W(0x00000000);

  A(0x2500100c); W(0x00000000);

  A(0x25001010); W(0x00000000);

  A(0x25001014); W(0x00000000);

  A(0x25001018); W(0x00000000);

  A(0x2500101c); W(0x00000000);

  A(0x25001020); W(0x00000000);

  A(0x25001024); W(0x00000000);

  A(0x25001028); W(0x00000000);

  A(0x2500102c); W(0x00000000);

  A(0x25001030); W(0x00000000);

  A(0x25001034); W(0x00000000);

  A(0x25001038); W(0x00000000);

  A(0x2500103c); W(0x00000000);

  A(0x25001040); W(0x00000000);

  A(0x25001044); W(0x00000000);

  A(0x25001048); W(0x00000000);

  A(0x2500104c); W(0x00000000);

  A(0x25001050); W(0x00000000);

  A(0x25001054); W(0x00000000);

  A(0x25001058); W(0x00000000);

  A(0x2500105c); W(0x00000000);

  A(0x25001060); W(0x00000000);

  A(0x25001064); W(0x00000000);

  A(0x25001068); W(0x00000000);

  A(0x2500106c); W(0x00000000);

  A(0x25001070); W(0x00000000);

  A(0x25001074); W(0x00000000);

  A(0x25001078); W(0x00000000);

  A(0x2500107c); W(0x00000000);

  A(0x25001080); W(0x00000000);

  A(0x25001084); W(0x00000000);

  A(0x25001088); W(0x00000000);

  A(0x2500108c); W(0x00000000);

  A(0x25001090); W(0x00000000);

  A(0x25001094); W(0x00000000);

  A(0x25001098); W(0x00000000);

  A(0x2500109c); W(0x00000000);

  A(0x250010a0); W(0x00000000);

  A(0x250010a4); W(0x00000000);

  A(0x250010a8); W(0x00000000);

  A(0x250010ac); W(0x00000000);

  A(0x250010b0); W(0x00000000);

  A(0x250010b4); W(0x00000000);

  A(0x250010b8); W(0x00000000);

  A(0x250010bc); W(0x00000000);

  A(0x250010c0); W(0x00000000);

  A(0x250010c4); W(0x00000000);

  A(0x250010c8); W(0x00000000);

  A(0x250010cc); W(0x00000000);

  A(0x250010d0); W(0x00000000);

  A(0x250010d4); W(0x00000000);

  A(0x250010d8); W(0x00000000);

  A(0x250010dc); W(0x00000000);

  A(0x250010e0); W(0x00000000);

  A(0x250010e4); W(0x00000000);

  A(0x250010e8); W(0x00000000);

  A(0x250010ec); W(0x00000000);

  A(0x250010f0); W(0x00000000);

  A(0x250010f4); W(0x00000000);

  A(0x250010f8); W(0x00000000);

  A(0x250010fc); W(0x00000000);

  /* motion vector */
  A(0x25001100); W(0x0014fff0);

  A(0x25001104); W(0xfff80014);

  A(0x25001108); W(0x0004fff0);

  A(0x2500110c); W(0xffe80014);

  A(0x25001110); W(0xfff80004);

  A(0x25001114); W(0xfff8fff4);

  A(0x25001118); W(0xffe80004);

  A(0x2500111c); W(0xffe8fff4);

  A(0x25001120); W(0xfff4fff0);

  A(0x25001124); W(0xfff4ffe0);

  A(0x25001128); W(0xffe4fff0);

  A(0x2500112c); W(0xffe4ffe0);

  A(0x25001130); W(0x00040014);

  A(0x25001134); W(0xffe4001c);

  A(0x25001138); W(0xfff40014);

  A(0x2500113c); W(0xfff40004);

  /* parameters setting */
  A(0x25001140); W(0x18400801);

  A(0x25001144); W(0x01000007);

  A(0x25001148); W(0xfdfff7ff);

  A(0x2500114c); W(0x12c01100);

  A(0x25001150); W(0x00001300);

  A(0x25001154); W(0x00000080);

  /* =================== */
  /* End of initial DATA */


  /* compare result */
  /* Keep reading CBUSY for delaying the result check */
  int i;

  A(0x24050008);
  for (i = 0; i <= 500; i++)
    R(0x00000000,All_Mask);

  /* Reconstructed Cb*/
  A(0x250012c0); R(0x15161617,NO_Mask);
  A(0x250012c4); R(0x12131414,NO_Mask);
  A(0x250012c8); R(0x13141415,NO_Mask);
  A(0x250012cc); R(0x10111212,NO_Mask);
  A(0x250012d0); R(0x11121213,NO_Mask);
  A(0x250012d4); R(0x0e0f1010,NO_Mask);
  A(0x250012d8); R(0x0f101011,NO_Mask);
  A(0x250012dc); R(0x0c0d0e0e,NO_Mask);
  A(0x250012e0); R(0x0d0e0e0f,NO_Mask);
  A(0x250012e4); R(0x0a0b0c0c,NO_Mask);
  A(0x250012e8); R(0x0b0c0c0d,NO_Mask);
  A(0x250012ec); R(0x08090a0a,NO_Mask);
  A(0x250012f0); R(0x66bd0a0b,NO_Mask);
  A(0x250012f4); R(0x06070808,NO_Mask);
  A(0x250012f8); R(0x27ed0809,NO_Mask);
  A(0x250012fc); R(0x04050606,NO_Mask);
  /* Reconstructed Cr*/
  A(0x25001300); R(0x15161617,NO_Mask);
  A(0x25001304); R(0x12131414,NO_Mask);
  A(0x25001308); R(0x13141415,NO_Mask);
  A(0x2500130c); R(0x10111212,NO_Mask);
  A(0x25001310); R(0x11121213,NO_Mask);
  A(0x25001314); R(0x0e0f1010,NO_Mask);
  A(0x25001318); R(0x0f101011,NO_Mask);
  A(0x2500131c); R(0x0c0d0e0e,NO_Mask);
  A(0x25001320); R(0xc5650e0f,NO_Mask);
  A(0x25001324); R(0x0a0b0c0c,NO_Mask);
  A(0x25001328); R(0xd0490c0d,NO_Mask);
  A(0x2500132c); R(0x08090a0a,NO_Mask);
  A(0x25001330); R(0x090a0a0b,NO_Mask);
  A(0x25001334); R(0x06070808,NO_Mask);
  A(0x25001338); R(0x07080809,NO_Mask);
  A(0x2500133c); R(0x04050606,NO_Mask);


  E();

  return 0;

}

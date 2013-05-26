#include "header.h"
#include "ticmacros.h"

#define NO_Mask 0xFFFFFFFF /* 32 bits 1 */
#define All_Mask 0x00000000

int main()
{
	int i;

	/* Initial DATA */
	/* =================== */

	/* InputParamsBaseAddr */
	A(0x25000000);W(0x00280020);
	A(0x25000004);W(0x00500030);
	A(0x25000008);W(0x01100060);
	A(0x2500000C);W(0x00000440);
	A(0x25000010);W(0x00000800);
	A(0x25000014);W(0x00000000);

	/* SlicdHeaderBaseAddr */
	A(0x25000030);W(0x00020101);
	/* SliceDataInBaseAddr */
	A(0x25000050);W(0x00130002);
	A(0x25000054);W(0xFFFFFFFF);
	A(0x25000058);W(0x01010401);
	A(0x2500005C);W(0x00000000);
	A(0x25000060);W(0xFFFF0000);
	A(0x25000064);W(0x001803FF);
	A(0x25000068);W(0x00000000);
	A(0x2500006C);W(0x00000000);
	A(0x25000070);W(0x00000000);
	A(0x25000074);W(0x00000000);
	A(0x25000078);W(0x00000000);
	A(0x2500007C);W(0x00000000);
	A(0x25000080);W(0x00000000);
	A(0x25000084);W(0x00000000);
	A(0x25000088);W(0x00000000);
	A(0x2500008C);W(0x00000000);
	A(0x25000090);W(0x00000000);
	A(0x25000094);W(0x00000000);
	A(0x25000098);W(0x00000000);
	A(0x2500009C);W(0x00000000);
	A(0x250000A0);W(0x00000000);
	A(0x250000A4);W(0x00000000);
	A(0x250000A8);W(0x00000000);
	A(0x250000AC);W(0x00000000);
	A(0x250000B0);W(0x00000000);
	A(0x250000B4);W(0x00000000);
	A(0x250000B8);W(0x00000000);
	A(0x250000BC);W(0x00000000);
	A(0x250000C0);W(0x00000000);
	A(0x250000C4);W(0x00000000);
	A(0x250000C8);W(0x00000000);
	A(0x250000CC);W(0x00000000);
	A(0x250000D0);W(0x00000000);
	A(0x250000D4);W(0x00000000);
	A(0x250000D8);W(0x00000000);
	A(0x250000DC);W(0x00000000);
	A(0x250000E0);W(0x00000000);
	A(0x250000E4);W(0x00000000);
	A(0x250000E8);W(0x00000000);
	A(0x250000EC);W(0x00000000);
	A(0x250000F0);W(0x02010101);
	A(0x250000F4);W(0x06010101);
	A(0x250000F8);W(0x01070205);
	A(0x250000FC);W(0x00000101);
	A(0x25000100);W(0x00000100);
	A(0x25000104);W(0x00000000);
	A(0x25000108);W(0x00000000);
	A(0x2500010C);W(0x00000000);
	/* Luma16x16DCLevelEB */
	A(0x25000110);W(0x00000000);
	A(0x25000114);W(0x00000000);
	A(0x25000118);W(0x00000000);
	A(0x2500011C);W(0x00000000);
	A(0x25000120);W(0x00000000);
	A(0x25000124);W(0x00000000);
	A(0x25000128);W(0x00000000);
	A(0x2500012C);W(0x00000000);
	/* block 0 */
	A(0x25000130);W(0x00000000);
	A(0x25000134);W(0x00000000);
	A(0x25000138);W(0x0000FFFE);
	A(0x2500013C);W(0x00000000);
	A(0x25000140);W(0x00000002);
	A(0x25000144);W(0x0000FFFF);
	A(0x25000148);W(0x00000000);
	A(0x2500014C);W(0x00000000);
/* kimihao: nC = 2 */
	/* block 1 */
	A(0x25000150);W(0x0000FFFF);
	A(0x25000154);W(0x00000000);
	A(0x25000158);W(0x00000003);
	A(0x2500015C);W(0x00000000);
	A(0x25000160);W(0x0000FFFE);
	A(0x25000164);W(0x00000000);
	A(0x25000168);W(0x00000000);
	A(0x2500016C);W(0x00000000);
/* kimihao: nC = 3 */
	/* block 2 */
	A(0x25000170);W(0x00000000);
	A(0x25000174);W(0x00000000);
	A(0x25000178);W(0x00000001);
	A(0x2500017C);W(0x0000FFFF);
	A(0x25000180);W(0x00000001);
	A(0x25000184);W(0x00000000);
	A(0x25000188);W(0x00000000);
	A(0x2500018C);W(0x00000000);
/* kimihao: nC = 3 */
	/* block 3 */
	A(0x25000190);W(0x00000000);
	A(0x25000194);W(0x00000000);
	A(0x25000198);W(0xFFFF0000);
	A(0x2500019C);W(0x00000000);
	A(0x250001A0);W(0x00000000);
	A(0x250001A4);W(0x00000000);
	A(0x250001A8);W(0x00000001);
	A(0x250001AC);W(0x00000000);
/* kimihao: nC = 3 */
	/* block 4 */
	A(0x250001B0);W(0x00000000);
	A(0x250001B4);W(0x00000000);
	A(0x250001B8);W(0x00000000);
	A(0x250001BC);W(0x00000000);
	A(0x250001C0);W(0x0000FFFF);
	A(0x250001C4);W(0x00000000);
	A(0x250001C8);W(0x0000FFFF);
	A(0x250001CC);W(0x00000000);
/* kimihao: nC = 3 */
	/* block 5 */
	A(0x250001D0);W(0x00000001);
	A(0x250001D4);W(0x00000000);
	A(0x250001D8);W(0x0001FFFF);
	A(0x250001DC);W(0x00000000);
	A(0x250001E0);W(0x00000000);
	A(0x250001E4);W(0x00000000);
	A(0x250001E8);W(0x00000000);
	A(0x250001EC);W(0x00000000);
/* kimihao: nC = 2 */
	/* block 6 */
	A(0x250001F0);W(0x00000001);
	A(0x250001F4);W(0x00000000);
	A(0x250001F8);W(0x00000000);
	A(0x250001FC);W(0x00000000);
	A(0x25000200);W(0xFFFF0000);
	A(0x25000204);W(0x00000000);
	A(0x25000208);W(0x0000FFFE);
	A(0x2500020C);W(0x00000000);
/* kimihao: nC = 2 */
	/* block 7 */
	A(0x25000210);W(0x00000000);
	A(0x25000214);W(0x00010000);
	A(0x25000218);W(0x00000002);
	A(0x2500021C);W(0x00000000);
	A(0x25000220);W(0x00010000);
	A(0x25000224);W(0x00000000);
	A(0x25000228);W(0x00000000);
	A(0x2500022C);W(0x00000000);
/* kimihao: nC = 3 */
	/* block 8 */
	A(0x25000230);W(0x00000000);
	A(0x25000234);W(0x00000000);
	A(0x25000238);W(0x00000000);
	A(0x2500023C);W(0x00000000);
	A(0x25000240);W(0x00000000);
	A(0x25000244);W(0x00000000);
	A(0x25000248);W(0x00000000);
	A(0x2500024C);W(0x00000000);
/* kimihao: nC = 3 */
	/* block 9 */
	A(0x25000250);W(0x00000001);
	A(0x25000254);W(0x00000000);
	A(0x25000258);W(0x00000000);
	A(0x2500025C);W(0x00000000);
	A(0x25000260);W(0x00000000);
	A(0x25000264);W(0x00000000);
	A(0x25000268);W(0x00000000);
	A(0x2500026C);W(0x00000000);
/* kimihao: nC = 1 */
	/* block 10 */
	A(0x25000270);W(0x00010000);
	A(0x25000274);W(0x00000000);
	A(0x25000278);W(0x00000000);
	A(0x2500027C);W(0x00000000);
	A(0x25000280);W(0x0000FFFF);
	A(0x25000284);W(0x00000000);
	A(0x25000288);W(0x00000000);
	A(0x2500028C);W(0x00000000);
/* kimihao: nC = 1 */
	/* block 11 */
	A(0x25000290);W(0xFFFF0000);
	A(0x25000294);W(0x00000000);
	A(0x25000298);W(0x00000000);
	A(0x2500029C);W(0x00000000);
	A(0x250002A0);W(0xFFFFFFFE);
	A(0x250002A4);W(0x00000001);
	A(0x250002A8);W(0xFFFF0000);
	A(0x250002AC);W(0x00000000);
/* kimihao: nC = 2 */
	/* block 12 */
	A(0x250002B0);W(0xFFFF0000);
	A(0x250002B4);W(0x00000000);
	A(0x250002B8);W(0x00000001);
	A(0x250002BC);W(0x00000000);
	A(0x250002C0);W(0x00000000);
	A(0x250002C4);W(0x00000000);
	A(0x250002C8);W(0x0000FFFF);
	A(0x250002CC);W(0x00000000);
/* kimihao: nC = 2 */
	/* block 13 */
	A(0x250002D0);W(0x0000FFFF);
	A(0x250002D4);W(0x00000000);
	A(0x250002D8);W(0x00000000);
	A(0x250002DC);W(0x00000000);
	A(0x250002E0);W(0x0000FFFF);
	A(0x250002E4);W(0x00000000);
	A(0x250002E8);W(0x00000000);
	A(0x250002EC);W(0x00000000);
/* kimihao: nC = 3 */
	/* block 14 */
	A(0x250002F0);W(0x00000000);
	A(0x250002F4);W(0x00000000);
	A(0x250002F8);W(0x00010001);
	A(0x250002FC);W(0x00000000);
	A(0x25000300);W(0x0000FFFF);
	A(0x25000304);W(0x00000000);
	A(0x25000308);W(0x00000000);
	A(0x2500030C);W(0x00000000);
/* kimihao: nC = 4 */
	/* block 15 */
	A(0x25000310);W(0x0000FFFF);
	A(0x25000314);W(0x00000000);
	A(0x25000318);W(0xFFFF0000);
	A(0x2500031C);W(0x00000000);
	A(0x25000320);W(0x00000000);
	A(0x25000324);W(0x00000000);
	A(0x25000328);W(0x00000000);
	A(0x2500032C);W(0x00000000);
/* kimihao: nC = 3 */
    /* block 16 */
	A(0x25000330);W(0x00000000);
	A(0x25000334);W(0x00000000);
	/* block 17 */
	A(0x25000338);W(0x00000000);
	A(0x2500033C);W(0x00000000);
	/* block 18 */
	A(0x25000340);W(0x00000000);
	A(0x25000344);W(0x00000000);
	A(0x25000348);W(0x00000000);
	A(0x2500034C);W(0x00000000);
	A(0x25000350);W(0x00000000);
	A(0x25000354);W(0x00000000);
	A(0x25000358);W(0x00000000);
	A(0x2500035C);W(0x00000000);
/* kimihao: nC = 1 */
	/* block 19 */
	A(0x25000360);W(0x00000000);
	A(0x25000364);W(0x00000000);
	A(0x25000368);W(0x00000000);
	A(0x2500036C);W(0x00000000);
	A(0x25000370);W(0x00000000);
	A(0x25000374);W(0x00000000);
	A(0x25000378);W(0x00000000);
	A(0x2500037C);W(0x00000000);
/* kimihao: nC = 0 */
	/* block 20 */
	A(0x25000380);W(0x00000000);
	A(0x25000384);W(0x00000000);
	A(0x25000388);W(0x00000000);
	A(0x2500038C);W(0x00000000);
	A(0x25000390);W(0x00000000);
	A(0x25000394);W(0x00000000);
	A(0x25000398);W(0x00000000);
	A(0x2500039C);W(0x00000000);
/* kimihao: nC = 0 */
	/* block 21 */
	A(0x250003A0);W(0x00000000);
	A(0x250003A4);W(0x00000000);
	A(0x250003A8);W(0x00000000);
	A(0x250003AC);W(0x00000000);
	A(0x250003B0);W(0x00000000);
	A(0x250003B4);W(0x00000000);
	A(0x250003B8);W(0x00000000);
	A(0x250003BC);W(0x00000000);
/* kimihao: nC = 0 */
	/* block 22 */
	A(0x250003C0);W(0x00000000);
	A(0x250003C4);W(0x00000000);
	A(0x250003C8);W(0x00000001);
	A(0x250003CC);W(0x00000000);
	A(0x250003D0);W(0x00000000);
	A(0x250003D4);W(0x00000000);
	A(0x250003D8);W(0x00000000);
	A(0x250003DC);W(0x00000000);
/* kimihao: nC = 1 */
	/* block 23 */
	A(0x250003E0);W(0x00000000);
	A(0x250003E4);W(0x00000000);
	A(0x250003E8);W(0x00000001);
	A(0x250003EC);W(0x00000000);
	A(0x250003F0);W(0x00000000);
	A(0x250003F4);W(0x00000000);
	A(0x250003F8);W(0x00000000);
	A(0x250003FC);W(0x00000000);
/* kimihao: nC = 1 */
	/* block 24 */
	A(0x25000400);W(0x00000000);
	A(0x25000404);W(0x00000000);
	A(0x25000408);W(0x00000000);
	A(0x2500040C);W(0x00000000);
	A(0x25000410);W(0x00000000);
	A(0x25000414);W(0x00000000);
	A(0x25000418);W(0x00000000);
	A(0x2500041C);W(0x00000000);
/* kimihao: nC = 1 */
	/* block 25 */
	A(0x25000420);W(0x00000000);
	A(0x25000424);W(0x00000000);
	A(0x25000428);W(0x00000000);
	A(0x2500042C);W(0x00000000);
	A(0x25000430);W(0x00000000);
	A(0x25000434);W(0x00000000);
	A(0x25000438);W(0x00000000);
	A(0x2500043C);W(0x00000000);
/* kimihao: nC = 1 */

	/* nC value */
	A(0x25000808);W(0x00000000);
	A(0x25000850);W(0x22221010);


  /* me data */
  A(0x25001000); W(0x8c7217a3);

  A(0x25001004); W(0xf87ffc81);

  A(0x25001008); W(0x933baed3);

  A(0x2500100c); W(0xa5daa1b0);

  A(0x25001010); W(0xe9380e84);

  A(0x25001014); W(0xd199ba0a);

  A(0x25001018); W(0xeaa2c6a1);

  A(0x2500101c); W(0xd0a2ed2d);

  A(0x25001020); W(0x855c1404);

  A(0x25001024); W(0xe37ddc10);

  A(0x25001028); W(0x3a77b98a);

  A(0x2500102c); W(0xdfdf515a);

  A(0x25001030); W(0x6ac8185f);

  A(0x25001034); W(0x733b61d2);

  A(0x25001038); W(0x545dde27);

  A(0x2500103c); W(0xd024ffcb);

  A(0x25001040); W(0x23558113);

  A(0x25001044); W(0xe707d35d);

  A(0x25001048); W(0xe6217e8c);

  A(0x2500104c); W(0x2ec500cf);

  A(0x25001050); W(0xeb988e18);

  A(0x25001054); W(0x175ed4ef);

  A(0x25001058); W(0x7d6bbcb2);

  A(0x2500105c); W(0xcf4d90bb);

  A(0x25001060); W(0x6ef2a311);

  A(0x25001064); W(0x0255f976);

  A(0x25001068); W(0x46e87677);

  A(0x2500106c); W(0x8f75ae76);

  A(0x25001070); W(0x2b7a0d3c);

  A(0x25001074); W(0x9342d8e1);

  A(0x25001078); W(0x5011ae94);

  A(0x2500107c); W(0x4f1f5e3e);

  A(0x25001080); W(0x77bd1101);

  A(0x25001084); W(0x8279120b);

  A(0x25001088); W(0xfec96288);

  A(0x2500108c); W(0x4c8d3e10);

  A(0x25001090); W(0x2d77074b);

  A(0x25001094); W(0x74c0bae0);

  A(0x25001098); W(0xa6c4d168);

  A(0x2500109c); W(0x31f5e330);

  A(0x250010a0); W(0x00a9b2f5);

  A(0x250010a4); W(0x4c8222c4);

  A(0x250010a8); W(0x944a4b84);

  A(0x250010ac); W(0xd5e0d889);

  A(0x250010b0); W(0xbf0258df);

  A(0x250010b4); W(0x7a34c212);

  A(0x250010b8); W(0xc420f894);

  A(0x250010bc); W(0xd1f515dc);

  A(0x250010c0); W(0x8bd19ec7);

  A(0x250010c4); W(0x45d753c1);

  A(0x250010c8); W(0x28da219f);

  A(0x250010cc); W(0xd9fdbaf9);

  A(0x250010d0); W(0x2498ff12);

  A(0x250010d4); W(0x569eccc2);

  A(0x250010d8); W(0xa11abec5);

  A(0x250010dc); W(0x9a720fd3);

  A(0x250010e0); W(0x6f2543ae);

  A(0x250010e4); W(0x35b4fc96);

  A(0x250010e8); W(0x175e8e1e);

  A(0x250010ec); W(0x5bf05b49);

  A(0x250010f0); W(0x1d80895b);

  A(0x250010f4); W(0x1a731e55);

  A(0x250010f8); W(0xb0bb8ddd);

  A(0x250010fc); W(0x4a4b2d9c);

  /* PreRowPelY */
  A(0x25001100); W(0xb61c83d2);

  A(0x25001104); W(0x2a14ca46);

  A(0x25001108); W(0xe4a0134a);

  A(0x2500110c); W(0x47d907e9);

  /* PreColPelY */
  A(0x25001110); W(0x0fde5ef5);

  A(0x25001114); W(0xae0da011);

  A(0x25001118); W(0x3b94a366);

  A(0x2500111c); W(0x559644a5);

  A(0x25001120); W(0x0000007d);

  /* parameters setting */
  A(0x25001128); W(0x11901f00);

  A(0x2500112c); W(0x11101200);

  A(0x25001130); W(0x10001100);



	/* =================== */
	/* End of initial DATA */

	A(0x2405F000);
	for (i = 0; i <= 500; i++)
		R(0x00000000,All_Mask);

	/* Result check */
	/* ec bitstream */
	A(0x25000440)); R(0xA946C488,NO_Mask);
	A(0x25000444)); R(0xB6B2C261,NO_Mask);
	A(0x25000448)); R(0xF24B8731,NO_Mask);
	A(0x2500044C)); R(0x799356C3,NO_Mask);
	A(0x25000450)); R(0x79075925,NO_Mask);
	A(0x25000454)); R(0xB5C024F1,NO_Mask);
	A(0x25000458)); R(0x7FC74C35,NO_Mask);
	A(0x2500045C)); R(0xD3376B25,NO_Mask);
	A(0x25000460)); R(0xF405DF16,NO_Mask);
	A(0x25000464)); R(0x0000C0D3,NO_Mask);

	A(0x25000018); R(0x002A0460,NO_Mask);

	/* total coeff */
	A(0x25000808); R(0x25320000,NO_Mask);
	A(0x25000850); R(0x33220010,NO_Mask);


  /* me data */
  A(0x25001190); R(0x000240a1,NO_Mask);
  /* Residual */
  A(0x25001200); R(0xffa1002d,NO_Mask);
  A(0x25001204); R(0x0016fffc,NO_Mask);
  A(0x25001208); R(0x0086000b,NO_Mask);
  A(0x2500120c); R(0x00820009,NO_Mask);
  A(0x25001210); R(0x0038005d,NO_Mask);
  A(0x25001214); R(0x001dffc5,NO_Mask);
  A(0x25001218); R(0x002b003a,NO_Mask);
  A(0x2500121c); R(0x002f0064,NO_Mask);
  A(0x25001220); R(0xff98000e,NO_Mask);
  A(0x25001224); R(0x0073ffc2,NO_Mask);
  A(0x25001228); R(0x0044ff94,NO_Mask);
  A(0x2500122c); R(0x005b0023,NO_Mask);
  A(0x25001230); R(0x0050002b,NO_Mask);
  A(0x25001234); R(0x0074002c,NO_Mask);
  A(0x25001238); R(0x0077ffb7,NO_Mask);
  A(0x2500123c); R(0x005a002c,NO_Mask);
  A(0x25001240); R(0xff9eff8e,NO_Mask);
  A(0x25001244); R(0x000fffe6,NO_Mask);
  A(0x25001248); R(0x0066ff9a,NO_Mask);
  A(0x2500124c); R(0x006d0007,NO_Mask);
  A(0x25001250); R(0x00430014,NO_Mask);
  A(0x25001254); R(0xffc40001,NO_Mask);
  A(0x25001258); R(0xffdbffe4,NO_Mask);
  A(0x2500125c); R(0x00690069,NO_Mask);
  A(0x25001260); R(0xffa2ffe9,NO_Mask);
  A(0x25001264); R(0xfff40052,NO_Mask);
  A(0x25001268); R(0xffeb005c,NO_Mask);
  A(0x2500126c); R(0xfffdffc5,NO_Mask);
  A(0x25001270); R(0x0068ffb1,NO_Mask);
  A(0x25001274); R(0xffdeffe7,NO_Mask);
  A(0x25001278); R(0x00890055,NO_Mask);
  A(0x2500127c); R(0x005affae,NO_Mask);
  A(0x25001280); R(0x000bff9d,NO_Mask);
  A(0x25001284); R(0xffadffdf,NO_Mask);
  A(0x25001288); R(0x005dffe7,NO_Mask);
  A(0x2500128c); R(0x0071ff91,NO_Mask);
  A(0x25001290); R(0x00080016,NO_Mask);
  A(0x25001294); R(0x0070ffab,NO_Mask);
  A(0x25001298); R(0xff8a0059,NO_Mask);
  A(0x2500129c); R(0xffb8004f,NO_Mask);
  A(0x250012a0); R(0x0018ffa2,NO_Mask);
  A(0x250012a4); R(0x00750022,NO_Mask);
  A(0x250012a8); R(0x005e0079,NO_Mask);
  A(0x250012ac); R(0xffa1ffe8,NO_Mask);
  A(0x250012b0); R(0x0046003c,NO_Mask);
  A(0x250012b4); R(0x0007fff5,NO_Mask);
  A(0x250012b8); R(0x001a0045,NO_Mask);
  A(0x250012bc); R(0x0059ffd7,NO_Mask);
  A(0x250012c0); R(0x002dff9b,NO_Mask);
  A(0x250012c4); R(0xfff8007c,NO_Mask);
  A(0x250012c8); R(0x00830000,NO_Mask);
  A(0x250012cc); R(0xff8cffdf,NO_Mask);
  A(0x250012d0); R(0x00000001,NO_Mask);
  A(0x250012d4); R(0xffd00072,NO_Mask);
  A(0x250012d8); R(0x00380000,NO_Mask);
  A(0x250012dc); R(0x0019ffff,NO_Mask);
  A(0x250012e0); R(0xff97ffc6,NO_Mask);
  A(0x250012e4); R(0xffb50004,NO_Mask);
  A(0x250012e8); R(0x0062006b,NO_Mask);
  A(0x250012ec); R(0x001dffcc,NO_Mask);
  A(0x250012f0); R(0x0038001e,NO_Mask);
  A(0x250012f4); R(0xffdaff9b,NO_Mask);
  A(0x250012f8); R(0xffe8ffc8,NO_Mask);
  A(0x250012fc); R(0xffd9ffa9,NO_Mask);
  A(0x25001300); R(0xff9bff8b,NO_Mask);
  A(0x25001304); R(0x00010047,NO_Mask);
  A(0x25001308); R(0xff9cff95,NO_Mask);
  A(0x2500130c); R(0x000c0003,NO_Mask);
  A(0x25001310); R(0xffec0012,NO_Mask);
  A(0x25001314); R(0x00880053,NO_Mask);
  A(0x25001318); R(0xffc8ff9a,NO_Mask);
  A(0x2500131c); R(0xffd60017,NO_Mask);
  A(0x25001320); R(0xff91ffd5,NO_Mask);
  A(0x25001324); R(0xffb70001,NO_Mask);
  A(0x25001328); R(0x0044006a,NO_Mask);
  A(0x2500132c); R(0xfffe004a,NO_Mask);
  A(0x25001330); R(0x005bfff2,NO_Mask);
  A(0x25001334); R(0x0030004e,NO_Mask);
  A(0x25001338); R(0x006dffba,NO_Mask);
  A(0x2500133c); R(0xffbb007f,NO_Mask);
  A(0x25001340); R(0x003c007f,NO_Mask);
  A(0x25001344); R(0xff8a0033,NO_Mask);
  A(0x25001348); R(0xffac004e,NO_Mask);
  A(0x2500134c); R(0xffd6000c,NO_Mask);
  A(0x25001350); R(0xffd5000e,NO_Mask);
  A(0x25001354); R(0x001effd4,NO_Mask);
  A(0x25001358); R(0x00620013,NO_Mask);
  A(0x2500135c); R(0x005f006a,NO_Mask);
  A(0x25001360); R(0xffe20069,NO_Mask);
  A(0x25001364); R(0x0049ff8c,NO_Mask);
  A(0x25001368); R(0x004cff9c,NO_Mask);
  A(0x2500136c); R(0x0004ffbe,NO_Mask);
  A(0x25001370); R(0x0082001e,NO_Mask);
  A(0x25001374); R(0x004effaa,NO_Mask);
  A(0x25001378); R(0xff9f0066,NO_Mask);
  A(0x2500137c); R(0x005b007f,NO_Mask);
  A(0x25001380); R(0x00280051,NO_Mask);
  A(0x25001384); R(0x0015005b,NO_Mask);
  A(0x25001388); R(0xffdd004b,NO_Mask);
  A(0x2500138c); R(0xffcf0061,NO_Mask);
  A(0x25001390); R(0xffab0029,NO_Mask);
  A(0x25001394); R(0xffb20064,NO_Mask);
  A(0x25001398); R(0x00440083,NO_Mask);
  A(0x2500139c); R(0x00630087,NO_Mask);
  A(0x250013a0); R(0x0089ff9c,NO_Mask);
  A(0x250013a4); R(0xffae0022,NO_Mask);
  A(0x250013a8); R(0x0056004c,NO_Mask);
  A(0x250013ac); R(0xffe00028,NO_Mask);
  A(0x250013b0); R(0x0048004f,NO_Mask);
  A(0x250013b4); R(0x002bffa4,NO_Mask);
  A(0x250013b8); R(0xff99005d,NO_Mask);
  A(0x250013bc); R(0x0024fffc,NO_Mask);
  A(0x250013c0); R(0xffcd0038,NO_Mask);
  A(0x250013c4); R(0xfff9ffaf,NO_Mask);
  A(0x250013c8); R(0x00860020,NO_Mask);
  A(0x250013cc); R(0xffbf003e,NO_Mask);
  A(0x250013d0); R(0x0018ffa8,NO_Mask);
  A(0x250013d4); R(0xffa1ffe8,NO_Mask);
  A(0x250013d8); R(0xffe5ffd3,NO_Mask);
  A(0x250013dc); R(0xffe5007a,NO_Mask);
  A(0x250013e0); R(0x0013ffe5,NO_Mask);
  A(0x250013e4); R(0xffa7000a,NO_Mask);
  A(0x250013e8); R(0xffa8ffdf,NO_Mask);
  A(0x250013ec); R(0xffa4fffd,NO_Mask);
  A(0x250013f0); R(0x00170067,NO_Mask);
  A(0x250013f4); R(0x003a0045,NO_Mask);
  A(0x250013f8); R(0xffb70026,NO_Mask);
  A(0x250013fc); R(0xffd4ffd5,NO_Mask);
	E();

	return 0;

}
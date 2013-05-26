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

	/* =================== */
	/* End of initial DATA */

	A(0x90A0F000);
	for (i = 0; i <= 500; i++)
		R(0x00000000,All_Mask);

	/* Result check */
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

	E();

	return 0;

}
/*1.  BustoDmem, para1: TR_WIDTH = 3, SC = 10, SI =  7, SAddr = 0x1, BSZ = 24, DC =  5, DI = 4, DAddr = 0x1.  */
/*               para2: TR_WIDTH = 2, SC = 10, SI =  7, SAddr = 0x0, BSZ = 24, DC =  5, DI = 4, DAddr = 0x0.  */
/*               para3: TR_WIDTH = 1, SC = 10, SI =  7, SAddr = 0x0, BSZ = 33, DC =  5, DI = 4, DAddr = 0x0.  */
/*               para4: TR_WIDTH = 0, SC =  3, SI = 23, SAddr = 0x0, BSZ = 18, DC =  5, DI = 4, DAddr = 0x0.  */

#include "header.h"
#include "ticmacros.h"

#define NO_Mask 0xFFFFFFFF /* 32 bits 1 */
#define All_Mask 0x00000000

int main()
{

	int i ;
	
  /* Flush Cache*/
  A(0x90A4001C);
  W(0x00000001); 	

  /* Data memory addressing mode (0: not interleaved 1: interleaved) */
  A(0x90A80008);
  W(0x00000000);
  
  /* Data memory access priority (0: Core>BIU>CFU 1: BIU>Core>CFU) */
  A(0x90A8000C);
  W(0x00000000);    
                 
  /* Base Address */
  A(0x90A80004);
  W(0x90A00000);
  
  /* Memory Space */
  A(0x90A80000);
  W(0x00000000);

  /* DBGISR */
  A(0x90A0001C);
  W(0x10000000);

  /* EXCISR */
  A(0x90A00020);
  W(0x10000000);
  
  /* FIQISR */
  A(0x90A00024);
  W(0x10000000);

  /* IRQISR */
  A(0x90A00028);
  W(0x10000000); 
      
  /* Start address to PSCU */
  A(0x90A00000);
  W(0x10000000);
  
  /* Start Address to ICache */
  A(0x90A40008);
  W(0x10000000);
  
  /* Initial program size to ICache */
  A(0x90A4000C);
  W(0x00000B6C); /* Size x 1024bits */

  /* Miss program size to ICache */
  A(0x90A40018);
  W(0x00000003); /* Size x 1024bits */

  /* Configure ICache size*/
  A(0x90A40000);
  W(0x00000000);  
  
  /* Configure ICache to cahce/scratch pad mode*/
  A(0x90A40004);
  W(0x00000000);   
  
  /* Start ICache initialization*/
  A(0x90A40010);
  W(0x00000000); 
  
  /* Start the program operation  */ 
  A(0x90A00004);
  W(0x00000001);

  /* Control vector (two address vector followed by one read/write vector) */
  /* WAIT     = {Bit[11]}												   */
  /* HPROT    = {Bit[10:9], Bit[6:5]}									   */
  /* HLOCK    = {Bit[4]} 										   	 	   */
  /* HsizeGen = {Bit[3:2]}										    	   */
  A(0xC0000000);             
  for (i = 0; i <= 2000; i++) 
    R(0x00000000,All_Mask);  
  /* Parameter 0 */
  A(0x24000000); W(0x00000000);
  A(0x24000004); W(0x00000000);
  A(0x24000008); W(0x00000000);
  A(0x2400000C); W(0x00000000);
  A(0x24000010); W(0x00000000);
  A(0x24000014); W(0x00000000);
  A(0x24000018); W(0x00000000);
  A(0x2400001C); W(0x00000000);
  A(0x24000020); W(0x00000000);
  A(0x24000024); W(0x00000000);
  A(0x24000028); W(0x00000000);
  A(0x2400002C); W(0x00000000);
  /* Parameter 1 */
  A(0x24000030); W(0x00000000);
  A(0x24000034); W(0x00000000);
  A(0x24000038); W(0x00000000);
  A(0x2400003C); W(0x00000000);
  A(0x24000040); W(0x00000000);
  A(0x24000044); W(0x00000000);
  /* Parameter 2 */
  A(0x24000050); W(0x00000000);
  A(0x24000054); W(0x00000000);
  A(0x24000058); W(0x00000000);
  A(0x2400005C); W(0x00000000);
  A(0x24000060); W(0x00000000);
  A(0x24000064); W(0x00000000);
  A(0x24000068); W(0x00000000);
  A(0x2400006C); W(0x00000000);
  A(0x24000070); W(0x00000000);
  A(0x24000074); W(0x00000000);
  A(0x24000078); W(0x00000000);
  A(0x2400007C); W(0x00000000); 
  A(0x24000080); W(0x00000000);
  A(0x24000084); W(0x00000000);
  A(0x24000088); W(0x00000000);
  A(0x2400008C); W(0x00000000);
  A(0x24000090); W(0x00000000);
  A(0x24000094); W(0x00000000);
  A(0x24000098); W(0x00000000);
  A(0x2400009C); W(0x00000000);
  A(0x240000A0); W(0x00000000);
  A(0x240000A4); W(0x00000000);
  A(0x240000A8); W(0x00000000);
  A(0x240000AC); W(0x00000000);
  A(0x240000B0); W(0x00000000);
  
  A(0x24000150); W(0x00000000); 
  A(0x24000154); W(0x00000000);
  /* Parameter 2 */
  A(0x24000120); W(0x00000000);
  A(0x24000124); W(0x00000000);
  A(0x24000128); W(0x00000000);
  A(0x2400012C); W(0x00000000);
  A(0x24000130); W(0x00000000);
  A(0x24000134); W(0x00000000);
  
  A(0x24000140); W(0x00000000);
  A(0x24000144); W(0x00000000);
  A(0x24000148); W(0x00000000);
  
/* Result check */
  /* Parameter 0 */
  A(0x24000000); R(0x01000000,0xFF00FF00);
  A(0x24000004); R(0x03000200,0xFF00FF00);
  A(0x24000008); R(0x05000400,0xFF00FF00);
  A(0x2400000C); R(0x07000600,0xFF00FF00);
  A(0x24000010); R(0x09000800,0xFF00FF00);
  A(0x24000014); R(0x0B000A00,0xFF00FF00);
  A(0x24000018); R(0x0D000C00,0xFF00FF00);
  A(0x2400001C); R(0x0F000E00,0xFF00FF00);
  A(0x24000020); R(0x11001000,0xFF00FF00);
  A(0x24000024); R(0x1A001200,0xFF00FF00);
  A(0x24000028); R(0x1C001B00,0xFF00FF00);
  A(0x2400002C); R(0x1E001D00,0xFF00FF00);
  /* Parameter 1 */
  A(0x24000030); R(0x00141300,0x00FFFF00);
  A(0x24000034); R(0x17001615,0xFF00FFFF);
  A(0x24000038); R(0x1A190018,0xFFFF00FF);
  A(0x2400003C); R(0x001C1B00,0x00FFFF00);
  A(0x24000040); R(0x1F001E1D,0xFF00FFFF);
  A(0x24000044); R(0x29280020,0xFFFF00FF);
  /* Parameter 2 */
  A(0x24000050); R(0x33323130,0xFFFFFFFF);
  A(0x24000054); R(0x00363534,0x00FFFFFF);
  A(0x24000058); R(0x37000000,0xFF000000);
  A(0x2400005C); R(0x3B3A3938,0xFFFFFFFF);
  A(0x24000060); R(0x00003D3C,0x0000FFFF);
  A(0x24000064); R(0x3F3E0000,0xFFFF0000);
  A(0x24000068); R(0x43424140,0xFFFFFFFF);
  A(0x2400006C); R(0x00000044,0x000000FF);
  A(0x24000070); R(0x47464500,0xFFFFFF00);
  A(0x24000074); R(0x4B4A4948,0xFFFFFFFF);
  A(0x24000078); R(0x00000000,0x00000000);
  A(0x2400007C); R(0x4F4E4D4C,0xFF00FFFF); 
  A(0x24000080); R(0x00525150,0x00FFFFFF);
  A(0x24000084); R(0x53000000,0xFF000000);
  A(0x24000088); R(0x57565554,0xFFFFFFFF);
  A(0x2400008C); R(0x00005958,0x0000FFFF);
  A(0x24000090); R(0x5B5A0000,0x00FF0000);
  A(0x24000094); R(0x5F5E5D5C,0xFFFFFFFF);
  A(0x24000098); R(0x00000060,0x000000FF);
  A(0x2400009C); R(0x63626100,0xFFFFFF00);
  A(0x240000A0); R(0x67666564,0xFFFFFFFF);
  A(0x240000A4); R(0x00000000,0x00000000);
  A(0x240000A8); R(0x6B6A6968,0xFFFFFFFF);
  A(0x240000AC); R(0x006E6D6C,0x00FFFFFF);
  A(0x240000B0); R(0x6F000000,0xFF000000);
  
  A(0x24000150); R(0xAAA60000,0xFFFF0000); 
  A(0x24000154); R(0x000000AE,0x000000FF);
  /* Parameter 2 */
  A(0x24000120); R(0x73727100,0xFFFFFF00);
  A(0x24000124); R(0x007A7574,0x00FFFFFF);
  A(0x24000128); R(0x7C7B0000,0xFFFF0000);
  A(0x2400012C); R(0x84837E7D,0xFFFFFFFF);
  A(0x24000130); R(0x85000000,0xFF000000);
  A(0x24000134); R(0x008C8786,0x00FFFFFF);
  
  A(0x24000140); R(0x96940000,0xFFFF0000);
  A(0x24000144); R(0x00009A98,0x0000FFFF);
  A(0x24000148); R(0x9E9C0000,0xFFFF0000);
  
 
  E();
          
  return 0;  
  
} 

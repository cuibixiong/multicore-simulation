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
    
   
  /* Result check */
  /* Parameter 0 */
  A(0x25000000); W(0x00000000);
  A(0x25000004); W(0x00000000);
  A(0x25000008); W(0x00000000);
  A(0x2500000C); W(0x00000000);
  A(0x25000010); W(0x00000000);
  A(0x25000014); W(0x00000000);
  A(0x25000018); W(0x00000000);
  A(0x2500001C); W(0x00000000);
  A(0x25000020); W(0x00000000);
  A(0x25000024); W(0x00000000);
  A(0x25000028); W(0x00000000);
  A(0x2500002C); W(0x00000000);
  /* Parameter 1 */
  A(0x25000030); W(0x00000000);
  A(0x25000034); W(0x00000000);
  A(0x25000038); W(0x00000000);
  A(0x2500003C); W(0x00000000);
  A(0x25000040); W(0x00000000);
  A(0x25000044); W(0x00000000);
  A(0x25000048); W(0x00000000);
  A(0x2500004C); W(0x00000000);
  A(0x25000050); W(0x00000000);
  A(0x25000054); W(0x00000000);
  A(0x25000058); W(0x00000000);
  A(0x2500005C); W(0x00000000);
  A(0x25000060); W(0x00000000);
  A(0x25000064); W(0x00000000);
  A(0x25000068); W(0x00000000);
  A(0x2500006C); W(0x00000000);

  /* Parameter 3 */
  A(0x25000150); W(0x00000000);
  A(0x25000154); W(0x00000000);
  A(0x25000158); W(0x00000000);
  A(0x2500015C); W(0x00000000);
  A(0x25000160); W(0x00000000);
  A(0x25000164); W(0x00000000);
  A(0x25000168); W(0x00000000);
  A(0x2500016C); W(0x00000000);    
  
  /* Result check */
  /* Parameter 0 */
  A(0x25000000); R(0x03020100,0xFFFFFF00);
  A(0x25000004); R(0x00000504,0x0000FFFF);
  A(0x25000008); R(0x07060000,0xFFFF0000);
  A(0x2500000C); R(0x000A0908,0x00FFFFFF);
  A(0x25000010); R(0x12000000,0xFF000000);
  A(0x25000014); R(0x16151413,0xFFFFFFFF);
  A(0x25000018); R(0x00000000,0x00000000);
  A(0x2500001C); R(0x1A191817,0xFFFFFFFF);
  A(0x25000020); R(0x0000001B,0x000000FF);
  A(0x25000024); R(0x25242300,0xFFFFFF00);
  A(0x25000028); R(0x00000026,0x000000FF);
  A(0x2500002C); R(0x00000000,0x00000000);
  /* Parameter 1 */
  A(0x25000030); R(0x03020100,0xFFFFFFFF);
  A(0x25000034); R(0x00000004,0x000000FF);
  A(0x25000038); R(0x07060500,0xFFFFFF00);
  A(0x2500003C); R(0x00000908,0x0000FFFF);
  A(0x25000040); R(0x12110000,0xFFFF0000);
  A(0x25000044); R(0x00151413,0x00FFFFFF);
  A(0x25000048); R(0x16000000,0xFF000000);
  A(0x2500004C); R(0x1a191817,0xFFFFFFFF);
  A(0x25000050); R(0x00000000,0x00000000);
  A(0x25000054); R(0x25242322,0xFFFFFFFF);
  A(0x25000058); R(0x00000000,0x00000000);
  A(0x2500005C); R(0x00000000,0x00000000);
  A(0x25000060); R(0x00000000,0x00000000);
  A(0x25000064); R(0x00000000,0x00000000);
  A(0x25000068); R(0x00000000,0x00000000);
  A(0x2500006C); R(0x00000000,0x00000000);

  /* Parameter 3 */
  A(0x25000150); R(0x1A020100,0xFFFFFFFF);
  A(0x25000154); R(0x0000001B,0x000000FF);
  A(0x25000158); R(0x35341C00,0xFFFFFF00);
  A(0x2500015C); R(0x00004E36,0x0000FFFF);
  A(0x25000160); R(0x504F0000,0xFFFF0000);
 

  E();
          
  return 0;  
  
} 

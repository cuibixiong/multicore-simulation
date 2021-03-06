; PACDMA Setting
; ================================================         
  

;************************************************************** Continuous Access From External Memory
{  MOVI.L R0, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R0] = 0x00000000

{  MOVI.H R0, 0x2500  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R0] = 0x00000000

{  MOVI.L R1, 0x1111  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R1] = 0x00001111

{  MOVI.H R1, 0x1111  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R1] = 0x11111111

{  MOVI.L R2, 0x2222  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R2] = 0x00002222

{  MOVI.H R2, 0x2222  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R2] = 0x22222222

{  MOVI.L R3, 0x3333  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R3] = 0x00003333

{  MOVI.H R3, 0x3333  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R3] = 0x33333333

{  MOVI.L R4, 0x4444  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R4] = 0x00004444

{  MOVI.H R4, 0x4444  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R4] = 0x44444444

{  MOVI.L R5, 0x5555  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R5] = 0x00005555

{  MOVI.H R5, 0x5555  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R5] = 0x55555555

{  MOVI.L R6, 0x6666  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R6] = 0x00006666

{  MOVI.H R6, 0x6666  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R6] = 0x66666666

{  MOVI.L R7, 0x7777  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R7] = 0x00007777

{  MOVI.H R7, 0x7777  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R7] = 0x77777777

{  MOVI.L R8, 0x8888  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R8] = 0x00008888

{  MOVI.H R8, 0x8888  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R8] = 0x88888888

;===================================================
{  MOVI.L R10, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R10, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.L R13, 0x6000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R13, 0x2500  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R10, R13, 0xB0  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }


Label:
{  LW R15, R0, 0xB0  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{ SEQI R14, P1, P2, R15, 0xAAAAAAAA | NOP | NOP | NOP | NOP }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  (P2) B Label   |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }

;===================================================




{  SW R1, R0, 0  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000000] = 0x11111111

{  SW R2, R0, 4  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000004] = 0x22222222

{  SW R3, R0, 8  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000008] = 0x33333333

{  SW R4, R0, 12  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x0000000C] = 0x44444444

{  SW R5, R0, 16  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000010] = 0x55555555

{  SW R6, R0, 20  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000014] = 0x66666666

{  SW R7, R0, 24  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000018] = 0x77777777

{  SW R8, R0, 28  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x0000001C] = 0x88888888

{  LW R8, R0, 0  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R8] = 0x11111111

{  LW R7, R0, 4  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R7] = 0x22222222

{  LW R6, R0, 8  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R6] = 0x33333333

{  LW R5, R0, 12  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R5] = 0x44444444

{  LW R4, R0, 16  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R4] = 0x55555555

{  LW R3, R0, 20  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R3] = 0x66666666

{  LW R2, R0, 24  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R2] = 0x77777777

{  LW R1, R0, 28  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R1] = 0x88888888

;;**************************************************************  Store to LDM
{  MOVI.L R0, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R0] = 0x00000000

{  MOVI.H R0, 0x2400  |  NOP  |  NOP  |  NOP  |  NOP  }  ; 0x1E00
;Reg[R0] = 0x00000000

{  SW R8, R0, 0  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000000] = 0x11111111

{  SW R7, R0, 4  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000004] = 0x22222222

{  SW R6, R0, 8  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000008] = 0x33333333

{  SW R5, R0, 12  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x0000000C] = 0x44444444

{  SW R4, R0, 16  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000010] = 0x55555555

{  SW R3, R0, 20  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000014] = 0x66666666

{  SW R2, R0, 24  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000018] = 0x77777777

{  SW R1, R0, 28  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x0000001C] = 0x88888888

;************************************************************** In-Continuous Access From External Memory
{  MOVI.L R0, 0x0020  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R0] = 0x00000020

{  MOVI.H R0, 0x2500  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R0] = 0x00000020

{  SW R1, R0, 4+  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000020]  = 0x88888888, Reg[R0] = 0x00000024

{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }

{  SW R2, R0, 4+  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000024]  = 0x77777777, Reg[R0] = 0x00000028

{  SW R3, R0, 4+  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000028]  = 0x66666666, Reg[R0] = 0x0000002C

{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }

{  SW R4, R0, 4+  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x0000002C]  = 0x55555555, Reg[R0] = 0x00000030

{  SW R5, R0, 4+  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000030]  = 0x44444444, Reg[R0] = 0x00000034

{  SW R6, R0, 4+  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000034]  = 0x33333333, Reg[R0] = 0x00000038

{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }

{  SW R7, R0, 4+  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000038]  = 0x22222222, Reg[R0] = 0x0000003C

{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }

{  SW R8, R0, 0  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x0000003C]  = 0x11111111

{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }

;=============================================================
{  MOVI.L R0, 0x003C  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R0] = 0x0000003C

{  MOVI.H R0, 0x2500  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R0] = 0x0000003C

{  LW R1, R0, (-4)+  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R1] = 0x11111111, Reg[R0] = 0x00000038

{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }

{  LW R2, R0, (-4)+  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R2] = 0x22222222, Reg[R0] = 0x00000034

{  LW R3, R0, (-4)+  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R3] = 0x33333333, Reg[R0] = 0x00000030

{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }

{  LW R4, R0, (-4)+  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R4] = 0x44444444, Reg[R0] = 0x0000002C

{  LW R5, R0, (-4)+  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R5] = 0x55555555, Reg[R0] = 0x00000028

{  LW R6, R0, (-4)+  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R6] = 0x66666666, Reg[R0] = 0x00000024

{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }

{  LW R7, R0, (-4)+  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R7] = 0x77777777, Reg[R0] = 0x00000020

{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }

{  LW R8, R0, 0  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R8] = 0x88888888

{  MOVI.L R0, 0x0020  |  NOP  |  NOP  |  NOP  |  NOP  }
;Reg[R0] = 0x00000020

{  MOVI.H R0, 0x2400  |  NOP  |  NOP  |  NOP  |  NOP  } ; 0x1E00
;Reg[R0] = 0x00000020

{  SW R1, R0, 0  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000020] = 0x11111111

{  SW R2, R0, 4  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000024] = 0x22222222

{  SW R3, R0, 8  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000028] = 0x33333333

{  SW R4, R0, 12  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x0000002C] = 0x44444444

{  SW R5, R0, 16  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000030] = 0x55555555

{  SW R6, R0, 20  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000034] = 0x66666666

{  SW R7, R0, 24  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x00000038] = 0x77777777

{  SW R8, R0, 28  |  NOP  |  NOP  |  NOP  |  NOP  }
;Mem[0x0000003C] = 0x88888888


  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }

;************************************************************** Program Terminate
{  TRAP  |  NOP  |  NOP  |  NOP  |  NOP  }


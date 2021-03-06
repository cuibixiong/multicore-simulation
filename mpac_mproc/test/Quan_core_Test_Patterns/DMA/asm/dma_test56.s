;**********************************************************************
; To verify
; DMA
;1.  BustoDmem, para1: TR_WIDTH = 3, SC = 10, SI =  7, SAddr = 0x1, BSZ = 24, DC =  5, DI = 4, DAddr = 0x1.
;               para2: TR_WIDTH = 2, SC = 10, SI =  7, SAddr = 0x0, BSZ = 24, DC =  5, DI = 4, DAddr = 0x0.
;               para3: TR_WIDTH = 1, SC = 10, SI =  7, SAddr = 0x0, BSZ = 33, DC =  5, DI = 4, DAddr = 0x0.
;               para4: TR_WIDTH = 0, SC =  3, SI = 23, SAddr = 0x0, BSZ = 18, DC =  5, DI = 4, DAddr = 0x0.
;**********************************************************************
.data
;16
;;M1 Base Address
PACDSP0_LDM_BaseAddr = 0x24000000
;;M2 Base Address
PACDSP0_M2_BaseAddr = 0x25000000

;;PACDSP CORE0 DMA SETTING
PACDSP0_M2_DMA_Base = 0x25820000

DMA_M2_SR      = 0x25820054 

DspDataMemAddr = 0x2400
DspM2DataMemAddr = 0x2500
;;DspDMURegister = 0x2405
DspM2DMURegister = 0x2582
ExternalMemAddr7 = 0x3007
ExternalMemAddr6 = 0x3006
ExternalMemAddr5 = 0x3005
ExternalMemAddr4 = 0x3004
.text
;************************************************************** Initial data
{  MOVI.L R0, 0x0000        |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R0, ExternalMemAddr7        |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.L R1, 0x0100        |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R1, 0x0302        |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI R2, 64              |  NOP  |  NOP  |  NOP  |  NOP  }
_LOOP:
{  SW R1, R0, 4+            |  NOP  |  NOP  |  NOP  |  NOP  }
{  ADDI R1, R1, 0x04040404  |  NOP  |  NOP  |  NOP  |  NOP  }
{  LBCB R2, _LOOP           |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                      |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                      |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                      |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                      |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                      |  NOP  |  NOP  |  NOP  |  NOP  }


{  MOVI R2, 0x200              |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI R1, 0x0              |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI R0, 0x25000000              |  NOP  |  NOP  |  NOP  |  NOP  }
M2_CLR_LOOP:
{  SW R1, R0, 4+            |  NOP  |  NOP  |  NOP  |  NOP  }
{  LBCB R2, M2_CLR_LOOP           |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP  |  NOP  |  NOP  |  NOP  |  NOP  }


;;************************************************************** Clear status0
;{  MOVI.L R3, 0x0088  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R3, DspM2DMURegister  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.L R4, 0x0001  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 0       |  NOP  |  NOP  |  NOP  |  NOP  }
;;************************************************************** Clear status1
;{  MOVI.L R3, 0x00A8  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R3, DspM2DMURegister  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.L R4, 0x0001  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 0       |  NOP  |  NOP  |  NOP  |  NOP  }
;;************************************************************** Clear status2
;{  MOVI.L R3, 0x00C8  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R3, DspM2DMURegister  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.L R4, 0x0001  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 0       |  NOP  |  NOP  |  NOP  |  NOP  }
;;************************************************************** Clear status3
;{  MOVI.L R3, 0x00E8  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R3, DspM2DMURegister  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.L R4, 0x0001  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 0       |  NOP  |  NOP  |  NOP  |  NOP  }

;Set DMU Priority
{  MOVI.L R3, 0x8040  | NOP                 |  NOP  |  NOP                |  NOP  }   ;jeremy
{  MOVI.H R3, DspM2DMURegister  | NOP                 |  NOP  |  NOP                |  NOP  }
{  MOVI.L R4, 0x0002  | NOP                 |  NOP  |  NOP                |  NOP  }
{  MOVI.H R4, DspM2DMURegister  | NOP                 |  NOP  |  NOP                |  NOP  }
{  SW R4, R3, 0       | NOP                 |  NOP  |  NOP                |  NOP  }
{  NOP                | NOP                 |  NOP  |  NOP                |  NOP  }

;************************************************************** Parameter0
{  MOVI.L R3, 0x0070  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R3, DspM2DMURegister  |  NOP  |  NOP  |  NOP  |  NOP  }
;SAR
{  MOVI.L R4, 0x0001  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, ExternalMemAddr7  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;DAR
{  MOVI.L R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, DspM2DataMemAddr  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;SGR
{  MOVI.L R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;DSR
{  MOVI.L R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;CTL
{  MOVI.L R4, 0x2004  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }

;EN ch0
{  MOVI.L R3, 0x0084  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R3, DspM2DMURegister  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.L R4, 0x0001  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 0       |  NOP  |  NOP  |  NOP  |  NOP  }

;************************************************************** Parameter1
{  MOVI.L R3, 0x00B0  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R3, DspM2DMURegister  |  NOP  |  NOP  |  NOP  |  NOP  }
;SAR
{  MOVI.L R4, 0x0010  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, ExternalMemAddr7  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;DAR
{  MOVI.L R4, 0x0010  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, DspM2DataMemAddr  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;SGR
{  MOVI.L R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;DSR
{  MOVI.L R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;CTL
{  MOVI.L R4, 0x0004  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x0006  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;EN
{  MOVI.L R4, 0x0001  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }

;memory access for dma contention
{  NOP                |  NOP                |  NOP  |  NOP  |  NOP  }
{  NOP                |  NOP                |  NOP  |  NOP  |  NOP  }
{  MOVI.L R3, 0x0070  |  MOVI.L A0, 0x0200  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R3, DspM2DataMemAddr  |  MOVI.H A0, DspM2DataMemAddr  |  NOP  |  NOP  |  NOP  }
{  MOVI.L R4, 0x0000  |  MOVI.L A1, 0x1100  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x1111  |  MOVI.H A1, 0x3322  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  SW A1, A0, 4+      |  NOP  |  NOP  |  NOP  }
{  MOVI.L R4, 0x2222  |  MOVI.L A1, 0x5544  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x3333  |  MOVI.H A1, 0x7766  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  SW A1, A0, 4+      |  NOP  |  NOP  |  NOP  }
{  MOVI.L R4, 0x4444  |  MOVI.L A1, 0x9988  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x5555  |  MOVI.H A1, 0xBBAA  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  SW A1, A0, 4+      |  NOP  |  NOP  |  NOP  }
{  MOVI.L R4, 0x6666  |  MOVI.L A1, 0xDDCC  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x7777  |  MOVI.H A1, 0xFFEE  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  SW A1, A0, 4+      |  NOP  |  NOP  |  NOP  }
{  MOVI.L R4, 0x8888  |  NOP                |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x9999  |  NOP                |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP                |  NOP  |  NOP  |  NOP  }
{  MOVI.L R4, 0xAAAA  |  NOP                |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0xBBBB  |  NOP                |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP                |  NOP  |  NOP  |  NOP  }
{  MOVI.L R4, 0xCCCC  |  NOP                |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0xDDDD  |  NOP                |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP                |  NOP  |  NOP  |  NOP  }
{  MOVI.L R4, 0xEEEE  |  NOP                |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0xFFFF  |  NOP                |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP                |  NOP  |  NOP  |  NOP  }
;************************************************************** Check DMA Done
{  MOVI R5, DMA_M2_SR       |  NOP  |  NOP  |  NOP  |  NOP  }
_Label2:
{  LW R6, R5, 0            |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  SEQI R7, P1, P2, R6, 0x22222222  |  NOP  |  NOP  |  NOP  |  NOP  }
{  (P2)B _Label2           |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }

;************************************************************** Program Terminates
{  TRAP  |  NOP  |  NOP  |  NOP  |  NOP  }

;===============================================================================
; Author: Anthony
; Description: Test for accessing PACCORE0 CORE register;
; Date: 2010/11/20
;===============================================================================

;=== Polling M2 for sync. ===
  { MOVI r0, 0x25005000 | NOP | NOP | NOP | NOP }
_LOOP:    
  { LW r1, r0, 0x0  | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { SEQI r2, p1, p2, r1, 0xFFFFFFFF | NOP | NOP | NOP | NOP }
  { (p2) B _LOOP                    | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }    
  
 
;==Save data in PACDSP CORE0 
BASE_ADDR     = 0x2405;

;Set 0
DGBISR_OFFSET = 0x1C;
EXCISR_OFFSET = 0x20;

;Set 1
;FIQISR_OFFSET  = 0x24;
;IRQISR_OFFSET  = 0x28; 

;Set 2
;RSV0_OFFSET    = 0x5C;
;RSV1_OFFSET    = 0x60; 
;BIU_TIMER_0_OFFSET    = 0x70;
;BIU_TIMER_1_OFFSET    = 0x78; 

;Set 3
;INTMASK_OFFSET = 0x68; width =1;
;BIU_TIMER_0_EN_OFFSET = 0x74; width =1;
;BIU_TIMER_1_EN_OFFSET = 0x7C; width =1;



 ;************************************************************** Set Start Address
 ;Save the base address in r0;
  {  MOVI.L r0, 0x0000     |  NOP    |  NOP  |  NOP  |  NOP  } 
  {  MOVI.H r0, BASE_ADDR  |  NOP    |  NOP  |  NOP  |  NOP  }

;Save data in DGBISR register;                                                                                                                    
  {  MOVI r1, 0x12345678       |  NOP  |  NOP  |  NOP  |  NOP  }
  {  SW r1, r0, DGBISR_OFFSET  |  NOP  |  NOP  |  NOP  |  NOP  }

;Save data in EXCISR register;
  {  MOVI r2, 0x87654321       |  NOP  |  NOP  |  NOP  |  NOP  }
  {  SW r2, r0, EXCISR_OFFSET  |  NOP  |  NOP  |  NOP  |  NOP  }

  { NOP                |  NOP               |  NOP  |  NOP  |  NOP  }
 
 
  { TRAP | NOP | NOP | NOP | NOP }  
  

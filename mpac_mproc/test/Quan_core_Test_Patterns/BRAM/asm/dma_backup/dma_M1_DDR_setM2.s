;===============================================================================
; Author: Jiahao
; Description: Move 1KB data from LDM to DDR, and from DDR to LDM by DMA
; Date: 2009/11/04
;===============================================================================

  INI_NUM  = 512
  M1_BASE  = 0x24000000
  DDR_BASE = 0x30000000
  
  
;===== Initialize 2KB Local Data Memory =====

  {  MOVI R0, 0x03020100 | NOP | NOP | NOP | NOP }
  {  MOVI R1,  M1_BASE  | NOP | NOP | NOP | NOP }  
  {  MOVI R10, INI_NUM   | NOP | NOP | NOP | NOP }
INIT_DATA:
  {  SW R0, R1, 4+       | NOP | NOP | NOP | NOP }
  {  ADDI R0, R0, 0x04040404 | NOP | NOP | NOP | NOP }
  {  LBCB R10, INIT_DATA | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }  
  
  
;===== Move 1KB data from PAC0 M1 to DDR =====  

  ;=== PACDMA Setting, PAC0 M1 -> DDR ===
  DMA_SAR_ADDR1 = 0x2405C0B0 ;
  DMA_DAR_ADDR1 = 0x2405C0B4 ;
  DMA_SGR_ADDR1 = 0x2405C0B8 ;
  DMA_DSR_ADDR1 = 0x2405C0BC ;
  DMA_CTL_ADDR1 = 0x2405C0C0 ;
  DMA_ENA_ADDR1 = 0x2405C0C4 ;
  DMA_CLR_ADDR1 = 0x2405C0C8 ;
                             
  DMA_SAR_DATA1 = 0x24000000 ; set M1 as start address 
  DMA_DAR_DATA1 = 0x30000000 ; set DDR as destination address 
  DMA_SGR_DATA1 = 0x00000000 ; not used
  DMA_DSR_DATA1 = 0x00400004 ; not used
  DMA_CTL_DATA1 = 0x0040020C ; DMA_CTL_DATA, BSZ[31:12], DSEN[9], SGEN[8], Int2Ext[3], Burst[2], TRZ[1:0]
  DMA_ENA_DATA1 = 0x00000000 ; active dma
  DMA_CLR_DATA1 = 0x00000000 ; not used

  DMA_STATUS_ADDR = 0x24058054;

  M2_SAR_ADDR1 = 0x258200B0 ;
  M2_DAR_ADDR1 = 0x258200B4 ;
  M2_SGR_ADDR1 = 0x258200B8 ;
  M2_DSR_ADDR1 = 0x258200BC ;
  M2_CTL_ADDR1 = 0x258200C0 ;
  M2_ENA_ADDR1 = 0x258200C4 ;
  M2_CLR_ADDR1 = 0x258200C8 ;
                             
  M2_SAR_DATA1 = 0x24000000 ; set M1 as start address 
  M2_DAR_DATA1 = 0x30000000 ; set DDR as destination address 
  M2_SGR_DATA1 = 0x00000000 ; not used
  M2_DSR_DATA1 = 0x00000000 ; not used
  M2_CTL_DATA1 = 0x0040000C ; DMA_CTL_DATA, BSZ[31:12], DSEN[9], SGEN[8], Int2Ext[3], Burst[2], TRZ[1:0]
  M2_ENA_DATA1 = 0x00000000 ; active dma
  M2_CLR_DATA1 = 0x00000000 ; not used

  M2_STATUS_ADDR = 0x25820054;

    
  { MOVI r0, DMA_SAR_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_SAR_DATA1 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }
  
  { MOVI r0, DMA_DAR_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_DAR_DATA1 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }
  
  { MOVI r0, DMA_DSR_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_DSR_DATA1 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }

  { MOVI r0, DMA_CTL_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_CTL_DATA1 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }
  
  { MOVI r0, DMA_ENA_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_ENA_DATA1 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }

  ;=== setting M2 REG ===
  { MOVI r3, M2_SAR_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r4, M2_SAR_DATA1 | NOP | NOP | NOP | NOP }
  
  { MOVI r5, M2_DAR_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r6, M2_DAR_DATA1 | NOP | NOP | NOP | NOP }
  
  { MOVI r7, M2_CTL_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r8, M2_CTL_DATA1 | NOP | NOP | NOP | NOP }
    
  ;=== waiting dma finish transfer ===
  { MOVI r0, DMA_STATUS_ADDR | NOP | NOP | NOP | NOP }
M1_DDR:                                       
  { LW r1, r0, 0x0  | NOP | NOP | NOP | NOP }
  ;=== setting M2 REG start ===
  { SW r4, r3, 0x0  | NOP | NOP | NOP | NOP }
  { SW r6, r5, 0x0  | NOP | NOP | NOP | NOP }
  { SW r8, r7, 0x0  | NOP | NOP | NOP | NOP }    
  ;=== setting M2 REG end ===  
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { SEQI r2, p1, p2, r1, 0x00002222 | NOP | NOP | NOP | NOP }     ; (DMA_STATUS == 0) ? 
  { (p2) B M1_DDR                 | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }

;===== Move 1KB data from DDR to PAC0 M1 =====  

  ;=== PACDMA Setting, DDR -> PAC0 M1 ===
  DMA_SAR_ADDR1 = 0x2405C0B0 ;
  DMA_DAR_ADDR1 = 0x2405C0B4 ;
  DMA_SGR_ADDR1 = 0x2405C0B8 ;
  DMA_DSR_ADDR1 = 0x2405C0BC ;
  DMA_CTL_ADDR1 = 0x2405C0C0 ;
  DMA_ENA_ADDR1 = 0x2405C0C4 ;
  DMA_CLR_ADDR1 = 0x2405C0C8 ;
                             
  DMA_SAR_DATA1 = 0x30000000 ; set DDR as start address 
  DMA_DAR_DATA1 = 0x24001000 ; set M1 as destination address 
  DMA_SGR_DATA1 = 0x00000000 ; not used
  DMA_DSR_DATA1 = 0x00000000 ; not used
  DMA_CTL_DATA1 = 0x00400004 ; DMA_CTL_DATA, BSZ[31:12], DSEN[9], SGEN[8], Int2Ext[3], Burst[2], TRZ[1:0]
  DMA_ENA_DATA1 = 0x00000000 ; active dma
  DMA_CLR_DATA1 = 0x00000000 ; not used

  DMA_STATUS_ADDR = 0x24058054;
    
  { MOVI r0, DMA_SAR_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_SAR_DATA1 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }
  
  { MOVI r0, DMA_DAR_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_DAR_DATA1 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }
  
  { MOVI r0, DMA_CTL_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_CTL_DATA1 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }
  
  { MOVI r0, DMA_ENA_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_ENA_DATA1 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }
  
  ;=== waiting dma finish transfer ===
  { MOVI r0, DMA_STATUS_ADDR | NOP | NOP | NOP | NOP }
DDR_M1:    
  { LW r1, r0, 0x0  | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { SEQI r2, p1, p2, r1, 0x00002222 | NOP | NOP | NOP | NOP }     ; (DMA_STATUS == 0) ? 
  { (p2) B DDR_M1                 | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }

;************************************************************** Program Terminate
   
  {  TRAP  |  NOP  |  NOP  |  NOP  |  NOP  }  
  
  

;===============================================================================
; Author: max
; Description: Core->DDR, DMA->M2_memory, M2_DMA->DDR
; Date: 2010/08/
;===============================================================================

  INI_NUM  = 512
  M1_BASE  = 0x24000000
  M2_BASE  = 0x25001000
  DDR_Tmp  = 0x30010000
  
  ;===== Initialize M1 =====
  {  MOVI R0,  0x07050301 | NOP | NOP | NOP | NOP }
  {  MOVI R1,  M1_BASE    | NOP | NOP | NOP | NOP }  
  {  MOVI R10, INI_NUM    | NOP | NOP | NOP | NOP }
INIT_M1:
  {  SW R0, R1, 4+        | NOP | NOP | NOP | NOP }
  {  LBCB R10, INIT_M1 | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }  

  ;===== Initialize M2 =====
  {  MOVI R0, 0x08060402 | NOP | NOP | NOP | NOP }
  {  MOVI R1,  M2_BASE   | NOP | NOP | NOP | NOP }  
  {  MOVI R10, INI_NUM   | NOP | NOP | NOP | NOP }
INIT_M2:
  {  SW R0, R1, 4+       | NOP | NOP | NOP | NOP }
  {  LBCB R10, INIT_M2 | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }  
  
 
;===== Move data from PAC0 M1 to M2 =====  

  ;=== PACDMA Setting, PAC0 M1 -> M2 ===
  DMA_SAR_ADDR1 = 0x2405C0B0 ;
  DMA_DAR_ADDR1 = 0x2405C0B4 ;
  DMA_SGR_ADDR1 = 0x2405C0B8 ;
  DMA_DSR_ADDR1 = 0x2405C0BC ;
  DMA_CTL_ADDR1 = 0x2405C0C0 ;
  DMA_ENA_ADDR1 = 0x2405C0C4 ;
  DMA_CLR_ADDR1 = 0x2405C0C8 ;
                             
  DMA_SAR_DATA1 = 0x24000000 ; set M1 as start address 
  DMA_DAR_DATA1 = 0x25000000 ; set M2 as destination address 
  DMA_SGR_DATA1 = 0x00000000 ; not used
  DMA_DSR_DATA1 = 0x00000000 ; not used
  DMA_CTL_DATA1 = 0x0040000C ; DMA_CTL_DATA, BSZ[31:12], DSEN[9], SGEN[8], Int2Ext[4], Burst[2], TRZ[1:0]
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
 
  
;===== M2_DMA move data from M2 to DDR =====  

  ;=== PACDMA Setting, M2 -> DDR ===
  M2DMA_SAR_ADDR1 = 0x258200B0 ;
  M2DMA_DAR_ADDR1 = 0x258200B4 ;
  M2DMA_SGR_ADDR1 = 0x258200B8 ;
  M2DMA_DSR_ADDR1 = 0x258200BC ;
  M2DMA_CTL_ADDR1 = 0x258200C0 ;
  M2DMA_ENA_ADDR1 = 0x258200C4 ;
  M2DMA_CLR_ADDR1 = 0x258200C8 ;
                             
  M2DMA_SAR_DATA1 = 0x25001000 ; set M2 as start address 
  M2DMA_DAR_DATA1 = 0x30000000 ; set DDR as destination address 
  M2DMA_SGR_DATA1 = 0x00000000 ; not used
  M2DMA_DSR_DATA1 = 0x00000000 ; not used
  M2DMA_CTL_DATA1 = 0x0040000C ; DMA_CTL_DATA, BSZ[31:12], DSEN[9], SGEN[8], Int2Ext[3], TRZ[1:0]
  M2DMA_ENA_DATA1 = 0x00000000 ; active dma
  M2DMA_CLR_DATA1 = 0x00000000 ; not used

  M2DMA_STATUS_ADDR = 0x25820054;
    
  { MOVI r0, M2DMA_SAR_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, M2DMA_SAR_DATA1 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0           | NOP | NOP | NOP | NOP }
  
  { MOVI r0, M2DMA_DAR_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, M2DMA_DAR_DATA1 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0           | NOP | NOP | NOP | NOP }
  
  { MOVI r0, M2DMA_SGR_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, M2DMA_SGR_DATA1 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0           | NOP | NOP | NOP | NOP }
  
  { MOVI r0, M2DMA_DSR_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, M2DMA_DSR_DATA1 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0           | NOP | NOP | NOP | NOP }

  { MOVI r0, M2DMA_CTL_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, M2DMA_CTL_DATA1 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0           | NOP | NOP | NOP | NOP }

  { MOVI r0, 0x25004000    | NOP | NOP | NOP | NOP } 
  { MOVI r1, 0xFFFFFFFF    | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }

  ;=== enable M1 DMA ===
  { MOVI r0, DMA_ENA_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_ENA_DATA1 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }
  
    ;=== enable M2 DMA ===  
  { MOVI r0, M2DMA_ENA_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, M2DMA_ENA_DATA1 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0           | NOP | NOP | NOP | NOP }

  
  ;=== waiting M1 DMA finish ===
  { MOVI r0, DMA_STATUS_ADDR | NOP | NOP | NOP | NOP }
  { MOVI r3, DDR_Tmp         | NOP | NOP | NOP | NOP }    ; access DDR 
  { MOVI r4, 0x87654321      | NOP | NOP | NOP | NOP }
  { SW r4, r3, 0x0           | NOP | NOP | NOP | NOP }  
M1_M2:    
  { LW r1, r0, 0x0    | NOP | NOP | NOP | NOP }
  { LW r4, r3, 0x0    | NOP | NOP | NOP | NOP } 
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }    
  { SW r4, r3, 0x4 | NOP | NOP | NOP | NOP }   
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { SEQI r2, p1, p2, r1, 0x00002222 | NOP | NOP | NOP | NOP }     ; (DMA_STATUS == 0) ? 
  { (p2) B M1_M2                    | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
  
  ;=== waiting M2 dma finish ===
  { MOVI r0, M2DMA_STATUS_ADDR | NOP | NOP | NOP | NOP }
M2_DDR:    
  { LW r1, r0, 0x0  | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { SEQI r2, p1, p2, r1, 0x22222222 | NOP | NOP | NOP | NOP }     ; (DMA_STATUS == 0) ? 
  { (p2) B M2_DDR                 | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }  
  
  
  { TRAP | NOP | NOP | NOP | NOP }  
  
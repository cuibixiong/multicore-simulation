;===============================================================================
; Author: Jiahao
; Description: Move 1KB data from LDM to DDR, and from DDR to LDM by DMA
; Date: 2009/11/04
;===============================================================================

  WORD_SIZE = 512
  DMEM_BASE = 0x24000000
  DMEM_BASE_LS = 0x24002800  
  DMEM_BASE_LS1 = 0x24002C00    
  M2_BASE = 0x25000000  
  DDR_BASE  = 0x30000000
  DspDMURegister = 0x2405
  
  {  NOP | NOP | NOP | NOP | NOP }
  {  MOVI R0, 0x03020100     | NOP | NOP | NOP | NOP }
  {  MOVI R1, DMEM_BASE  | NOP | NOP | NOP | NOP }  
  {  MOVI R10, WORD_SIZE | NOP | NOP | NOP | NOP }
INIT_DATA:
  {  SW R0, R1, 4+ | NOP | NOP | NOP | NOP }
  {  ADDI R0, R0, 0x04040404 | NOP | NOP | NOP | NOP }
  {  LBCB R10, INIT_DATA | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }

  {  NOP | NOP | NOP | NOP | NOP }
  {  MOVI R0, 0x03020100     | NOP | NOP | NOP | NOP }
  {  MOVI R1, M2_BASE  | NOP | NOP | NOP | NOP }  
  {  MOVI R10, WORD_SIZE | NOP | NOP | NOP | NOP }
INIT_DATA1:
  {  SW R0, R1, 4+ | NOP | NOP | NOP | NOP }
  {  ADDI R0, R0, 0x04040404 | NOP | NOP | NOP | NOP }
  {  LBCB R10, INIT_DATA1 | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  {  NOP | NOP | NOP | NOP | NOP }
  
;===== Move 1KB data from LDM to DDR =====  

  ;=== PACDMA Setting, DMEM -> DDR ===
  DMA_SAR_ADDR1 = 0x2405C0B0 ;
  DMA_DAR_ADDR1 = 0x2405C0B4 ;
  DMA_SGR_ADDR1 = 0x2405C0B8 ;
  DMA_DSR_ADDR1 = 0x2405C0BC ;
  DMA_CTL_ADDR1 = 0x2405C0C0 ;
  DMA_ENA_ADDR1 = 0x2405C0C4 ;
  DMA_CLR_ADDR1 = 0x2405C0C8 ;
                             
  DMA_SAR_DATA1 = 0x24000000 ; set DMEM as start address 
  DMA_DAR_DATA1 = 0x30000000 ; set DDR as destination address 
  DMA_SGR_DATA1 = 0x00000000 ; not used
  DMA_DSR_DATA1 = 0x00000000 ; not used
  DMA_CTL_DATA1 = 0x0040000C ; DMA_CTL_DATA, BSZ[31:20], DSEN[9], SGEN[8], Int2Ext[3], Burst[2], TRZ[1:0]
  DMA_ENA_DATA1 = 0x00000000 ; active dma
  DMA_CLR_DATA1 = 0x00000001 ;

  DMA_STATUS_ADDR = 0x24058054;

;======================== Define M1 ch0 REG =========================
  DMA_SAR_ADDR0 = 0x2405C070 ;
  DMA_DAR_ADDR0 = 0x2405C074 ;
  DMA_SGR_ADDR0 = 0x2405C078 ;
  DMA_DSR_ADDR0 = 0x2405C07C ;
  DMA_CTL_ADDR0 = 0x2405C080 ;
  DMA_ENA_ADDR0 = 0x2405C084 ;
  DMA_CLR_ADDR0 = 0x2405C088 ;
                             
  DMA_SAR_DATA0 = 0x25000000 ; set M2 as start address 
  DMA_DAR_DATA0 = 0x24002000 ; set M1 as destination address 
  DMA_SGR_DATA0 = 0x00000000 ; not used
  DMA_DSR_DATA0 = 0x00000000 ; not used
  DMA_CTL_DATA0 = 0x00400004 ; DMA_CTL_DATA, BSZ[31:12], DSEN[9], SGEN[8], Int2Ext[3], Burst[2], TRZ[1:0]
  DMA_ENA_DATA0 = 0x00000000 ; active dma
  DMA_CLR_DATA0 = 0x00000000 ; not used

  DMA_STATUS_ADDR = 0x24058054;
;======================== Define M2 REG =========================

;======================== Move 1KB data from LDM to DDR =========================

  { MOVI r0, DMA_SAR_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_SAR_DATA1 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }     
  
  { MOVI r0, DMA_DAR_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_DAR_DATA1 | NOP | NOP | NOP | NOP }   
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }

  { MOVI r0, DMA_SGR_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_SGR_DATA1 | NOP | NOP | NOP | NOP }
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

  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }

;======================== Move 1KB data from M2 to DDR =========================

  { MOVI r0, DMA_SAR_ADDR0 | NOP | NOP | NOP | NOP }
  { MOVI r1, DMA_SAR_DATA0 | NOP | NOP | NOP | NOP }   
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }
  
  { MOVI r0, DMA_DAR_ADDR0 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_DAR_DATA0 | NOP | NOP | NOP | NOP }     
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }

  { MOVI r0, DMA_SGR_ADDR0 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_SGR_DATA0 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }
  
  { MOVI r0, DMA_DSR_ADDR0 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_DSR_DATA0 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }
  
  { MOVI r0, DMA_CTL_ADDR0 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_CTL_DATA0 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }
  
  { MOVI r0, DMA_ENA_ADDR0 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_ENA_DATA0 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }

  ;=== waiting dma finish transfer ===
  { MOVI r0, DMA_STATUS_ADDR | NOP | NOP | NOP | NOP }
  { MOVI r10, DMEM_BASE_LS | NOP | NOP | NOP | NOP }  
  { MOVI r11, 0x11112222 | NOP | NOP | NOP | NOP }    
  { NOP | MOVI a0, DMEM_BASE_LS1 | NOP | NOP | NOP }      
  { NOP | MOVI d0, 0x33334444 | NOP | NOP | NOP }      
  
chk_M2_sts:    
  { LW r1, r0, 0x0  | NOP | NOP | NOP | NOP }
  { SW r11, r10, 0x0 | SW d0, A0, 0x10 | NOP | NOP | NOP }
  { SW r11, r10, 0x4 | SW d0, A0, 0x14 | NOP | NOP | NOP }
  { SW r11, r10, 0x8 | SW d0, A0, 0x18 | NOP | NOP | NOP }
  { SW r11, r10, 0xC | SW d0, A0, 0x1C | NOP | NOP | NOP }    
  { SW r11, r10, 0x0 | SW d0, A0, 0x10 | NOP | NOP | NOP }
  { SW r11, r10, 0x4 | SW d0, A0, 0x14 | NOP | NOP | NOP }
  { SW r11, r10, 0x8 | SW d0, A0, 0x18 | NOP | NOP | NOP }
  { SW r11, r10, 0xC | SW d0, A0, 0x1C | NOP | NOP | NOP }    
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { SEQI r2, p1, p2, r1, 0x00002222 | NOP | NOP | NOP | NOP }     ; (DMA_STATUS == 0) ? 
  { (p2) B chk_M2_sts                 | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
;======================== Move 1KB data from M2 to DDR =========================  
  
  ;=== waiting dma finish transfer ===
  { MOVI r0, DMA_STATUS_ADDR | NOP | NOP | NOP | NOP }
DMEM2DDR:    
  { LW r1, r0, 0x0  | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { SEQI r2, p1, p2, r1, 0x00002222 | NOP | NOP | NOP | NOP }     ; (DMA_STATUS == 0) ? 
  { (p2) B DMEM2DDR                 | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
  
;===== Move 1KB data from DDR to LDM =====  
  
  ;=== PACDMA Setting, DDR -> DMEM ===
  DMA_SAR_ADDR0 = 0x2405C070 ;
  DMA_DAR_ADDR0 = 0x2405C074 ;
  DMA_SGR_ADDR0 = 0x2405C078 ;
  DMA_DSR_ADDR0 = 0x2405C07C ;
  DMA_CTL_ADDR0 = 0x2405C080 ;
  DMA_ENA_ADDR0 = 0x2405C084 ;
  DMA_CLR_ADDR0 = 0x2405C088 ;

  DMA_SAR_DATA0 = 0x30000000 ; set DDR as start address 
  DMA_DAR_DATA0 = 0x24001000 ; set DMEM as destination address 
  DMA_SGR_DATA0 = 0x00000000 ; set SGC[31:20]:8, SGO[19:0]:14
  DMA_DSR_DATA0 = 0x00000000 ; set DSC[31:20]:8, DSO[19:0]:14
  DMA_CTL_DATA0 = 0x00400004 ; DMA_CTL_DATA,BSZ[31:12], DSEN[9], SGEN[8], Int2Ext[3], Burst[2], TRZ[1:0]
  DMA_ENA_DATA0 = 0x00000000 ; active dma
  DMA_CLR_DATA0 = 0x00000001 ;

;======================== Define M2 REG =========================
  DMA_SAR_ADDR1 = 0x2405C0B0 ;
  DMA_DAR_ADDR1 = 0x2405C0B4 ;
  DMA_SGR_ADDR1 = 0x2405C0B8 ;
  DMA_DSR_ADDR1 = 0x2405C0BC ;
  DMA_CTL_ADDR1 = 0x2405C0C0 ;
  DMA_ENA_ADDR1 = 0x2405C0C4 ;
  DMA_CLR_ADDR1 = 0x2405C0C8 ;
                             
  DMA_SAR_DATA1 = 0x24002000 ; set M1 as start address 
  DMA_DAR_DATA1 = 0x25001000 ; set DDR as destination address 
  DMA_SGR_DATA1 = 0x00000000 ; not used
  DMA_DSR_DATA1 = 0x00000000 ; not used
  DMA_CTL_DATA1 = 0x0040000C ; DMA_CTL_DATA, BSZ[31:12], DSEN[9], SGEN[8], Int2Ext[3], Burst[2], TRZ[1:0]
  DMA_ENA_DATA1 = 0x00000000 ; active dma
  DMA_CLR_DATA1 = 0x00000000 ; not used

;======================== Define M2 REG =========================

  { MOVI r0, DMA_SAR_ADDR0 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_SAR_DATA0 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }

  { MOVI r0, DMA_DAR_ADDR0 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_DAR_DATA0 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }
  
  { MOVI r0, DMA_SGR_ADDR0 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_SGR_DATA0 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }
  
  { MOVI r0, DMA_DSR_ADDR0 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_DSR_DATA0 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }
  
  { MOVI r0, DMA_CTL_ADDR0 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_CTL_DATA0 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }

  { MOVI r0, DMA_ENA_ADDR0 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_ENA_DATA0 | NOP | NOP | NOP | NOP }
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }

  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }

;======================== Move 1KB data from DDR to M2 =========================

  { MOVI r0, DMA_SAR_ADDR1 | NOP | NOP | NOP | NOP }
  { MOVI r1, DMA_SAR_DATA1 | NOP | NOP | NOP | NOP }   
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }
  
  { MOVI r0, DMA_DAR_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_DAR_DATA1 | NOP | NOP | NOP | NOP }     
  { SW r1, r0, 0x0         | NOP | NOP | NOP | NOP }

  { MOVI r0, DMA_SGR_ADDR1 | NOP | NOP | NOP | NOP } 
  { MOVI r1, DMA_SGR_DATA1 | NOP | NOP | NOP | NOP }
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

  ;=== waiting dma finish transfer ===
  { MOVI r0, DMA_STATUS_ADDR | NOP | NOP | NOP | NOP }
  { MOVI r10, DMEM_BASE_LS | NOP | NOP | NOP | NOP }  
  { MOVI r11, 0x11112222 | NOP | NOP | NOP | NOP }    
  { NOP | MOVI a0, DMEM_BASE_LS1 | NOP | NOP | NOP }      
  { NOP | MOVI d0, 0x33334444 | NOP | NOP | NOP }      

chk_M2_sts1:    
  { LW r1, r0, 0x0  | NOP | NOP | NOP | NOP }
  { SW r11, r10, 0x0 | SW d0, A0, 0x10 | NOP | NOP | NOP }
  { SW r11, r10, 0x4 | SW d0, A0, 0x14 | NOP | NOP | NOP }
  { SW r11, r10, 0x8 | SW d0, A0, 0x18 | NOP | NOP | NOP }
  { SW r11, r10, 0xC | SW d0, A0, 0x1C | NOP | NOP | NOP }    
  { SW r11, r10, 0x0 | SW d0, A0, 0x10 | NOP | NOP | NOP }
  { SW r11, r10, 0x4 | SW d0, A0, 0x14 | NOP | NOP | NOP }
  { SW r11, r10, 0x8 | SW d0, A0, 0x18 | NOP | NOP | NOP }
  { SW r11, r10, 0xC | SW d0, A0, 0x1C | NOP | NOP | NOP }    
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { SEQI r2, p1, p2, r1, 0x00002222 | NOP | NOP | NOP | NOP }     ; (DMA_STATUS == 0) ? 
  { (p2) B chk_M2_sts1                 | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
;======================== Move 1KB data from DDR to M2 =========================  

  ;=== waiting dma finish transfer ===
  { MOVI r0, DMA_STATUS_ADDR | NOP | NOP | NOP | NOP }
DDR2DMEM:    
  { LW r1, r0, 0x0 | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { SEQI r2, p1, p2, r1, 0x00002222 | NOP | NOP | NOP | NOP }     ; (DMA_STATUS == 0) ? 
  { (p2) B DDR2DMEM                 | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }

;************************************************************** Program Terminate
   
  {  TRAP  |  NOP  |  NOP  |  NOP  |  NOP  }  
  
  

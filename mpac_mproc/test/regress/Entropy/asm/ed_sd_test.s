;;set dma (load data to dmem)
;;Parameter0 (parameters)
;{  MOVI.L R3, 0x0070  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R3, 0x1E05  |  NOP  |  NOP  |  NOP  |  NOP  }
;;SAR
;{  MOVI.L R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;DAR
;{  MOVI.L R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x1E00  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;SGR
;{  MOVI.L R4, 0x0007  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x00A0  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;DSR
;{  MOVI.L R4, 0x0004  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0050  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;CTL
;{  MOVI.L R4, 0x0002  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0110  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;EN
;{  MOVI.L R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;
;;Parameter1 (nC value)
;{  MOVI.L R3, 0x0090  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R3, 0x1E05  |  NOP  |  NOP  |  NOP  |  NOP  }
;;SAR
;{  MOVI.L R4, 0x0800  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;DAR
;{  MOVI.L R4, 0x0800  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x1E00  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;SGR
;{  MOVI.L R4, 0x0007  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x00A0  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;DSR
;{  MOVI.L R4, 0x0004  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0050  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;CTL
;{  MOVI.L R4, 0x0002  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0040  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;EN
;{  MOVI.L R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;
;;Parameter2 (bitstream)
;{  MOVI.L R3, 0x00B0  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R3, 0x1E05  |  NOP  |  NOP  |  NOP  |  NOP  }
;;SAR
;{  MOVI.L R4, 0x0440  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;DAR
;{  MOVI.L R4, 0x0440  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x1E00  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;SGR
;{  MOVI.L R4, 0x0007  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x00A0  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;DSR
;{  MOVI.L R4, 0x0004  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0050  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;CTL
;{  MOVI.L R4, 0x0002  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0100  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;EN
;{  MOVI.L R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;
;;Check DMA Done
;{  MOVI.L R5, 0x0054       |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R5, 0x1E05       |  NOP  |  NOP  |  NOP  |  NOP  }
;Label1:
;{  LW R6, R5, 0            |  NOP  |  NOP  |  NOP  |  NOP  }
;{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
;{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SEQI R7, P1, P2, R6, 0  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  (P2)B Label1           |  NOP  |  NOP  |  NOP  |  NOP  }
;{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
;{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
;{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
;{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
;{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
;
; set CFU_Info_Sel(SR13) according to interested
	{	MOVI.L SR13, 1 					|				NOP				|				NOP				|				NOP				|				NOP				}

; store Input_Addr
	{	MOVI R0, 0x80000000  		|				NOP				|				NOP				|				NOP				|				NOP				}
	{ COPY SR5, R0					 	|				NOP				|				NOP				|				NOP				|				NOP				}
	
; test if store success
	{	TEST P1, P2, 0xFFFF, 0x8000 	|				NOP				|				NOP				|				NOP				|				NOP				}

{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }

; store Prevention_Flag
	{	MOVI R0, 0x80040000  		|				NOP				|				NOP				|				NOP				|				NOP				}
	{ COPY SR5, R0					 	|				NOP				|				NOP				|				NOP				|				NOP				}

; test if store success
	{	TEST P1, P2, 0xFFFF, 0x8000 	|				NOP				|				NOP				|				NOP				|				NOP				}

{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }

; start function(EC)
	{	MOVI.H R1, 0x0000 			|				NOP				|				NOP				|				NOP				|				NOP				}	
	{	MOVI.L R1, 0x0006 			|				NOP				|				NOP				|				NOP				|				NOP				}	
	{ COPY SR5, R1					 	|				NOP				|				NOP				|				NOP				|				NOP				}

; test if busy
	{	TEST P3, P4, 0xFFFF, 0x2006 	|				NOP				|				NOP				|				NOP				|				NOP				}

; wait for done (2048 cycles)
	{	MOVI.H R2, 0x2000 			|				NOP				|				NOP				|				NOP				|				NOP				}	
	{	MOVI.L R2, 0x0000 			|				NOP				|				NOP				|				NOP				|				NOP				}	
	{ COPY SR5, R2					 	|				NOP				|				NOP				|				NOP				|				NOP				}
	
	{	MOVI R3, 2048 					|				NOP				|				NOP				|				NOP				|				NOP				}	
	{	WAIT R3, 0xFFFF, 0x0006 |				NOP				|				NOP				|				NOP				|				NOP				}
  {  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
  {  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
  {  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
  {  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
  {  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }

;;set dma (store data to ddr)
;;Parameter0 (sd data & residual)
;{  MOVI.L R3, 0x0070  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R3, 0x1E05  |  NOP  |  NOP  |  NOP  |  NOP  }
;;SAR
;{  MOVI.L R4, 0x0060  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x1E00  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;DAR
;{  MOVI.L R4, 0x0060  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;SGR
;{  MOVI.L R4, 0x0007  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x00A0  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;DSR
;{  MOVI.L R4, 0x0004  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0050  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;CTL
;{  MOVI.L R4, 0x0012  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x00FC  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;EN
;{  MOVI.L R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;
;;Parameter1 (endbaseaddr)
;{  MOVI.L R3, 0x0090  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R3, 0x1E05  |  NOP  |  NOP  |  NOP  |  NOP  }
;;SAR
;{  MOVI.L R4, 0x0018  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x1E00  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;DAR
;{  MOVI.L R4, 0x0018  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;SGR
;{  MOVI.L R4, 0x0007  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x00A0  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;DSR
;{  MOVI.L R4, 0x0004  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0050  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;CTL
;{  MOVI.L R4, 0x0012  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0002  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;EN
;{  MOVI.L R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;
;;Parameter2 (nC value)
;{  MOVI.L R3, 0x00B0  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R3, 0x1E05  |  NOP  |  NOP  |  NOP  |  NOP  }
;;SAR
;{  MOVI.L R4, 0x0800  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x1E00  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;DAR
;{  MOVI.L R4, 0x0800  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;SGR
;{  MOVI.L R4, 0x0007  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x00A0  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;DSR
;{  MOVI.L R4, 0x0004  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0050  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;CTL
;{  MOVI.L R4, 0x0012  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0040  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;;EN
;{  MOVI.L R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;
;;Check DMA Done
;{  MOVI.L R5, 0x0054       |  NOP  |  NOP  |  NOP  |  NOP  }
;{  MOVI.H R5, 0x1E05       |  NOP  |  NOP  |  NOP  |  NOP  }
;Label2:
;{  LW R6, R5, 0            |  NOP  |  NOP  |  NOP  |  NOP  }
;{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
;{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
;{  SEQI R7, P1, P2, R6, 0  |  NOP  |  NOP  |  NOP  |  NOP  }
;{  (P2)B Label2           |  NOP  |  NOP  |  NOP  |  NOP  }
;{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
;{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
;{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
;{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
;{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }

; trap
	{				NOP				|				NOP				|				NOP				|				NOP				|				NOP				}	
	{				NOP				|				NOP				|				NOP				|				NOP				|				NOP				}	
	{				NOP				|				NOP				|				NOP				|				NOP				|				NOP				}	
	{				NOP				|				NOP				|				NOP				|				NOP				|				NOP				}	
	{				TRAP			|				NOP				|				NOP				|				NOP				|				NOP				}	


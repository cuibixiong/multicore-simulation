
BASE_ADDR = 0x2400

  {	NOP	|	MOVI.H A2,BASE_ADDR	|	NOP	|	MOVI.H A2,BASE_ADDR	|	NOP	} 
  {	NOP	|	MOVI.H A3,BASE_ADDR	|	NOP	|	MOVI.H A3,BASE_ADDR	|	NOP	} 
  
;=================================================================  

	{	MOVIU R0,40	  |	MOVI.L A2,0x1000	|	NOP	|	MOVI.L A2,0x1028	|	NOP	}
	{	ANDI R1,R0,32	|	MOVI.L A3,0x1050	|	NOP	|	MOVI.L A3,0x1078	|	NOP	}
	{	SEQI R2,P8,P9,R1,0	|	DLW D0,A2,8+	|	NOP	|	DLW D0,A2,8+	|	NOP	}
	{	SRAI R0,R0,5	|	DLW D2,A3,8+	|	NOP	|	DLW D2,A3,8+	|	NOP	}
	{	NOP	|	DLW D8,A2,8+	|	DCLR AC0	|	DLW D8,A2,8+	|	DCLR AC0	}
	{	NOP	|	DLW D10,A3,8+	|	DCLR AC2	|	DLW D10,A3,8+	|	DCLR AC2	}
_LOOP:											
	{	NOP	|	DLW D0,A2,8+	|	FMAC.D AC0,D0,D2	|	DLW D0,A2,8+	|	FMAC.D AC0,D0,D2	}
	{	NOP	|	DLW D2,A3,8+	|	FMAC.D AC2,D1,D3	|	DLW D2,A3,8+	|	FMAC.D AC2,D1,D3	}
	{	LBCB R0,_LOOP	|	DLW D8,A2,8+	|	FMAC.D AC0,D8,D10	|	DLW D8,A2,8+	|	FMAC.D AC0,D8,D10	}
	{	NOP	|	DLW D10,A3,8+	|	FMAC.D AC2,D9,D11	|	DLW D10,A3,8+	|	FMAC.D AC2,D9,D11	}
	{	NOP	|	DLW D0,A2,8+	|	FMAC.D AC0,D0,D2	|	DLW D0,A2,8+	|	FMAC.D AC0,D0,D2	}
	{	NOP	|	DLW D2,A3,8+	|	FMAC.D AC2,D1,D3	|	DLW D2,A3,8+	|	FMAC.D AC2,D1,D3	}
	{	NOP	|	DLW D8,A2,8+	|	FMAC.D AC0,D8,D10	|	DLW D8,A2,8+	|	FMAC.D AC0,D8,D10	}
	{	NOP	|	DLW D10,A3,8+	|	FMAC.D AC2,D9,D11	|	DLW D10,A3,8+	|	FMAC.D AC2,D9,D11	}
	{	NOP	|	NOP	|	(P9)FMAC.D AC0,D0,D2	|	NOP	|	(P9)FMAC.D AC0,D0,D2	}
	{	NOP	|	NOP	|	(P9)FMAC.D AC2,D1,D3	|	NOP	|	(P9)FMAC.D AC2,D1,D3	}
	{	NOP	|	NOP	|	ADD AC0,AC0,AC1	|	NOP	|	ADD AC0,AC0,AC1	}
	{	NOP	|	MOVI.L A2,0x10B0	|	ADD AC2,AC2,AC3	|	NOP	|	ADD AC2,AC2,AC3	}
	{	NOP	|	NOP	|	ADD D0,AC0,AC2	|	NOP	|	ADD D0,AC0,AC2	}
	{	NOP	|	BDR D1	|	NOP	|	BDT D0	|	NOP	}
	{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
	{	NOP	|	ADD D0,D0,D1	|	NOP	|	NOP	|	NOP	}
	{	NOP	|	SRAI D0,D0,15	|	NOP	|	NOP	|	NOP	}
TestLoop:											
	{	NOP	|	SW D0, A2, 0	|	NOP	|	NOP	|	NOP	}
	
	

  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
	{ 	TRAP	|	NOP	|	NOP	|	NOP	|	NOP	}
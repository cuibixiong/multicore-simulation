
BASE_ADDR = 0x2400

{	NOP	|	MOVI.H A0,BASE_ADDR	|	NOP	|	MOVI.H A3,BASE_ADDR	|	NOP	}
{	NOP	|	MOVI.H A2,BASE_ADDR	|	NOP	|	MOVI.H A0,BASE_ADDR	|	NOP	}
{	NOP	|	MOVI.H A1,BASE_ADDR	|	NOP	|	MOVI.H A1,BASE_ADDR	|	NOP	}

{	MOVIU R0,200	|	MOVI.L A0,0x1000	|	NOP	|	MOVI.L A3,0x1050	|	NOP	}
{	NOP	          |	MOVI.L A2,0x1200	|	NOP	|	LH D0,A3,2+	      |	NOP	}
{	NOP	          |	MOVI.L A1,0x1020	|	NOP	|	MOVI.L A1,0x1020	|	NOP	}
_LoopBody:										
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	NOP	|	SH D0,A1,0+	|	NOP	}
{	NOP	|	DLW D0,A0,8+	|	NOP	|	NOP	|	NOP	}
{	NOP	|	DLW D2,A1,8+	|	DCLR AC0	|	NOP	|	NOP	}
{	NOP	|	DLW D4,A0,8+	|	DCLR AC2	|	NOP	|	NOP	}
{	NOP	|	DLW D6,A1,8+	|	NOP	|	NOP	|	NOP	}
{	NOP	|	DLW D8,A0,8+	|	FMAC.D AC0,D0,D2	|	NOP	|	NOP	}
{	NOP	|	DLW D10,A1,8+	|	FMAC.D AC2,D1,D3	|	NOP	|	NOP	}
{	NOP	|	DLW D12,A0,8+	|	FMAC.D AC0,D4,D6	|	NOP	|	NOP	}
{	NOP	|	DLW D14,A1,8+	|	FMAC.D AC2,D5,D7	|	NOP	|	NOP	}
{	NOP	|	NOP	|	FMAC.D AC0,D8,D10	|	NOP	|	NOP	}
{	NOP	|	MOVI.L A1,0x1022	|	FMAC.D AC2,D9,D11	|	NOP	|	NOP	}
{	NOP	|	DSNW D2,D3,A1,8+	|	FMAC.D AC0,D12,D14	|	NOP	|	NOP	}
{	NOP	|	DSNW D6,D7,A1,8+	|	FMAC.D AC2,D13,D15	|	NOP	|	NOP	}
{	NOP	|	DSNW D10,D11,A1,8+	|	ADD AC0,AC0,AC1	|	NOP	|	NOP	}
{	NOP	|	DSNW D14,D15,A1,8+	|	ADD AC1,AC2,AC3	|	NOP	|	NOP	}
{	NOP	|	NOP	|	ADD AC0,AC0,AC1	|	NOP	|	NOP	}
{	NOP	|	NOP	|	SRAI D0,AC0,18	|	NOP	|	NOP	}

TestLoop:										
{	NOP	|	SH D0,A2,2+	|	NOP	|	NOP	|	NOP	}
{	LBCB R0,_LoopBody	|	MOVI.L A0,0x1000	|	NOP	|	NOP	|	NOP	}
{	NOP	|	MOVI.L A1,0x1020	|	NOP	|	LH D0,A3,2+	|	NOP	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}


  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
{	TRAP	|	NOP	|	NOP	|	NOP	|	NOP	}

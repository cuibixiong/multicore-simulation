
BASE_ADDR = 0x2400

{	NOP	|	MOVI.H A0, BASE_ADDR	|	NOP	|	MOVI.H A3, BASE_ADDR	|	NOP	}
{	NOP	|	MOVI.H A1, BASE_ADDR	|	NOP	|	MOVI.H A1, BASE_ADDR	|	NOP	}
{	NOP	|	MOVI.H A5, BASE_ADDR	|	NOP	|	MOVI.H A2, BASE_ADDR	|	NOP	}

{	MOVIU R1,2	  |	MOVI.L A0,0x0050	|	NOP	|	MOVI.L A3,0x0070 |	NOP	}
{	MOVIU R2,40	  |	MOVI.L A1,0x00C0	|	NOP	|	LH D0,A3,2+	     |	NOP	}
{	ANDP P2,P0,P0	|	MOVI.L A5,0x0000	|	NOP	|	MOVI.L A1,0x00C0	 |	NOP	}
{	ANDP P4,P0,P0	|	DLW D6,A1,8	      |	NOP	|	MOVI.L A2,0x00C2	 |	NOP	}
{	MOVIU R14,1	|	DLW D4,A0,8	|	DCLR AC0	|	SH D0,A1,0	|	XORP P5,P0,P0	}
_LOOP1:										
{	(P2)B _LOOP1	|	DLW D0,A0,16+	|	NOP	|	NOP	|	NOP	}
{	SUB R1,R1,R14	|	DLW D2,A1,16+	|	NOP	|	DLW D6,A1,8	|	NOP	}
{	SEQ R15,P1,P2,R1,R14	|	DLW D6,A1,8	|	MAC.D AC0,D4,D6	|	DLW D2,A1,16+	|	NOP	}
{	NOP	|	NOP	|	MAC.D AC1,D5,D7	|	(P5)DSNW D6,D7,A2,8	|	NOP	}
{	NOP	|	NOP	|	MAC.D AC0,D0,D2	|	(P5)DSNW D2,D3,A2,16+	|	NOP	}
{	NOP	|	DLW D4,A0,8	|	MAC.D AC1,D1,D3	|	NOP	|	ANDP P5,P0,P0	}
{	(P4)B _LOOP1	|	NOP	|	NOP	|	LH D0,A3,2+	|	NOP	}
{	MOVIU R1,2	  |	MOVI.L A0,0x0050	|	ADD D15,AC0,AC1	|	DSNW D6,D7,A2,8	  |	NOP	}
{	SUB R2,R2,R14	|	MOVI.L A1,0x00C0	|	MERGEA D14,D15	|	DSNW D2,D3,A2,16+	|	NOP	}
{	SEQ R15,P3,P4,R2,R14	|	SH D14,A5,2+	|	NOP	|	MOVI.L A1,0x00C0	|	NOP	}
{	NOP	|	DLW D6,A1,8	|	NOP	|	SH D0,A1,0	|	ADDI AC0,AC0,1	}
{	NOP	|	DLW D4,A0,8	|	DCLR AC0	|	MOVI.L A2,0x00C2	|	XORP P5,P0,P0	}


  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
{	TRAP	|	NOP	|	NOP	|	NOP	|	NOP	}

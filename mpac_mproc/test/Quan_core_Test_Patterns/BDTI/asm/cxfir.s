
BASE_ADDR = 0x2400
  
  {	NOP         |	MOVI.L A0,0x00A0	  |	NOP	|	MOVI.L A0,0x00A0  	|	NOP	} ; add by JH
	{	MOVIU R2,2	|	MOVI.H A0,BASE_ADDR	|	NOP	|	MOVI.H A0,BASE_ADDR	|	NOP	}
	
	{	NOP        	|	MOVI.L A1,0x00C0	  |	NOP	|	MOVI.L A1,0x00C0	  |	NOP	} ; add by JH
	{	MOVIU R3,20	|	MOVI.H A1,BASE_ADDR	|	NOP	|	MOVI.H A1,BASE_ADDR	|	NOP	}
	
	{	NOP	|	MOVI.L A2,0x00E0	  |	NOP	|	MOVI.L A2,0x00E2	  |	NOP	}  ; add by JH
	{	NOP	|	MOVI.H A2,BASE_ADDR	|	NOP	|	MOVI.H A2,BASE_ADDR	|	NOP	}
	
	{	NOP	|	MOVI.L A3,0x0150	  |	NOP	|	MOVI.L A3,0x0152	  |	NOP	}  ; add by JH
	{	NOP	|	MOVI.H A3,BASE_ADDR	|	NOP	|	MOVI.H A3,BASE_ADDR	|	NOP	}
	
  {	NOP	|	MOVI.L A4,0x0000  	|	NOP	|	MOVI.L A4,0x0002	  |	NOP	}  ; add by JH
	{	NOP	|	MOVI.H A4,BASE_ADDR	|	NOP	|	MOVI.H A4,BASE_ADDR	|	NOP	}
	
  {	NOP	|	MOVI.L A5,0x0050	  |	NOP	|	MOVI.L A5,0x0052	  |	NOP	}  ; add by JH
	{	NOP	|	MOVI.H A5,BASE_ADDR	|	NOP	|	MOVI.H A5,BASE_ADDR	|	NOP	}

_REVERSE_COEFFICIENT:											
	{	NOP	|	DLW D0,A0,0	|	NOP	|	DLW D0,A1,8	|	NOP	}
	{	NOP	|	DLW D8,A0,8	|	DCLR D6	|	DLW D8,A1,0	|	DCLR D6	}
	{	NOP	|	DLW D4,A0,16	|	NOP	|	DLW D4,A1,24	|	NOP	}
	{	NOP	|	DLW D10,A0,24	|	PERMH4 D0,D0,D1,3,2,1,0	|	DLW D10,A1,16	|	PERMH4 D0,D0,D1,3,2,1,0	}
	{	NOP	|	DSW D0,D1,A0,24	|	PERMH4 D8,D8,D9,3,2,1,0	|	DSW D0,D1,A1,16	|	PERMH4 D8,D8,D9,3,2,1,0	}
	{	NOP	|	DSW D8,D9,A0,16	|	PERMH4 D4,D4,D5,3,2,1,0	|	DSW D8,D9,A1,24	|	PERMH4 D4,D4,D5,3,2,1,0	}
	{	NOP	|	DSW D4,D5,A0,8	|	PERMH4 D10,D10,D11,3,2,1,0	|	DSW D4,D5,A1,0	|	PERMH4 D10,D10,D11,3,2,1,0	}
	{	NOP	|	DSW D10,D11,A0,0	|	NOP	|	DSW D10,D11,A1,8	|	NOP	}
	{	NOP	|	NOP	|	NOP	|	DSW D6,D7,A2,6	|	NOP	}
INITIAL_COPY_DELAYLINE:											
	{	NOP	|	DSW D6,D7,A2,0	|	NOP	|	SH D6,A2,26	|	NOP	}
	{	NOP	|	DSW D6,D7,A2,8	|	NOP	|	DSW D6,D7,A2,(-2)	|	NOP	}
	{	NOP	|	DSW D6,D7,A2,16	|	NOP	|	SW D6,A2,22	|	NOP	}
	{	NOP	|	SW D6,A2,24	|	NOP	|	DSW D6,D7,A2,14	|	NOP	}
	{	NOP	|	SH D6,A2,28	|	NOP	|	NOP	|	NOP	}
;INITIAL_COPY_DELAYLINE:											
	{	NOP	|	COPY A6,A0	|	NOP	|	COPY A6,A0	|	NOP	}
	{	NOP	|	DLW D0,A0,8+	|	NOP	|	NOP	|	NOP	}
	{	NOP	|	COPY D14,A2	|	NOP	|	DLW D0,A0,8+	|	NOP	}
	{	NOP	|	DLNW D4,A2,8+	|	NOP	|	COPY D14,A2	|	NOP	}
	{	NOP	|	COPY A7,A1	|	NOP	|	DLNW D4,A2,8+	|	NOP	}
	{	NOP	|	DLW D2,A1,8+	|	DCLR AC0	|	COPY D15,A3	|	DCLR AC0	}
	{	NOP	|	COPY D15,A3	|	DCLR AC2	|	DLNW D6,A3,8+	|	DCLR AC2	}
	{	NOP	|	DLNW D6,A3,8+	|	COPY AC6,D14	|	COPY A7,A1	|	COPY AC6,D14	}
	{	NOP	|	NOP	|	COPY AC7,D15	|	DLW D2,A1,8+	|	COPY AC7,D15	}
	{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
_LOOP1:											
	{	NOP	|	DLW D8,A0,8+	|	XMAC.D AC1,D0,D4	|	NOP	|	XMAC.D AC1,D0,D4	}
	{	NOP	|	NOP	|	XMAC.D AC0,D0,D6	|	DLW D8,A0,8+	|	XMAC.D AC0,D2,D4	}
	{	NOP	|	DLNW D12,A2,8+	|	XMSU.D AC1,D2,D6	|	NOP	|	XMSU.D AC1,D2,D6	}
	{	NOP	|	NOP	|	XMAC.D AC0,D2,D4	|	DLNW D12,A2,8+	|	XMAC.D AC0,D0,D6	}
	{	NOP	|	DLW D10,A1,8+	|	XMAC.D AC1,D1,D5	|	NOP	|	XMAC.D AC1,D1,D5	}
	{	NOP	|	NOP	|	XMAC.D AC0,D1,D7	|	DLNW D14,A3,8+	|	XMAC.D AC0,D1,D7	}
	{	NOP	|	DLNW D14,A3,8+	|	XMSU.D AC1,D3,D7	|	NOP	|	XMSU.D AC1,D3,D7	}
	{	NOP	|	NOP	|	XMAC.D AC0,D3,D5	|	DLW D10,A1,8+	|	XMAC.D AC0,D3,D5	}
	{	NOP	|	DLW D0,A0,8+	|	XMAC.D AC1,D8,D12	|	NOP	|	XMAC.D AC1,D8,D12	}
	{	NOP	|	NOP	|	XMAC.D AC0,D8,D14	|	DLW D0,A0,8+	|	XMAC.D AC0,D8,D14	}
	{	LBCB R2, _LOOP1	|	DLNW D4,A2,8+	|	XMSU.D AC1,D10,D14	|	NOP	|	XMSU.D AC1,D10,D14	}
	{	NOP	|	NOP	|	XMAC.D AC0,D10,D12	|	DLNW D4,A2,8+	|	XMAC.D AC0,D10,D12	}
	{	NOP	|	DLW D2,A1,8+	|	XMAC.D AC1,D9,D13	|	NOP	|	XMAC.D AC1,D9,D13	}
	{	NOP	|	NOP	|	XMAC.D AC0,D9,D15	|	DLW D2,A1,8+	|	XMAC.D AC0,D9,D15	}
	{	NOP	|	DLNW D6,A3,8+	|	XMSU.D AC1,D11,D15	|	NOP	|	XMSU.D AC1,D11,D15	}
	{	NOP	|	NOP	|	XMAC.D AC0,D11,D13	|	DLNW D6,A3,8+	|	XMAC.D AC0,D11,D13	}
											
	{	NOP	|	DLW D0,A6,0	|	MERGEA D9,AC1	|	COPY A0,A6	|	MERGEA D9,AC1	}
	{	NOP	|	NOP	|	SRAI D9,D9,3	|	NOP	|	SRAI D9,D9,3	}
	{	NOP	|	SH D9,A4, 4+	|	MERGEA D8,AC0	|	COPY A1,A7	|	MERGEA D8,AC0	}
	{	NOP	|	NOP	|	SRAI D8,D8,3	|	NOP	|	SRAI D8,D8,3	}
	{	NOP	|	ADDI A0,A6,8	|	ADDI AC6,AC6,4	|	SH D9,A4, 4+	|	ADDI AC6,AC6,4	}
	{	NOP	|	SH D8,A5, 4+	|	ADDI AC7,AC7,4	|	NOP	|	ADDI AC7,AC7,4	}
	{	NOP	|	COPY A1,A7	|	COPY D14,AC6	|	DLW D0,A0,8+	|	COPY D14,AC6	}
	{	LBCB R3, _LOOP1	|	DLW D2,A1,8+	|	COPY D15,AC7	|	SH D8,A5, 4+	|	COPY D15,AC7	}
	{	MOVIU R2,2	|	COPY A2,D14	|	NOP	|	DLW D2,A1,8+	|	NOP	}
	{	NOP	|	DLNW D4,A2,8+	|	NOP	|	COPY A2,D14	|	NOP	}
	{	NOP	|	COPY A3,D15	|	NOP	|	DLNW D4,A2,8+	|	NOP	}
	{	NOP	|	DLNW D6,A3,8+	|	NOP	|	COPY A3,D15	|	NOP	}
	{	NOP	|	NOP	|	DCLR AC0	|	DLNW D6,A3,8+	|	DCLR AC0	}
_COPY_DELAYLINE_BACK:		
	{	NOP	|	MOVI.L A0,0x01C0	  |	NOP	|	MOVI.L A0,0x01E0	  |	NOP	}  ; add by JH									
	{	NOP	|	MOVI.H A0,BASE_ADDR	|	NOP	|	MOVI.H A0,BASE_ADDR	|	NOP	}
	{	NOP	|	ADDI A2,A2,(-10)	|	NOP	|	ADDI A3,A3,(-12)	|	NOP	}
	{	NOP	|	DLNW D0,A2,8+	|	NOP	|	NOP	|	NOP	}
	{	NOP	|	DLNW D2,A2,8+	|	NOP	|	NOP	|	NOP	}
	{	NOP	|	DLNW D4,A2,8+	|	NOP	|	NOP	|	NOP	}
	{	NOP	|	DLNW D6,A2,8+	|	NOP	|	NOP	|	NOP	}
	{	NOP	|	NOP	|	NOP	|	DLNW D0,A3,8+	|	NOP	}
	{	NOP	|	NOP	|	NOP	|	DLNW D2,A3,8+	|	NOP	}
	{	NOP	|	NOP	|	NOP	|	DLNW D4,A3,8+	|	NOP	}
	{	NOP	|	NOP	|	NOP	|	DLNW D6,A3,8+	|	NOP	}
	{	NOP	|	DSW D0,D1,A0,0	|	NOP	|	DSW D2,D3,A0,8	|	NOP	}
	{	NOP	|	DSW D2,D3,A0,8	|	NOP	|	DSW D0,D1,A0,0	|	NOP	}
	{	NOP	|	DSW D4,D5,A0,16	|	NOP	|	DSW D6,D7,A0,24	|	NOP	}
	{	NOP	|	DSW D6,D7,A0,24	|	NOP	|	DSW D4,D5,A0,16	|	NOP	}
	
	

  { NOP | NOP | NOP | NOP | NOP }
  { NOP | NOP | NOP | NOP | NOP }  
  { NOP | NOP | NOP | NOP | NOP }
	{	TRAP	|	NOP	|	NOP	|	NOP	|	NOP	}

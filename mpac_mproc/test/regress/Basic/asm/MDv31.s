
BASE_ADDR = 0x2400

; Single Saturation Mode
{	NOP	|	MOVI.L LS_PSR, 0x0004	|	MOVI.L AU_PSR, 0x0004	|	MOVI.L LS_PSR, 0x0004	|	MOVI.L AU_PSR, 0x0004	}
{	NOP	|	MOVI.L AMCR, 0x0000	|	NOP	|	MOVI.L AMCR, 0x0000	|	NOP	}

{	NOP	|	MOVI.L A0, 0x0000	   |	NOP	|	MOVI.L A0, 0x8000 	 |	NOP	}
{	NOP	|	MOVI.H A0, BASE_ADDR |	NOP	|	MOVI.H A0, BASE_ADDR |	NOP	}

{	MOVI R0, 0x11111111	|	MOVI D0, 0x11111111	|	MOVI D8, 0x11111111	|	MOVI D0, 0x11111111	|	MOVI D8, 0x11111111	}
{	MOVI R1, 0x22222222	|	MOVI D1, 0x22222222	|	MOVI D9, 0x22222222	|	MOVI D1, 0x22222222	|	MOVI D9, 0x22222222	}
{	MOVI R2, 0x33333333	|	MOVI D2, 0x33333333	|	MOVI D10, 0x33333333	|	MOVI D2, 0x33333333	|	MOVI D10, 0x33333333	}
{	MOVI R3, 0x44444444	|	MOVI D3, 0x44444444	|	MOVI D11, 0x44444444	|	MOVI D3, 0x44444444	|	MOVI D11, 0x44444444	}
{	MOVI R4, 0x55555555	|	MOVI D4, 0x55555555	|	MOVI D12, 0x55555555	|	MOVI D4, 0x55555555	|	MOVI D12, 0x55555555	}
{	MOVI R5, 0x66666666	|	MOVI D5, 0x66666666	|	MOVI D13, 0x66666666	|	MOVI D5, 0x66666666	|	MOVI D13, 0x66666666	}
{	MOVI R6, 0x77777777	|	MOVI D6, 0x77777777	|	MOVI D14, 0x77777777	|	MOVI D6, 0x77777777	|	MOVI D14, 0x77777777	}
{	MOVI R7, 0x88888888	|	MOVI D7, 0x88888888	|	MOVI D15, 0x88888888	|	MOVI D7, 0x88888888	|	MOVI D15, 0x88888888	}
{	NOP	|	ADD D1, D0, D2	|	ADD D9, D8, D10	|	ADD D1, D0, D2	|	ADD D9, D8, D10	}
; D1 = 0x11111111 + 0x33333333 = 0x44444444
; D9 = 0x11111111 + 0x33333333 = 0x44444444
{	NOP	|	ADD D7, D0, D1	|	ADD D15, D8, D9	|	ADD D7, D0, D1	|	ADD D15, D8, D9	}
; D7 = 0x11111111 + 0x22222222 = 0x33333333
; D15 = 0x11111111 + 0x22222222 = 0x33333333
{	NOP	|	ADD.D D3, D0, D1	|	ADD.D D11, D8, D9	|	ADD.D D3, D0, D1	|	ADD.D D11, D8, D9	}
; D3 = 0x11111111 + 0x44444444 = 0x55555555
; D11 = 0x11111111 + 0x44444444 = 0x55555555
{	NOP	|	ADD.Q D4, D0, D3	|	ADD.Q D12, D8, D11	|	ADD.Q D4, D0, D3	|	ADD.Q D12, D8, D11	}
; D4 = 0x11111111 + 0x55555555 = 0x66666666
; D12 = 0x11111111 + 0x55555555 = 0x66666666
{	NOP	|	SUB D5, D4, D0	|	SUB D13, D12, D8	|	SUB D5, D4, D0	|	SUB D13, D12, D8	}
; D5 = 0x66666666 - 0x11111111 = 0x55555555
; D13 = 0x66666666 - 0x11111111 = 0x55555555
{	NOP	|	SUB D6, D5, D0	|	SUB D14, D13, D8	|	SUB D6, D5, D0	|	SUB D14, D13, D8	}
; D6 = 0x66666666 - 0x11111111 = 0x55555555
; D14 = 0x66666666 - 0x11111111 = 0x55555555
{	NOP	|	SW D0, A0, 0	|	NOP	|	SW D0, A0, 0	|	NOP	}
; Mem[0x1E000000] = 0x11111111
; Mem[0x1E008000] = 0x11111111
{	NOP	|	SW D1, A0, 4	|	NOP	|	SW D1, A0, 4	|	NOP	}
; Mem[0x1E000004] = 0x44444444
; Mem[0x1E008004] = 0x44444444
{	NOP	|	SW D2, A0, 8	|	NOP	|	SW D2, A0, 8	|	NOP	}
; Mem[0x1E000008] = 0x33333333
; Mem[0x1E008008] = 0x33333333
{	NOP	|	SW D3, A0, 12	|	NOP	|	SW D3, A0, 12	|	NOP	}
; Mem[0x1E00000C] = 0x55555555
; Mem[0x1E00800C] = 0x55555555
{	NOP	|	SW D4, A0, 16	|	NOP	|	SW D4, A0, 16	|	NOP	}
; Mem[0x1E000010] = 0x66666666
; Mem[0x1E008010] = 0x66666666
{	NOP	|	SW D5, A0, 20	|	NOP	|	SW D5, A0, 20	|	NOP	}
; Mem[0x1E000014] = 0x55555555
; Mem[0x1E008014] = 0x55555555
{	NOP	|	SW D6, A0, 24	|	NOP	|	SW D6, A0, 24	|	NOP	}
; Mem[0x1E000018] = 0x55555555
; Mem[0x1E008018] = 0x55555555
{	NOP	|	SW D7, A0, 28	|	NOP	|	SW D7, A0, 28	|	NOP	}
; Mem[0x1E00001C] = 0x33333333
; Mem[0x1E00801C] = 0x33333333
{	NOP	|	SW D8, A0, 32	|	NOP	|	SW D8, A0, 32	|	NOP	}
; Mem[0x1E000020] = 0x11111111
; Mem[0x1E008020] = 0x11111111
{	NOP	|	SW D9, A0, 36	|	NOP	|	SW D9, A0, 36	|	NOP	}
; Mem[0x1E000024] = 0x44444444
; Mem[0x1E008024] = 0x44444444
{	NOP	|	SW D10, A0, 40	|	NOP	|	SW D10, A0, 40	|	NOP	}
; Mem[0x1E000028] = 0x33333333
; Mem[0x1E008028] = 0x33333333
{	NOP	|	SW D11, A0, 44	|	NOP	|	SW D11, A0, 44	|	NOP	}
; Mem[0x1E00002C] = 0x55555555
; Mem[0x1E00802C] = 0x55555555
{	NOP	|	SW D12, A0, 48	|	NOP	|	SW D12, A0, 48	|	NOP	}
; Mem[0x1E000030] = 0x66666666
; Mem[0x1E008030] = 0x66666666
{	NOP	|	SW D13, A0, 52	|	NOP	|	SW D13, A0, 52	|	NOP	}
; Mem[0x1E000034] = 0x55555555
; Mem[0x1E008034] = 0x55555555
{	NOP	|	SW D14, A0, 56	|	NOP	|	SW D14, A0, 56	|	NOP	}
; Mem[0x1E000038] = 0x55555555
; Mem[0x1E008038] = 0x55555555
{	NOP	|	SW D15, A0, 60	|	NOP	|	SW D15, A0, 60	|	NOP	}
; Mem[0x1E00003C] = 0x33333333
; Mem[0x1E00803C] = 0x33333333

; Dual Saturation Mode
{	NOP	|	MOVI.L LS_PSR, 0x0008	|	MOVI.L AU_PSR, 0x0008	|	MOVI.L LS_PSR, 0x0008	|	MOVI.L AU_PSR, 0x0008	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	ADD D1, D0, D2	|	ADD D9, D8, D10	|	ADD D1, D0, D2	|	ADD D9, D8, D10	}
; D1 = 0x11111111 + 0x33333333 = 0x44444444
; D9 = 0x11111111 + 0x33333333 = 0x44444444
{	NOP	|	ADD D7, D0, D1	|	ADD D15, D8, D9	|	ADD D7, D0, D1	|	ADD D15, D8, D9	}
; D7 = 0x11111111 + 0x44444444 = 0x55555555
; D15 = 0x11111111 + 0x44444444 = 0x55555555
{	NOP	|	ADD.D D3, D0, D2	|	ADD.D D11, D8, D10	|	ADD.D D3, D0, D2	|	ADD.D D11, D8, D10	}
; D3 = 0x11111111 + 0x33333333 = 0x44444444
; D11 = 0x11111111 + 0x33333333 = 0x44444444
{	NOP	|	ADD.Q D4, D0, D3	|	ADD.Q D12, D8, D11	|	ADD.Q D4, D0, D3	|	ADD.Q D12, D8, D11	}
; D4 = 0x11111111 + 0x55555555 = 0x66666666
; D12 = 0x11111111 + 0x55555555 = 0x66666666
{	NOP	|	SUB D5, D4, D0	|	SUB D13, D12, D8	|	SUB D5, D4, D0	|	SUB D13, D12, D8	}
; D5 = 0x66666666 - 0x11111111 = 0x55555555
; D13 = 0x66666666 - 0x11111111 = 0x55555555
{	NOP	|	SUB D6, D5, D0	|	SUB D14, D13, D8	|	SUB D6, D5, D0	|	SUB D14, D13, D8	}
; D6 = 0x55555555 - 0x11111111 = 0x44444444
; D14 = 0x55555555 - 0x11111111 = 0x44444444
{	NOP	|	SW D0, A0, 64	|	NOP	|	SW D0, A0, 64	|	NOP	}
; Mem[0x1E000040] = 0x11111111
; Mem[0x1E008040] = 0x11111111
{	NOP	|	SW D1, A0, 68	|	NOP	|	SW D1, A0, 68	|	NOP	}
; Mem[0x1E000044] = 0x44444444
; Mem[0x1E008044] = 0x44444444
{	NOP	|	SW D2, A0, 72	|	NOP	|	SW D2, A0, 72	|	NOP	}
; Mem[0x1E000048] = 0x33333333
; Mem[0x1E008048] = 0x33333333
{	NOP	|	SW D3, A0, 76	|	NOP	|	SW D3, A0, 76	|	NOP	}
; Mem[0x1E00004C] = 0x44444444
; Mem[0x1E00804C] = 0x44444444
{	NOP	|	SW D4, A0, 80	|	NOP	|	SW D4, A0, 80	|	NOP	}
; Mem[0x1E000050] = 0x66666666
; Mem[0x1E008050] = 0x66666666
{	NOP	|	SW D5, A0, 84	|	NOP	|	SW D5, A0, 84	|	NOP	}
; Mem[0x1E000054] = 0x55555555
; Mem[0x1E008054] = 0x55555555
{	NOP	|	SW D6, A0, 88	|	NOP	|	SW D6, A0, 88	|	NOP	}
; Mem[0x1E000058] = 0x44444444
; Mem[0x1E008058] = 0x44444444
{	NOP	|	SW D7, A0, 92	|	NOP	|	SW D7, A0, 92	|	NOP	}
; Mem[0x1E00005C] = 0x55555555
; Mem[0x1E00805C] = 0x55555555
{	NOP	|	SW D8, A0, 96	|	NOP	|	SW D8, A0, 96	|	NOP	}
; Mem[0x1E000060] = 0x11111111
; Mem[0x1E008060] = 0x11111111
{	NOP	|	SW D9, A0, 100	|	NOP	|	SW D9, A0, 100	|	NOP	}
; Mem[0x1E000064] = 0x44444444
; Mem[0x1E008064] = 0x44444444
{	NOP	|	SW D10, A0, 104	|	NOP	|	SW D10, A0, 104	|	NOP	}
; Mem[0x1E000068] = 0x33333333
; Mem[0x1E008068] = 0x33333333
{	NOP	|	SW D11, A0, 108	|	NOP	|	SW D11, A0, 108	|	NOP	}
; Mem[0x1E00006C] = 0x44444444
; Mem[0x1E00806C] = 0x44444444
{	NOP	|	SW D12, A0, 112	|	NOP	|	SW D12, A0, 112	|	NOP	}
; Mem[0x1E000070] = 0x66666666
; Mem[0x1E008070] = 0x66666666
{	NOP	|	SW D13, A0, 116	|	NOP	|	SW D13, A0, 116	|	NOP	}
; Mem[0x1E000074] = 0x55555555
; Mem[0x1E008074] = 0x55555555
{	NOP	|	SW D14, A0, 120	|	NOP	|	SW D14, A0, 120	|	NOP	}
; Mem[0x1E000078] = 0x44444444
; Mem[0x1E008078] = 0x44444444
{	NOP	|	SW D15, A0, 124	|	NOP	|	SW D15, A0, 124	|	NOP	}
; Mem[0x1E00007C] = 0x55555555
; Mem[0x1E00807C] = 0x55555555

; Quad Saturation Mode
{	NOP	|	MOVI.L LS_PSR, 0x0010	|	MOVI.L AU_PSR, 0x0010	|	MOVI.L LS_PSR, 0x0010	|	MOVI.L AU_PSR, 0x0010	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	ADD D1, D0, D2	|	ADD D9, D8, D10	|	ADD D1, D0, D2	|	ADD D9, D8, D10	}
; D1 = 0x11111111 + 0x33333333 = 0x44444444
; D9 = 0x11111111 + 0x33333333 = 0x44444444
{	NOP	|	ADD D7, D0, D1	|	ADD D15, D8, D9	|	ADD D7, D0, D1	|	ADD D15, D8, D9	}
; D7 = 0x11111111 + 0x44444444 = 0x55555555
; D15 = 0x11111111 + 0x44444444 = 0x55555555
{	NOP	|	ADD.D D3, D0, D2	|	ADD.D D11, D8, D10	|	ADD.D D3, D0, D2	|	ADD.D D11, D8, D10	}
; D3 = 0x11111111 + 0x33333333 = 0x44444444
; D11 = 0x11111111 + 0x33333333 = 0x44444444
{	NOP	|	ADD.Q D4, D0, D3	|	ADD.Q D12, D8, D11	|	ADD.Q D4, D0, D3	|	ADD.Q D12, D8, D11	}
; D4 = 0x11111111 + 0x44444444 = 0x55555555
; D12 = 0x11111111 + 0x44444444 = 0x55555555
{	NOP	|	SUB D5, D4, D0	|	SUB D13, D12, D8	|	SUB D5, D4, D0	|	SUB D13, D12, D8	}
; D5 = 0x66666666 - 0x11111111 = 0x55555555
; D13 = 0x66666666 - 0x11111111 = 0x55555555
; LS_PSR = 0x12
; AU_PSR = 0x12
{	NOP	|	SUB D6, D5, D0	|	SUB D14, D13, D8	|	SUB D6, D5, D0	|	SUB D14, D13, D8	}
; D6 = 0x55555555 - 0x11111111 = 0x44444444
; D14 = 0x55555555 - 0x11111111 = 0x44444444
; LS_PSR = 0x12
; AU_PSR = 0x12
{	NOP	|	SW D0, A0, 128	|	NOP	|	SW D0, A0, 128	|	NOP	}
; Mem[0x1E000080] = 0x11111111
; Mem[0x1E008080] = 0x11111111
{	NOP	|	SW D1, A0, 132	|	NOP	|	SW D1, A0, 132	|	NOP	}
; Mem[0x1E000084] = 0x44444444
; Mem[0x1E008084] = 0x44444444
{	NOP	|	SW D2, A0, 136	|	NOP	|	SW D2, A0, 136	|	NOP	}
; Mem[0x1E000088] = 0x33333333
; Mem[0x1E008088] = 0x33333333
{	NOP	|	SW D3, A0, 140	|	NOP	|	SW D3, A0, 140	|	NOP	}
; Mem[0x1E00008C] = 0x44444444
; Mem[0x1E00808C] = 0x44444444
{	NOP	|	SW D4, A0, 144	|	NOP	|	SW D4, A0, 144	|	NOP	}
; Mem[0x1E000090] = 0x55555555
; Mem[0x1E008090] = 0x55555555
{	NOP	|	SW D5, A0, 148	|	NOP	|	SW D5, A0, 148	|	NOP	}
; Mem[0x1E000094] = 0x55555555
; Mem[0x1E008094] = 0x55555555
{	NOP	|	SW D6, A0, 152	|	NOP	|	SW D6, A0, 152	|	NOP	}
; Mem[0x1E000098] = 0x44444444
; Mem[0x1E008098] = 0x44444444
{	NOP	|	SW D7, A0, 156	|	NOP	|	SW D7, A0, 156	|	NOP	}
; Mem[0x1E00009C] = 0x55555555
; Mem[0x1E00809C] = 0x55555555
{	NOP	|	SW D8, A0, 160	|	NOP	|	SW D8, A0, 160	|	NOP	}
; Mem[0x1E0000A0] = 0x11111111
; Mem[0x1E0080A0] = 0x11111111
{	NOP	|	SW D9, A0, 164	|	NOP	|	SW D9, A0, 164	|	NOP	}
; Mem[0x1E0000A4] = 0x44444444
; Mem[0x1E0080A4] = 0x44444444
{	NOP	|	SW D10, A0, 168	|	NOP	|	SW D10, A0, 168	|	NOP	}
; Mem[0x1E0000A8] = 0x33333333
; Mem[0x1E0080A8] = 0x33333333
{	NOP	|	SW D11, A0, 172	|	NOP	|	SW D11, A0, 172	|	NOP	}
; Mem[0x1E0000AC] = 0x44444444
; Mem[0x1E0080AC] = 0x44444444
{	NOP	|	SW D12, A0, 176	|	NOP	|	SW D12, A0, 176	|	NOP	}
; Mem[0x1E0000B0] = 0x55555555
; Mem[0x1E0080B0] = 0x55555555
{	NOP	|	SW D13, A0, 180	|	NOP	|	SW D13, A0, 180	|	NOP	}
; Mem[0x1E0000B4] = 0x55555555
; Mem[0x1E0080B4] = 0x55555555
{	NOP	|	SW D14, A0, 184	|	NOP	|	SW D14, A0, 184	|	NOP	}
; Mem[0x1E0000B8] = 0x44444444
; Mem[0x1E0080B8] = 0x44444444
{	NOP	|	SW D15, A0, 188	|	NOP	|	SW D15, A0, 188	|	NOP	}
; Mem[0x1E0000BC] = 0x55555555
; Mem[0x1E0080BC] = 0x55555555

; SFRA.D Write Overflow
{	NOP	|	MOVI.L LS_PSR, 0x0000	|	MOVI.L AU_PSR, 0x0000	|	MOVI.L LS_PSR, 0x0000	|	MOVI.L AU_PSR, 0x0000	}
{	NOP	|	NOP	|	MOVI D1, 0x00020002	|	NOP	|	MOVI D1, 0x00020002	}
{	NOP	|	NOP	|	MOVI D7, 0x7FFF7FFF	|	NOP	|	MOVI D7, 0x7FFF7FFF	}
{	NOP	|	NOP	|	MOVI AC0, 0x11111111	|	NOP	|	MOVI AC0, 0x11111111	}
{	NOP	|	NOP	|	SFRA.D D7, D1, 1	|	NOP	|	SFRA.D D7, D1, 1	}
; D7 = 0x00010001 + 0x7FFF7FFF = 0x80008000
; AU_PSR = 0x3
{	NOP	|	NOP	|	ABS AC1, AC0	|	NOP	|	ABS AC1, AC0	}
; AC1 = 0x11111111
; AU_PSR = 0x3 (unchanged)
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	COPY D6, AU_PSR	|	NOP	|	COPY D6, AU_PSR	}
; D6 = 0x00000003
{	NOP	|	SW D6, A0, 192	|	NOP	|	SW D6, A0, 192	|	NOP	}
; Mem[0x1E0000C0] = 0x00000003
; Mem[0x1E0080C0] = 0x00000003
{	NOP	|	SW D7, A0, 196	|	NOP	|	SW D7, A0, 196	|	NOP	}
; Mem[0x1E0000C4] = 0x80008000
; Mem[0x1E0080C4] = 0x80008000

; (Zero x Negative value)'s Overflow Detection
{	NOP	|	NOP	|	MOVI D1, 0x00000000	|	NOP	|	MOVI D1, 0x00000000	}
{	NOP	|	NOP	|	MUL.D D6, D1, D7	|	NOP	|	MUL.D D6, D1, D7	}
; D6 = 0x00000000
; AU_PSR = 0x2
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	COPY D15, AU_PSR	|	NOP	|	COPY D15, AU_PSR	}
; D15 = 0x00000002
{	NOP	|	SW D6, A0, 200	|	NOP	|	SW D6, A0, 200	|	NOP	}
; Mem[0x1E0000C8] = 0x00000000
; Mem[0x1E0080C8] = 0x00000000
{	NOP	|	SW D15, A0, 204	|	NOP	|	SW D15, A0, 204	|	NOP	}
; Mem[0x1E0000CC] = 0x00000002
; Mem[0x1E0080CC] = 0x00000002

{	NOP	|	MOVI.L CP0, 0x0000	|	MOVI.L CP1, 0x0019 	|	MOVI.L CP0, 0x0000	|	MOVI.L CP1, 0x0019	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	COPY [CP0], CP1	|	NOP	|	COPY [CP0], CP1	|	NOP	}
; C0 = 0x00000019
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	SW [CP0], A0, 208	|	NOP	|	SW [CP0], A0, 208	|	NOP	}
; Mem[0x1E0000D0] = 0x00000019
; Mem[0x1E0080D0] = 0x00000019

{	NOP	|	LW LS_PSR, A0, 0	|	NOP	|	LW LS_PSR, A0, 0	|	NOP	}
; LS_PSR = 0x11
{	NOP	|	LW AU_PSR, A0, 4	|	NOP	|	LW AU_PSR, A0, 4	|	NOP	}
; AU_PSR = 0x44
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	NOP	|	NOP	|	NOP	|	NOP	}
{	NOP	|	COPY D6, LS_PSR	|	COPY D15, AU_PSR	|	COPY D6, LS_PSR	|	COPY D15, AU_PSR	}
; D6 = 0x00000011
; D15 = 0x00000044
{	NOP	|	SW D6, A0, 212	|	NOP	|	SW D6, A0, 212	|	NOP	}
; Mem[0x1E0000D4] = 0x00000011
; Mem[0x1E0080D4] = 0x00000011
{	NOP	|	SW D15, A0, 216	|	NOP	|	SW D15, A0, 216	|	NOP	}
; Mem[0x1E0000D8] = 0x00000044
; Mem[0x1E0080D8] = 0x00000044

{	BDR R3	|	BDT D8	|	NOP	|	NOP	|	NOP	}
; R3 = 0x11111111
{	ADD R8, R0, R3	|	NOP	|	NOP	|	NOP	|	NOP	}
; R8 = 0x11111111 + 0x44444444 = 0x55555555
{	SUB R9, R1, R3	|	NOP	|	NOP	|	NOP	|	NOP	}
; R9 = 0x22222222 - 0x11111111 = 0x11111111
{	BDT R8	|	BDR D8	|	NOP	|	BDR D8	|	NOP	}
; D8 = 0x55555555
{	BDT R9	|	BDR D9	|	NOP	|	BDR D9	|	NOP	}
; D9 = 0x11111111
{	NOP	|	SW D8, A0, 220	|	NOP	|	SW D8, A0, 220	|	NOP	}
; Mem[0x1E0000DC] = 0x55555555
; Mem[0x1E0080DC] = 0x55555555
{	NOP	|	SW D9, A0, 224	|	NOP	|	SW D9, A0, 224	|	NOP	}
; Mem[0x1E0000E0] = 0x11111111
; Mem[0x1E0080E0] = 0x11111111


  
{	TRAP	|	NOP	|	NOP	|	NOP	|	NOP	}

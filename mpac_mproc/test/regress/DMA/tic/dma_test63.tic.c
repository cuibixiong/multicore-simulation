A(0x25000000); W(0x00000000);
A(0x25000004); W(0x00000000);
A(0x25000008); W(0x00000000);
A(0x2500000C); W(0x00000000);
A(0x25000010); W(0x00000000);
A(0x25000014); W(0x00000000);
A(0x25000018); W(0x00000000);

/* Parameter 1 */
A(0x25000020); W(0x00000000);
A(0x25000024); W(0x00000000);
A(0x25000028); W(0x00000000);
A(0x2500002C); W(0x00000000);
A(0x25000030); W(0x00000000);
/* Result check */
/* Parameter 0 */
A(0x25000000); R(0x03020100);
A(0x25000004); R(0x09060504);
A(0x25000008); R(0x0D0C0B0A);
A(0x2500000C); R(0x13120F0E);
A(0x25000010); R(0x17161514);
A(0x25000014); R(0x1D1C1B18);
A(0x25000018); R(0x0000001E);

/* Parameter 1 */
A(0x25000020); R(0x29282726);
A(0x25000024); R(0x2D2C2B2A);
A(0x25000028); R(0x34333231);
A(0x2500002C); R(0x38373635);
A(0x25000030); R(0x3F3E3D3C);

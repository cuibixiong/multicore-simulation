/* Result check */
A(0x24000000); R(0x5A5A5A5A,NO_Mask);
A0(0x00000004); R0(0x00000001,NO_Mask);
A(0x24000008); R(0x00000002,NO_Mask);
A(0x2400000C); R(0x00000000,NO_Mask);
A(0x24000010); R(0x00000001,NO_Mask);
A(0x24000014); R(0x22222222,NO_Mask);
A(0x24000018); R(0x44444444,NO_Mask);
A(0x2400001C); R(0x88888888,NO_Mask);
A(0x24000020); R(0x11111110,NO_Mask);
A(0x24000024); R(0x24000000,NO_Mask);  //modify by JH, 0x0800->0x2400
A(0x24000028); R(0x00000000,NO_Mask);
A(0x2400002C); R(0x00000000,NO_Mask);
A(0x24000030); R(0x00000001,NO_Mask);
A(0x24000034); R(0x5A5A5A5A,NO_Mask);
A(0x24000038); R(0xA5A5A5A5,NO_Mask);
A0(0x2400003C); R0(0x00000035,NO_Mask);
A0(0x00000040); R0(0x00000005,NO_Mask);

  /* Initial DATA */
A(0x25820070); W(0x12345555);
A(0x258200B4); W(0x12345555);
A(0x258200F0); W(0x12345555);
A(0x25820134); W(0x12345555);
A(0x25820170); W(0x12345555);
A(0x258201B4); W(0x12345555);
A(0x258201F0); W(0x12345555);
A(0x25820234); W(0x12345555);

A(0x25830000); W(0x00000001);
A(0x25830010); W(0x00000001);
A(0x25830020); W(0x00000001);
A(0x25830030); W(0x00000001);
A(0x25830040); W(0x00000001);
A(0x25830050); W(0x00000001);
A(0x25830060); W(0x00000001);
A(0x25830070); W(0x00000001);

  /* Result check */
A(0x24000000); R(0x12345555,NO_Mask);
A(0x24000004); R(0x12345555,NO_Mask);
A(0x24000008); R(0x12345555,NO_Mask);
A(0x2400000C); R(0x12345555,NO_Mask);
A(0x24000010); R(0x12345555,NO_Mask);
A(0x24000014); R(0x12345555,NO_Mask);
A(0x24000018); R(0x12345555,NO_Mask);
A(0x2400001C); R(0x12345555,NO_Mask);

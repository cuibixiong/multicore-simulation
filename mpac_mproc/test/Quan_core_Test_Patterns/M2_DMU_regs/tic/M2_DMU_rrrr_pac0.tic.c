core0begin
A(0x25810000); W(0x12345678,NO_Mask);
A(0x25810020); W(0xFEDCBA98,NO_Mask);
A(0x25810024); W(0x134132F7,NO_Mask);

\\Verification;
A(0x24000000); R(0x12345678);
A(0x24000020); R(0x0);
A(0x24000024); R(0x0);
core0end
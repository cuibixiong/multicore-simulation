core2begin
\\Write data to M2 register;
\\channel 4
A(0x25820170); W(0x3005D000,NO_Mask);
A(0x25820174); W(0x2500C200,NO_Mask);
A(0x25820178); W(0x24413411,NO_Mask);
A(0x2582017C); W(0x5343fda3,NO_Mask);
A(0x25820180); W(0x3311fda1,NO_Mask);
A(0x2582018C); W(0x4341444a,NO_Mask);
A(0x25820190); W(0x211aaffc,NO_Mask);
\\channel 3
A(0x25820130); W(0x30046000,NO_Mask);
A(0x25820134); W(0x25005800,NO_Mask);
A(0x25820138); W(0x4444dfa1,NO_Mask);
A(0x2582013C); W(0x88813413,NO_Mask);
A(0x25820140); W(0x22ddc991,NO_Mask);
A(0x2582014C); W(0xcc110014,NO_Mask);
A(0x25820150); W(0x5666ccd0,NO_Mask);
\\Verification;
\\channel 4
A(0x25000170); R(0x3005D000);
A(0x25000174); R(0x2500C200);
A(0x25000178); R(0x24413411);
A(0x2500017C); R(0x5343fda3);
A(0x25000180); R(0x3311fda1);
A(0x2500018C); R(0x4341444a);
A(0x25000190); R(0x211aaffc);
\\channel 3
A(0x25020130); R(0x30046000);
A(0x25020134); R(0x25005800);
A(0x25020138); R(0x4444dfa1);
A(0x2502013C); R(0x88813413);
A(0x25020140); R(0x22ddc991);
A(0x2502014C); R(0xcc110014);
A(0x25020150); R(0x5666ccd0);
core2end

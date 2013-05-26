core3begin
\\Initial 25005000 for polling
A(0x25005000); W(0x12121212);

\\Write data to M2 register;
\\channel 5
A(0x258201B0); W(0x3008C000,NO_Mask);
A(0x258201B4); W(0x25008F00,NO_Mask);
A(0x258201B8); W(0x11114000,NO_Mask);
A(0x258201BC); W(0x24111111,NO_Mask);
A(0x258201C0); W(0x98134444,NO_Mask);
A(0x258201CC); W(0x2fcc1131,NO_Mask);
A(0x258201D0); W(0x24199811,NO_Mask);
\\channel 3
A(0x25820130); W(0x300c8000,NO_Mask);
A(0x25820134); W(0x25002A00,NO_Mask);
A(0x25820138); W(0x41341444,NO_Mask);
A(0x2582013C); W(0x24413ffc,NO_Mask);
A(0x25820140); W(0x333ccffc,NO_Mask);
A(0x2582014C); W(0x13888144,NO_Mask);
A(0x25820150); W(0x41399911,NO_Mask);
\\Verification;
\\channel 5
A(0x250101B0); R(0x3008C000);
A(0x250101B4); R(0x25008F00);
A(0x250101B8); R(0x11114000);
A(0x250101BC); R(0x24111111);
A(0x250101C0); R(0x98134444);
A(0x250101CC); R(0x2fcc1131);
A(0x250101D0); R(0x24199811);
\\channel 3
A(0x25020130); R(0x300c8000);
A(0x25020134); R(0x25002A00);
A(0x25020138); R(0x41341444);
A(0x2502013C); R(0x24413ffc);
A(0x25020140); R(0x333ccffc);
A(0x2502014C); R(0x13888144);
A(0x25020150); R(0x41399911);
core3end
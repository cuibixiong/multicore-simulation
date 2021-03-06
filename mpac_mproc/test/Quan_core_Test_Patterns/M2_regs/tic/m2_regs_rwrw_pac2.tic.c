core2begin
\\Write data to M2 register;
\\channel 1
A(0x258200B0); W(0x300C1000,NO_Mask);
A(0x258200B4); W(0x25003500,NO_Mask);
A(0x258200B8); W(0x1341ffff,NO_Mask);
A(0x258200BC); W(0x3444dfaa,NO_Mask);
A(0x258200C0); W(0x1244fffa,NO_Mask);
A(0x258200CC); W(0x41341444,NO_Mask);
A(0x258200D0); W(0x3144f222,NO_Mask);
\\channel 6
A(0x258201F0); W(0x30088000,NO_Mask);
A(0x258201F4); W(0x2500A200,NO_Mask);
A(0x258201F8); W(0x413424fc,NO_Mask);
A(0x258201FC); W(0x13413ffa,NO_Mask);
A(0x25820200); W(0x241fcca1,NO_Mask);
A(0x2582020C); W(0x31444f11,NO_Mask);
A(0x25820210); W(0x24143111,NO_Mask);
\\Verification;
\\channel 1
A(0x250100B0); R(0x300C1000);
A(0x250100B4); R(0x25003500);
A(0x250100B8); R(0x1341ffff);
A(0x250100BC); R(0x3444dfaa);
A(0x250100C0); R(0x1244fffa);
A(0x250100CC); R(0x41341444);
A(0x250100D0); R(0x3144f222);
\\channel 6
A(0x250201F0); R(0x30088000);
A(0x250201F4); R(0x2500A200);
A(0x250201F8); R(0x413424fc);
A(0x250201FC); R(0x13413ffa);
A(0x25020200); R(0x241fcca1);
A(0x2502020C); R(0x31444f11);
A(0x25020210); R(0x24143111);
core2end

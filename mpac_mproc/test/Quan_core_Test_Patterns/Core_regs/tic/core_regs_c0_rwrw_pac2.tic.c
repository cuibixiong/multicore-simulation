core2begin
A(0x24050068); W(0x00000001,NO_Mask);
A(0x24050070); W(0x73134934,NO_Mask);  
A(0x24050078); W(0x28934163,NO_Mask);  

//Verification;
A(0x24000068); R(0x00000001);
A(0x24000070); R(0x73134934); 
A(0x24000078); R(0x28934163);  
core2end

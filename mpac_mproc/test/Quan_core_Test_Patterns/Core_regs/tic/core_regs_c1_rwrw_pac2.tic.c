core2begin
A(0x24150068); W(0x00000001,NO_Mask);
A(0x24150070); W(0x73134934,NO_Mask);  
A(0x24150078); W(0x28934163,NO_Mask);  

//Verification;
A(0x24100068); R(0x00000001);
A(0x24100070); R(0x73134934); 
A(0x24100078); R(0x28934163);  
core2end

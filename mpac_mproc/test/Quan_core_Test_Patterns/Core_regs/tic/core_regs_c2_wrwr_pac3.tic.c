core3begin
//Write data to 25005000 to polling.
A(0x25005000); W(0x12121212);

//Write 00000005,00000009 to avoid to enable timer;
A(0x24250074); W(0x00000005,NO_Mask);  
A(0x2425007C); W(0x00000009,NO_Mask); 

//Verification;
A(0x24200074); R(0x00000000); 
A(0x2420007C); R(0x00000000); 
core3end

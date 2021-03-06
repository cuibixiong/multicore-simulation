core2begin
\\Write data to M2 Memory;
A(0x250032C0); W(0x3005F001,NO_Mask);
A(0x250032C4); W(0x3005F01A,NO_Mask);
A(0x250032C8); W(0x3005F000,NO_Mask);
A(0x250032CC); W(0x3005F01A,NO_Mask);
A(0x25003280); W(0x3005F000,NO_Mask);
A(0x25003284); W(0x3005F01A,NO_Mask);
A(0x25003288); W(0x3005F000,NO_Mask);
A(0x2500328C); W(0x3005F01A,NO_Mask);
A(0x250032F0); W(0x3005F000,NO_Mask);
A(0x250032F4); W(0x3005F01A,NO_Mask);
A(0x250032F8); W(0x3005F000,NO_Mask);
A(0x250032FC); W(0x3005F01A,NO_Mask);
A(0x250032A0); W(0x3005F000,NO_Mask);
A(0x250032A4); W(0x3005F01A,NO_Mask);
A(0x250032A8); W(0x3005F000,NO_Mask);
A(0x250032AC); W(0x3005F01A,NO_Mask);

\\Verification;
\\Read data from M2 Memory;
A(0x242012C0); R(0x3005F001);
A(0x242012C4); R(0x3005F01A);
A(0x242012C8); R(0x3005F000);
A(0x242012CC); R(0x3005F01A);
A(0x24201280); R(0x3005F000);
A(0x24201284); R(0x3005F01A);
A(0x24201288); R(0x3005F000);
A(0x2420128C); R(0x3005F01A);
A(0x242012F0); R(0x3005F000);
A(0x242012F4); R(0x3005F01A);
A(0x242012F8); R(0x3005F000);
A(0x242012FC); R(0x3005F01A);
A(0x242012A0); R(0x3005F000);
A(0x242012A4); R(0x3005F01A);
A(0x242012A8); R(0x3005F000);
A(0x242012AC); R(0x3005F01A);

//M1_Chroma_result    
//No.1 Chroma 4x2MB 
A(0x24201000); R(0x11223344);
A(0x24201004); R(0x55556666);
//No.2 Chroma 4x2MB 
A(0x24201008); R(0x99995555);
A(0x2420100C); R(0x77886655);
//No.3 Chroma 4x2MB 
A(0x24201010); R(0x11112222);
A(0x24201014); R(0x33334444);
//No.4 Chroma 4x2MB 
A(0x24201018); R(0x55557777);
A(0x2420101C); R(0x44446666);
//No.5 Chroma 4x2MB 
A(0x24201020); R(0x99998888);
A(0x24201024); R(0x11112222);
//No.6 Chroma 4x2MB 
A(0x24201028); R(0x00009999);
A(0x2420102C); R(0x88889999);
//No.7 Chroma 4x2MB 
A(0x24201030); R(0x77779999);
A(0x24201034); R(0x8888aaaa);
//No.8 Chroma 4x2MB 
A(0x24201038); R(0x66664444);
A(0x2420103C); R(0x11117777);
//No.9 Chroma 4x2MB 
A(0x24201040); R(0x55555555);
A(0x24201044); R(0x22222222);
//No.10 Chroma 4x2MB 
A(0x24201048); R(0xffffffff);
A(0x2420104C); R(0x11111111);
//No.11 Chroma 4x2MB 
A(0x24201050); R(0xdddddddd);
A(0x24201054); R(0x44445555);
//No.12 Chroma 4x2MB 
A(0x24201058); R(0x55558888);
A(0x2420105C); R(0x11114444);
//No.13 Chroma 4x2MB 
A(0x24201060); R(0x0000ffff);
A(0x24201064); R(0xffff0000);
//No.14 Chroma 4x2MB 
A(0x24201068); R(0xccccffff);
A(0x2420106C); R(0xffffdddd);
//No.15 Chroma 4x2MB 
A(0x24201070); R(0x66665555);
A(0x24201074); R(0x99997777);
//No.16 Chroma 4x2MB 
A(0x24201078); R(0x66665555);
A(0x2420107C); R(0xaaaacccc); 

//M2_Chroma_result    
//No.1 Chroma 4x2MB 
A(0x24200000); R(0x11223344);
A(0x24200004); R(0x55556666);
//No.2 Chroma 4x2MB 
A(0x24200008); R(0x99995555);
A(0x2420000C); R(0x77886655);
//No.3 Chroma 4x2MB 
A(0x24200010); R(0x11112222);
A(0x24200014); R(0x33334444);
//No.4 Chroma 4x2MB 
A(0x24200018); R(0x55557777);
A(0x2420001C); R(0x44446666);
//No.5 Chroma 4x2MB 
A(0x24200020); R(0x99998888);
A(0x24200024); R(0x11112222);
//No.6 Chroma 4x2MB 
A(0x24200028); R(0x00009999);
A(0x2420002C); R(0x88889999);
//No.7 Chroma 4x2MB 
A(0x24200030); R(0x77779999);
A(0x24200034); R(0x8888aaaa);
//No.8 Chroma 4x2MB 
A(0x24200038); R(0x66664444);
A(0x2420003C); R(0x11117777);
//No.9 Chroma 4x2MB 
A(0x24200040); R(0x55555555);
A(0x24200044); R(0x22222222);
//No.10 Chroma 4x2MB 
A(0x24200048); R(0xffffffff);
A(0x2420004C); R(0x11111111);
//No.11 Chroma 4x2MB 
A(0x24200050); R(0xdddddddd);
A(0x24200054); R(0x44445555);
//No.12 Chroma 4x2MB 
A(0x24200058); R(0x55558888);
A(0x2420005C); R(0x11114444);
//No.13 Chroma 4x2MB 
A(0x24200060); R(0x0000ffff);
A(0x24200064); R(0xffff0000);
//No.14 Chroma 4x2MB 
A(0x24200068); R(0xccccffff);
A(0x2420006C); R(0xffffdddd);
//No.15 Chroma 4x2MB 
A(0x24200070); R(0x66665555);
A(0x24200074); R(0x99997777);
//No.16 Chroma 4x2MB 
A(0x24200078); R(0x66665555);
A(0x2420007C); R(0xaaaacccc);
core2end

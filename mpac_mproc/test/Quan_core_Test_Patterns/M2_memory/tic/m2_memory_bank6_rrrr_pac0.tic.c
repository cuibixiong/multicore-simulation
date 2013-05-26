core0begin
\\Write data to M2 Memory;
A(0x2500D0C0); W(0x3005F001,NO_Mask);
A(0x2500D0C4); W(0x3005F01A,NO_Mask);
A(0x2500D0C8); W(0x3005F000,NO_Mask);
A(0x2500D0CC); W(0x3005F01A,NO_Mask);
A(0x2500D080); W(0x3005F000,NO_Mask);
A(0x2500D084); W(0x3005F01A,NO_Mask);
A(0x2500D088); W(0x3005F000,NO_Mask);
A(0x2500D08C); W(0x3005F01A,NO_Mask);
A(0x2500D0F0); W(0x3005F000,NO_Mask);
A(0x2500D0F4); W(0x3005F01A,NO_Mask);
A(0x2500D0F8); W(0x3005F000,NO_Mask);
A(0x2500D0FC); W(0x3005F01A,NO_Mask);
A(0x2500D0A0); W(0x3005F000,NO_Mask);
A(0x2500D0A4); W(0x3005F01A,NO_Mask);
A(0x2500D0A8); W(0x3005F000,NO_Mask);
A(0x2500D0AC); W(0x3005F01A,NO_Mask);

\\Verification;
\\Read data from M2 Memory;
A(0x240010C0); R(0x3005F001);
A(0x240010C4); R(0x3005F01A);
A(0x240010C8); R(0x3005F000);
A(0x240010CC); R(0x3005F01A);
A(0x24001080); R(0x3005F000);
A(0x24001084); R(0x3005F01A);
A(0x24001088); R(0x3005F000);
A(0x2400108C); R(0x3005F01A);
A(0x240010F0); R(0x3005F000);
A(0x240010F4); R(0x3005F01A);
A(0x240010F8); R(0x3005F000);
A(0x240010FC); R(0x3005F01A);
A(0x240010A0); R(0x3005F000);
A(0x240010A4); R(0x3005F01A);
A(0x240010A8); R(0x3005F000);
A(0x240010AC); R(0x3005F01A);

//Chroma
//MB1 4x2
A(0x2500D000); W(0x11223344,NO_Mask); 
A(0x2500D780); W(0x55556666,NO_Mask); 
//MB2 4x2
A(0x2500D004); W(0x99995555,NO_Mask); 
A(0x2500D784); W(0x77886655,NO_Mask); 
//MB3 4x2
A(0x2500D008); W(0x11112222,NO_Mask); 
A(0x2500D788); W(0x33334444,NO_Mask); 
//MB4 4x2
A(0x2500D00C); W(0x55557777,NO_Mask); 
A(0x2500D78C); W(0x44446666,NO_Mask); 
//MB5 4x2
A(0x2500D010); W(0x99998888,NO_Mask); 
A(0x2500D790); W(0x11112222,NO_Mask); 
//MB6 4x2
A(0x2500D014); W(0x00009999,NO_Mask); 
A(0x2500D794); W(0x88889999,NO_Mask); 
//MB7 4x2
A(0x2500D018); W(0x77779999,NO_Mask); 
A(0x2500D798); W(0x8888aaaa,NO_Mask); 
//MB8 4x2
A(0x2500D01C); W(0x66664444,NO_Mask); 
A(0x2500D79C); W(0x11117777,NO_Mask); 
//MB9 4x2
A(0x2500D020); W(0x55555555,NO_Mask); 
A(0x2500D7A0); W(0x22222222,NO_Mask); 
//MB10 4x2
A(0x2500D024); W(0xffffffff,NO_Mask); 
A(0x2500D7A4); W(0x11111111,NO_Mask); 
//MB11 4x2
A(0x2500D028); W(0xdddddddd,NO_Mask); 
A(0x2500D7A8); W(0x44445555,NO_Mask); 
//MB12 4x2
A(0x2500D02C); W(0x55558888,NO_Mask); 
A(0x2500D7AC); W(0x11114444,NO_Mask); 
//MB13 4x2
A(0x2500D030); W(0x0000ffff,NO_Mask); 
A(0x2500D7B0); W(0xffff0000,NO_Mask); 
//MB14 4x2
A(0x2500D034); W(0xccccffff,NO_Mask); 
A(0x2500D7B4); W(0xffffdddd,NO_Mask); 
//MB15 4x2
A(0x2500D038); W(0x66665555,NO_Mask); 
A(0x2500D7B8); W(0x99997777,NO_Mask); 
//MB16 4x2
A(0x2500D03C); W(0x66665555,NO_Mask); 
A(0x2500D7BC); W(0xaaaacccc,NO_Mask); 


//M1_Chroma_result    
//No.1 Chroma 4x2MB 
A(0x24001000); R(0x11223344);
A(0x24001004); R(0x55556666);
//No.2 Chroma 4x2MB 
A(0x24001008); R(0x99995555);
A(0x2400100C); R(0x77886655);
//No.3 Chroma 4x2MB 
A(0x24001010); R(0x11112222);
A(0x24001014); R(0x33334444);
//No.4 Chroma 4x2MB 
A(0x24001018); R(0x55557777);
A(0x2400101C); R(0x44446666);
//No.5 Chroma 4x2MB 
A(0x24001020); R(0x99998888);
A(0x24001024); R(0x11112222);
//No.6 Chroma 4x2MB 
A(0x24001028); R(0x00009999);
A(0x2400102C); R(0x88889999);
//No.7 Chroma 4x2MB 
A(0x24001030); R(0x77779999);
A(0x24001034); R(0x8888aaaa);
//No.8 Chroma 4x2MB 
A(0x24001038); R(0x66664444);
A(0x2400103C); R(0x11117777);
//No.9 Chroma 4x2MB 
A(0x24001040); R(0x55555555);
A(0x24001044); R(0x22222222);
//No.10 Chroma 4x2MB 
A(0x24001048); R(0xffffffff);
A(0x2400104C); R(0x11111111);
//No.11 Chroma 4x2MB 
A(0x24001050); R(0xdddddddd);
A(0x24001054); R(0x44445555);
//No.12 Chroma 4x2MB 
A(0x24001058); R(0x55558888);
A(0x2400105C); R(0x11114444);
//No.13 Chroma 4x2MB 
A(0x24001060); R(0x0000ffff);
A(0x24001064); R(0xffff0000);
//No.14 Chroma 4x2MB 
A(0x24001068); R(0xccccffff);
A(0x2400106C); R(0xffffdddd);
//No.15 Chroma 4x2MB 
A(0x24001070); R(0x66665555);
A(0x24001074); R(0x99997777);
//No.16 Chroma 4x2MB 
A(0x24001078); R(0x66665555);
A(0x2400107C); R(0xaaaacccc);
core0end

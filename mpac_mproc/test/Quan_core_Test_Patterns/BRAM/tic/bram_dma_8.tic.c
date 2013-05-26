core0begin
//MB1
A(0x18002000); W(0x55229988,NO_Mask); 
A(0x18002780); W(0x11223344,NO_Mask);
A(0x18002F00); W(0x55687abc,NO_Mask);
A(0x18003680); W(0x76854321,NO_Mask);

//MB2
A(0x18002004); W(0x11223344,NO_Mask); 
A(0x18002784); W(0x56789abc,NO_Mask);
A(0x18002F04); W(0x55556666,NO_Mask);
A(0x18003684); W(0x77778888,NO_Mask);

//MB3
A(0x18002008); W(0x55667788,NO_Mask); 
A(0x18002788); W(0x44444444,NO_Mask);
A(0x18002F08); W(0x88888888,NO_Mask);
A(0x18003688); W(0x99999999,NO_Mask);

//MB4
A(0x1800200C); W(0x55667788,NO_Mask); 
A(0x1800278C); W(0x44444444,NO_Mask);
A(0x18002F0C); W(0x88888888,NO_Mask);
A(0x1800368C); W(0x99999999,NO_Mask);

//MB5
A(0x18002010); W(0x55667788,NO_Mask); 
A(0x18002790); W(0x99887766,NO_Mask);
A(0x18002F10); W(0xaabbccdd,NO_Mask);
A(0x18003690); W(0xccddeeff,NO_Mask);

//MB6
A(0x18002014); W(0x44556677,NO_Mask); 
A(0x18002794); W(0x99556644,NO_Mask);
A(0x18002F14); W(0x00005555,NO_Mask);
A(0x18003694); W(0x55550000,NO_Mask);

//MB7
A(0x18002018); W(0x99995555,NO_Mask); 
A(0x18002798); W(0xbbaaccdd,NO_Mask);
A(0x18002F18); W(0x66664444,NO_Mask);
A(0x18003698); W(0x778899aa,NO_Mask);

//MB8
A(0x1800201C); W(0x11111111,NO_Mask); 
A(0x1800279C); W(0x12345678,NO_Mask);
A(0x18002F1C); W(0x87654321,NO_Mask);
A(0x1800369C); W(0x11111111,NO_Mask);

//MB9
A(0x18002020); W(0x22222222,NO_Mask); 
A(0x180027A0); W(0x44446666,NO_Mask);
A(0x18002F20); W(0x55557777,NO_Mask);
A(0x180036A0); W(0x22222222,NO_Mask);

//MB10
A(0x18002024); W(0x33333333,NO_Mask); 
A(0x180027A4); W(0xeeeeaaaa,NO_Mask);
A(0x18002F24); W(0xaaaabbbb,NO_Mask);
A(0x180036A4); W(0x33333333,NO_Mask);

//MB11
A(0x18002028); W(0x44444444,NO_Mask); 
A(0x180027A8); W(0x00001111,NO_Mask);
A(0x18002F28); W(0x22220000,NO_Mask);
A(0x180036A8); W(0x77777777,NO_Mask);

//MB12
A(0x1800202C); W(0x88888888,NO_Mask); 
A(0x180027AC); W(0xaaaa1111,NO_Mask);
A(0x18002F2C); W(0x2222aaaa,NO_Mask);
A(0x180036AC); W(0x99999999,NO_Mask);

//MB13
A(0x18002030); W(0xccccdddd,NO_Mask); 
A(0x180027B0); W(0x99991111,NO_Mask);
A(0x18002F30); W(0x22229999,NO_Mask);
A(0x180036B0); W(0xaaaa4444,NO_Mask);

//MB14
A(0x18002034); W(0xffff0000,NO_Mask); 
A(0x180027B4); W(0xaaaa2222,NO_Mask);
A(0x18002F34); W(0x2222bbbb,NO_Mask);
A(0x180036B4); W(0x0000dddd,NO_Mask);

//MB15
A(0x18002038); W(0xddddaaaa,NO_Mask); 
A(0x180027B8); W(0x11111111,NO_Mask);
A(0x18002F38); W(0x33333333,NO_Mask);
A(0x180036B8); W(0xaaaadddd,NO_Mask);

//MB16
A(0x1800203C); W(0x99999999,NO_Mask); 
A(0x180027BC); W(0x55555555,NO_Mask);
A(0x18002F3C); W(0x77777777,NO_Mask);
A(0x180036BC); W(0xffffffff,NO_Mask);


//Chroma
//MB1 4x2
A(0x18000000); W(0x11223344,NO_Mask); 
A(0x18000780); W(0x55556666,NO_Mask); 

//MB2 4x2
A(0x18000004); W(0x99995555,NO_Mask); 
A(0x18000784); W(0x77886655,NO_Mask); 

//MB3 4x2
A(0x18000008); W(0x11112222,NO_Mask); 
A(0x18000788); W(0x33334444,NO_Mask); 

//MB4 4x2
A(0x1800000C); W(0x55557777,NO_Mask); 
A(0x1800078C); W(0x44446666,NO_Mask); 

//MB5 4x2
A(0x18000010); W(0x99998888,NO_Mask); 
A(0x18000790); W(0x11112222,NO_Mask); 

//MB6 4x2
A(0x18000014); W(0x00009999,NO_Mask); 
A(0x18000794); W(0x88889999,NO_Mask); 

//MB7 4x2
A(0x18000018); W(0x77779999,NO_Mask); 
A(0x18000798); W(0x8888aaaa,NO_Mask); 

//MB8 4x2
A(0x1800001C); W(0x66664444,NO_Mask); 
A(0x1800079C); W(0x11117777,NO_Mask); 

//MB9 4x2
A(0x18000020); W(0x55555555,NO_Mask); 
A(0x180007A0); W(0x22222222,NO_Mask); 

//MB10 4x2
A(0x18000024); W(0xffffffff,NO_Mask); 
A(0x180007A4); W(0x11111111,NO_Mask); 

//MB11 4x2
A(0x18000028); W(0xdddddddd,NO_Mask); 
A(0x180007A8); W(0x44445555,NO_Mask); 

//MB12 4x2
A(0x1800002C); W(0x55558888,NO_Mask); 
A(0x180007AC); W(0x11114444,NO_Mask); 

//MB13 4x2
A(0x18000030); W(0x0000ffff,NO_Mask); 
A(0x180007B0); W(0xffff0000,NO_Mask); 

//MB14 4x2
A(0x18000034); W(0xccccffff,NO_Mask); 
A(0x180007B4); W(0xffffdddd,NO_Mask); 

//MB15 4x2
A(0x18000038); W(0x66665555,NO_Mask); 
A(0x180007B8); W(0x99997777,NO_Mask); 

//MB16 4x2
A(0x1800003C); W(0x66665555,NO_Mask); 
A(0x180007BC); W(0xaaaacccc,NO_Mask); 


//M1_Luma_result
//No.1 Luma 4x4MB
A(0x24000000); R(0x55229988);
A(0x24000004); R(0x11223344);
A(0x24000008); R(0x55687abc);
A(0x2400000C); R(0x76854321);
//No.2 Luma 4x4MB
A(0x24000010); R(0x11223344);
A(0x24000014); R(0x56789abc);
A(0x24000018); R(0x55556666);
A(0x2400001C); R(0x77778888);
//No.3 Luma 4x4MB
A(0x24000020); R(0x55667788);
A(0x24000024); R(0x44444444);
A(0x24000028); R(0x88888888);
A(0x2400002C); R(0x99999999);
//No.4 Luma 4x4MB
A(0x24000030); R(0x55667788);
A(0x24000034); R(0x44444444);
A(0x24000038); R(0x88888888);
A(0x2400003C); R(0x99999999);
//No.5 Luma 4x4MB
A(0x24000040); R(0x55667788);
A(0x24000044); R(0x99887766);
A(0x24000048); R(0xaabbccdd);
A(0x2400004C); R(0xccddeeff);
//No.6 Luma 4x4MB
A(0x24000050); R(0x44556677);
A(0x24000054); R(0x99556644);
A(0x24000058); R(0x00005555);
A(0x2400005C); R(0x55550000);
//No.7 Luma 4x4MB
A(0x24000060); R(0x99995555);
A(0x24000064); R(0xbbaaccdd);
A(0x24000068); R(0x66664444);
A(0x2400006C); R(0x778899aa);
//No.8 Luma 4x4MB
A(0x24000070); R(0x11111111);
A(0x24000074); R(0x12345678);
A(0x24000078); R(0x87654321);
A(0x2400007C); R(0x11111111);
//No.9 Luma 4x4MB
A(0x24000080); R(0x22222222);
A(0x24000084); R(0x44446666);
A(0x24000088); R(0x55557777);
A(0x2400008C); R(0x22222222);
//No.10 Luma 4x4MB
A(0x24000090); R(0x33333333);
A(0x24000094); R(0xeeeeaaaa);
A(0x24000098); R(0xaaaabbbb);
A(0x2400009C); R(0x33333333);
//No.11 Luma 4x4MB
A(0x240000A0); R(0x44444444);
A(0x240000A4); R(0x00001111);
A(0x240000A8); R(0x22220000);
A(0x240000AC); R(0x77777777);
//No.12 Luma 4x4MB
A(0x240000B0); R(0x88888888);
A(0x240000B4); R(0xaaaa1111);
A(0x240000B8); R(0x2222aaaa);
A(0x240000BC); R(0x99999999);
//No.13 Luma 4x4MB
A(0x240000C0); R(0xccccdddd);
A(0x240000C4); R(0x99991111);
A(0x240000C8); R(0x22229999);
A(0x240000CC); R(0xaaaa4444);
//No.14 Luma 4x4MB
A(0x240000D0); R(0xffff0000);
A(0x240000D4); R(0xaaaa2222);
A(0x240000D8); R(0x2222bbbb);
A(0x240000DC); R(0x0000dddd);
//No.15 Luma 4x4MB
A(0x240000E0); R(0xddddaaaa);
A(0x240000E4); R(0x11111111);
A(0x240000E8); R(0x33333333);
A(0x240000EC); R(0xaaaadddd);
//No.16 Luma 4x4MB
A(0x240000F0); R(0x99999999);
A(0x240000F4); R(0x55555555);
A(0x240000F8); R(0x77777777);
A(0x240000FC); R(0xffffffff);

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
core0begin
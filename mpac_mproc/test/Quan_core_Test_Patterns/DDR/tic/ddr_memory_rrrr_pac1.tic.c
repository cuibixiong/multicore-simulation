core1begin
\\Write data to DDR Memory;
A(0x300011C0); W(0x3005F001,NO_Mask);
A(0x300011C4); W(0x3005F01A,NO_Mask);
A(0x300011C8); W(0x3005F000,NO_Mask);
A(0x300011CC); W(0x3005F01A,NO_Mask);
A(0x30001180); W(0x3005F000,NO_Mask);
A(0x30001184); W(0x3005F01A,NO_Mask);
A(0x30001188); W(0x3005F000,NO_Mask);
A(0x3000118C); W(0x3005F01A,NO_Mask);
A(0x300011F0); W(0x3005F000,NO_Mask);
A(0x300011F4); W(0x3005F01A,NO_Mask);
A(0x300011F8); W(0x3005F000,NO_Mask);
A(0x300011FC); W(0x3005F01A,NO_Mask);
A(0x300011A0); W(0x3005F000,NO_Mask);
A(0x300011A4); W(0x3005F01A,NO_Mask);
A(0x300011A8); W(0x3005F000,NO_Mask);
A(0x300011AC); W(0x3005F01A,NO_Mask);

\\Verification;
\\Read data from PAC1 Memory;
A(0x241011C0); R(0x3005F001);
A(0x241011C4); R(0x3005F01A);
A(0x241011C8); R(0x3005F000);
A(0x241011CC); R(0x3005F01A);
A(0x24101180); R(0x3005F000);
A(0x24101184); R(0x3005F01A);
A(0x24101188); R(0x3005F000);
A(0x2410118C); R(0x3005F01A);
A(0x241011F0); R(0x3005F000);
A(0x241011F4); R(0x3005F01A);
A(0x241011F8); R(0x3005F000);
A(0x241011FC); R(0x3005F01A);
A(0x241011A0); R(0x3005F000);
A(0x241011A4); R(0x3005F01A);
A(0x241011A8); R(0x3005F000);
A(0x241011AC); R(0x3005F01A);


//M1 DMA1
//MB1
A(0x30062000); W(0x55229988,NO_Mask); 
A(0x30062780); W(0x11223344,NO_Mask);
A(0x30062F00); W(0x55687abc,NO_Mask);
A(0x30063680); W(0x76854321,NO_Mask);

//MB2
A(0x30062004); W(0x11223344,NO_Mask); 
A(0x30062784); W(0x56789abc,NO_Mask);
A(0x30062F04); W(0x55556666,NO_Mask);
A(0x30063684); W(0x77778888,NO_Mask);

//MB3
A(0x30062008); W(0x55667788,NO_Mask); 
A(0x30062788); W(0x44444444,NO_Mask);
A(0x30062F08); W(0x88888888,NO_Mask);
A(0x30063688); W(0x99999999,NO_Mask);

//MB4
A(0x3006200C); W(0x55667788,NO_Mask); 
A(0x3006278C); W(0x44444444,NO_Mask);
A(0x30062F0C); W(0x88888888,NO_Mask);
A(0x3006368C); W(0x99999999,NO_Mask);

//MB5
A(0x30062010); W(0x55667788,NO_Mask); 
A(0x30062790); W(0x99887766,NO_Mask);
A(0x30062F10); W(0xaabbccdd,NO_Mask);
A(0x30063690); W(0xccddeeff,NO_Mask);

//MB6
A(0x30062014); W(0x44556677,NO_Mask); 
A(0x30062794); W(0x99556644,NO_Mask);
A(0x30062F14); W(0x00005555,NO_Mask);
A(0x30063694); W(0x55550000,NO_Mask);

//MB7
A(0x30062018); W(0x99995555,NO_Mask); 
A(0x30062798); W(0xbbaaccdd,NO_Mask);
A(0x30062F18); W(0x66664444,NO_Mask);
A(0x30063698); W(0x778899aa,NO_Mask);

//MB8
A(0x3006201C); W(0x11111111,NO_Mask); 
A(0x3006279C); W(0x12345678,NO_Mask);
A(0x30062F1C); W(0x87654321,NO_Mask);
A(0x3006369C); W(0x11111111,NO_Mask);

//MB9
A(0x30062020); W(0x22222222,NO_Mask); 
A(0x300627A0); W(0x44446666,NO_Mask);
A(0x30062F20); W(0x55557777,NO_Mask);
A(0x300636A0); W(0x22222222,NO_Mask);

//MB10
A(0x30062024); W(0x33333333,NO_Mask); 
A(0x300627A4); W(0xeeeeaaaa,NO_Mask);
A(0x30062F24); W(0xaaaabbbb,NO_Mask);
A(0x300636A4); W(0x33333333,NO_Mask);

//MB11
A(0x30062028); W(0x44444444,NO_Mask); 
A(0x300627A8); W(0x00001111,NO_Mask);
A(0x30062F28); W(0x22220000,NO_Mask);
A(0x300636A8); W(0x77777777,NO_Mask);

//MB12
A(0x3006202C); W(0x88888888,NO_Mask); 
A(0x300627AC); W(0xaaaa1111,NO_Mask);
A(0x30062F2C); W(0x2222aaaa,NO_Mask);
A(0x300636AC); W(0x99999999,NO_Mask);

//MB13
A(0x30062030); W(0xccccdddd,NO_Mask); 
A(0x300627B0); W(0x99991111,NO_Mask);
A(0x30062F30); W(0x22229999,NO_Mask);
A(0x300636B0); W(0xaaaa4444,NO_Mask);

//MB14
A(0x30062034); W(0xffff0000,NO_Mask); 
A(0x300627B4); W(0xaaaa2222,NO_Mask);
A(0x30062F34); W(0x2222bbbb,NO_Mask);
A(0x300636B4); W(0x0000dddd,NO_Mask);

//MB15
A(0x30062038); W(0xddddaaaa,NO_Mask); 
A(0x300627B8); W(0x11111111,NO_Mask);
A(0x30062F38); W(0x33333333,NO_Mask);
A(0x300636B8); W(0xaaaadddd,NO_Mask);

//MB16
A(0x3006203C); W(0x99999999,NO_Mask); 
A(0x300627BC); W(0x55555555,NO_Mask);
A(0x30062F3C); W(0x77777777,NO_Mask);
A(0x300636BC); W(0xffffffff,NO_Mask);


//Chroma
//MB1 4x2
A(0x30070000); W(0x11223344,NO_Mask); 
A(0x30070780); W(0x55556666,NO_Mask); 

//MB2 4x2
A(0x30070004); W(0x99995555,NO_Mask); 
A(0x30070784); W(0x77886655,NO_Mask); 

//MB3 4x2
A(0x30070008); W(0x11112222,NO_Mask); 
A(0x30070788); W(0x33334444,NO_Mask); 

//MB4 4x2
A(0x3007000C); W(0x55557777,NO_Mask); 
A(0x3007078C); W(0x44446666,NO_Mask); 

//MB5 4x2
A(0x30070010); W(0x99998888,NO_Mask); 
A(0x30070790); W(0x11112222,NO_Mask); 

//MB6 4x2
A(0x30070014); W(0x00009999,NO_Mask); 
A(0x30070794); W(0x88889999,NO_Mask); 

//MB7 4x2
A(0x30070018); W(0x77779999,NO_Mask); 
A(0x30070798); W(0x8888aaaa,NO_Mask); 

//MB8 4x2
A(0x3007001C); W(0x66664444,NO_Mask); 
A(0x3007079C); W(0x11117777,NO_Mask); 

//MB9 4x2
A(0x30070020); W(0x55555555,NO_Mask); 
A(0x300707A0); W(0x22222222,NO_Mask); 

//MB10 4x2
A(0x30070024); W(0xffffffff,NO_Mask); 
A(0x300707A4); W(0x11111111,NO_Mask); 

//MB11 4x2
A(0x30070028); W(0xdddddddd,NO_Mask); 
A(0x300707A8); W(0x44445555,NO_Mask); 

//MB12 4x2
A(0x3007002C); W(0x55558888,NO_Mask); 
A(0x300707AC); W(0x11114444,NO_Mask); 

//MB13 4x2
A(0x30070030); W(0x0000ffff,NO_Mask); 
A(0x300707B0); W(0xffff0000,NO_Mask); 

//MB14 4x2
A(0x30070034); W(0xccccffff,NO_Mask); 
A(0x300707B4); W(0xffffdddd,NO_Mask); 

//MB15 4x2
A(0x30070038); W(0x66665555,NO_Mask); 
A(0x300707B8); W(0x99997777,NO_Mask); 

//MB16 4x2
A(0x3007003C); W(0x66665555,NO_Mask); 
A(0x300707BC); W(0xaaaacccc,NO_Mask); 


//M1_Luma_result
//No.1 Luma 4x4MB
A(0x24100000); R(0x55229988);
A(0x24100004); R(0x11223344);
A(0x24100008); R(0x55687abc);
A(0x2410000C); R(0x76854321);
//No.2 Luma 4x4MB
A(0x24100010); R(0x11223344);
A(0x24100014); R(0x56789abc);
A(0x24100018); R(0x55556666);
A(0x2410001C); R(0x77778888);
//No.3 Luma 4x4MB
A(0x24100020); R(0x55667788);
A(0x24100024); R(0x44444444);
A(0x24100028); R(0x88888888);
A(0x2410002C); R(0x99999999);
//No.4 Luma 4x4MB
A(0x24100030); R(0x55667788);
A(0x24100034); R(0x44444444);
A(0x24100038); R(0x88888888);
A(0x2410003C); R(0x99999999);
//No.5 Luma 4x4MB
A(0x24100040); R(0x55667788);
A(0x24100044); R(0x99887766);
A(0x24100048); R(0xaabbccdd);
A(0x2410004C); R(0xccddeeff);
//No.6 Luma 4x4MB
A(0x24100050); R(0x44556677);
A(0x24100054); R(0x99556644);
A(0x24100058); R(0x00005555);
A(0x2410005C); R(0x55550000);
//No.7 Luma 4x4MB
A(0x24100060); R(0x99995555);
A(0x24100064); R(0xbbaaccdd);
A(0x24100068); R(0x66664444);
A(0x2410006C); R(0x778899aa);
//No.8 Luma 4x4MB
A(0x24100070); R(0x11111111);
A(0x24100074); R(0x12345678);
A(0x24100078); R(0x87654321);
A(0x2410007C); R(0x11111111);
//No.9 Luma 4x4MB
A(0x24100080); R(0x22222222);
A(0x24100084); R(0x44446666);
A(0x24100088); R(0x55557777);
A(0x2410008C); R(0x22222222);
//No.10 Luma 4x4MB
A(0x24100090); R(0x33333333);
A(0x24100094); R(0xeeeeaaaa);
A(0x24100098); R(0xaaaabbbb);
A(0x2410009C); R(0x33333333);
//No.11 Luma 4x4MB
A(0x241000A0); R(0x44444444);
A(0x241000A4); R(0x00001111);
A(0x241000A8); R(0x22220000);
A(0x241000AC); R(0x77777777);
//No.12 Luma 4x4MB
A(0x241000B0); R(0x88888888);
A(0x241000B4); R(0xaaaa1111);
A(0x241000B8); R(0x2222aaaa);
A(0x241000BC); R(0x99999999);
//No.13 Luma 4x4MB
A(0x241000C0); R(0xccccdddd);
A(0x241000C4); R(0x99991111);
A(0x241000C8); R(0x22229999);
A(0x241000CC); R(0xaaaa4444);
//No.14 Luma 4x4MB
A(0x241000D0); R(0xffff0000);
A(0x241000D4); R(0xaaaa2222);
A(0x241000D8); R(0x2222bbbb);
A(0x241000DC); R(0x0000dddd);
//No.15 Luma 4x4MB
A(0x241000E0); R(0xddddaaaa);
A(0x241000E4); R(0x11111111);
A(0x241000E8); R(0x33333333);
A(0x241000EC); R(0xaaaadddd);
//No.16 Luma 4x4MB
A(0x241000F0); R(0x99999999);
A(0x241000F4); R(0x55555555);
A(0x241000F8); R(0x77777777);
A(0x241000FC); R(0xffffffff);

//M1_Chroma_result    
//No.1 Chroma 4x2MB 
A(0x24101000); R(0x11223344);
A(0x24101004); R(0x55556666);
//No.2 Chroma 4x2MB 
A(0x24101008); R(0x99995555);
A(0x2410100C); R(0x77886655);
//No.3 Chroma 4x2MB 
A(0x24101010); R(0x11112222);
A(0x24101014); R(0x33334444);
//No.4 Chroma 4x2MB 
A(0x24101018); R(0x55557777);
A(0x2410101C); R(0x44446666);
//No.5 Chroma 4x2MB 
A(0x24101020); R(0x99998888);
A(0x24101024); R(0x11112222);
//No.6 Chroma 4x2MB 
A(0x24101028); R(0x00009999);
A(0x2410102C); R(0x88889999);
//No.7 Chroma 4x2MB 
A(0x24101030); R(0x77779999);
A(0x24101034); R(0x8888aaaa);
//No.8 Chroma 4x2MB 
A(0x24101038); R(0x66664444);
A(0x2410103C); R(0x11117777);
//No.9 Chroma 4x2MB 
A(0x24101040); R(0x55555555);
A(0x24101044); R(0x22222222);
//No.10 Chroma 4x2MB 
A(0x24101048); R(0xffffffff);
A(0x2410104C); R(0x11111111);
//No.11 Chroma 4x2MB 
A(0x24101050); R(0xdddddddd);
A(0x24101054); R(0x44445555);
//No.12 Chroma 4x2MB 
A(0x24101058); R(0x55558888);
A(0x2410105C); R(0x11114444);
//No.13 Chroma 4x2MB 
A(0x24101060); R(0x0000ffff);
A(0x24101064); R(0xffff0000);
//No.14 Chroma 4x2MB 
A(0x24101068); R(0xccccffff);
A(0x2410106C); R(0xffffdddd);
//No.15 Chroma 4x2MB 
A(0x24101070); R(0x66665555);
A(0x24101074); R(0x99997777);
//No.16 Chroma 4x2MB 
A(0x24101078); R(0x66665555);
A(0x2410107C); R(0xaaaacccc);
core1end

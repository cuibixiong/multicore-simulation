core2begin
\\Write data to DDR Memory;
A(0x300012C0); W(0x3005F001,NO_Mask);
A(0x300012C4); W(0x3005F01A,NO_Mask);
A(0x300012C8); W(0x3005F000,NO_Mask);
A(0x300012CC); W(0x3005F01A,NO_Mask);
A(0x30001280); W(0x3005F000,NO_Mask);
A(0x30001284); W(0x3005F01A,NO_Mask);
A(0x30001288); W(0x3005F000,NO_Mask);
A(0x3000128C); W(0x3005F01A,NO_Mask);
A(0x300012F0); W(0x3005F000,NO_Mask);
A(0x300012F4); W(0x3005F01A,NO_Mask);
A(0x300012F8); W(0x3005F000,NO_Mask);
A(0x300012FC); W(0x3005F01A,NO_Mask);
A(0x300012A0); W(0x3005F000,NO_Mask);
A(0x300012A4); W(0x3005F01A,NO_Mask);
A(0x300012A8); W(0x3005F000,NO_Mask);
A(0x300012AC); W(0x3005F01A,NO_Mask);

\\Verification;
\\Read data from PAC2 Memory;
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

//M1 DMA2
//MB1
A(0x30082000); W(0x55229988,NO_Mask); 
A(0x30082780); W(0x11223344,NO_Mask);
A(0x30082F00); W(0x55687abc,NO_Mask);
A(0x30083680); W(0x76854321,NO_Mask);

//MB2
A(0x30082004); W(0x11223344,NO_Mask); 
A(0x30082784); W(0x56789abc,NO_Mask);
A(0x30082F04); W(0x55556666,NO_Mask);
A(0x30083684); W(0x77778888,NO_Mask);

//MB3
A(0x30082008); W(0x55667788,NO_Mask); 
A(0x30082788); W(0x44444444,NO_Mask);
A(0x30082F08); W(0x88888888,NO_Mask);
A(0x30083688); W(0x99999999,NO_Mask);

//MB4
A(0x3008200C); W(0x55667788,NO_Mask); 
A(0x3008278C); W(0x44444444,NO_Mask);
A(0x30082F0C); W(0x88888888,NO_Mask);
A(0x3008368C); W(0x99999999,NO_Mask);

//MB5
A(0x30082010); W(0x55667788,NO_Mask); 
A(0x30082790); W(0x99887766,NO_Mask);
A(0x30082F10); W(0xaabbccdd,NO_Mask);
A(0x30083690); W(0xccddeeff,NO_Mask);

//MB6
A(0x30082014); W(0x44556677,NO_Mask); 
A(0x30082794); W(0x99556644,NO_Mask);
A(0x30082F14); W(0x00005555,NO_Mask);
A(0x30083694); W(0x55550000,NO_Mask);

//MB7
A(0x30082018); W(0x99995555,NO_Mask); 
A(0x30082798); W(0xbbaaccdd,NO_Mask);
A(0x30082F18); W(0x66664444,NO_Mask);
A(0x30083698); W(0x778899aa,NO_Mask);

//MB8
A(0x3008201C); W(0x11111111,NO_Mask); 
A(0x3008279C); W(0x12345678,NO_Mask);
A(0x30082F1C); W(0x87654321,NO_Mask);
A(0x3008369C); W(0x11111111,NO_Mask);

//MB9
A(0x30082020); W(0x22222222,NO_Mask); 
A(0x300827A0); W(0x44446666,NO_Mask);
A(0x30082F20); W(0x55557777,NO_Mask);
A(0x300836A0); W(0x22222222,NO_Mask);

//MB10
A(0x30082024); W(0x33333333,NO_Mask); 
A(0x300827A4); W(0xeeeeaaaa,NO_Mask);
A(0x30082F24); W(0xaaaabbbb,NO_Mask);
A(0x300836A4); W(0x33333333,NO_Mask);

//MB11
A(0x30082028); W(0x44444444,NO_Mask); 
A(0x300827A8); W(0x00001111,NO_Mask);
A(0x30082F28); W(0x22220000,NO_Mask);
A(0x300836A8); W(0x77777777,NO_Mask);

//MB12
A(0x3008202C); W(0x88888888,NO_Mask); 
A(0x300827AC); W(0xaaaa1111,NO_Mask);
A(0x30082F2C); W(0x2222aaaa,NO_Mask);
A(0x300836AC); W(0x99999999,NO_Mask);

//MB13
A(0x30082030); W(0xccccdddd,NO_Mask); 
A(0x300827B0); W(0x99991111,NO_Mask);
A(0x30082F30); W(0x22229999,NO_Mask);
A(0x300836B0); W(0xaaaa4444,NO_Mask);

//MB14
A(0x30082034); W(0xffff0000,NO_Mask); 
A(0x300827B4); W(0xaaaa2222,NO_Mask);
A(0x30082F34); W(0x2222bbbb,NO_Mask);
A(0x300836B4); W(0x0000dddd,NO_Mask);

//MB15
A(0x30082038); W(0xddddaaaa,NO_Mask); 
A(0x300827B8); W(0x11111111,NO_Mask);
A(0x30082F38); W(0x33333333,NO_Mask);
A(0x300836B8); W(0xaaaadddd,NO_Mask);

//MB16
A(0x3008203C); W(0x99999999,NO_Mask); 
A(0x300827BC); W(0x55555555,NO_Mask);
A(0x30082F3C); W(0x77777777,NO_Mask);
A(0x300836BC); W(0xffffffff,NO_Mask);


//Chroma
//MB1 4x2
A(0x30090000); W(0x11223344,NO_Mask); 
A(0x30090780); W(0x55556666,NO_Mask); 

//MB2 4x2
A(0x30090004); W(0x99995555,NO_Mask); 
A(0x30090784); W(0x77886655,NO_Mask); 

//MB3 4x2
A(0x30090008); W(0x11112222,NO_Mask); 
A(0x30090788); W(0x33334444,NO_Mask); 

//MB4 4x2
A(0x3009000C); W(0x55557777,NO_Mask); 
A(0x3009078C); W(0x44446666,NO_Mask); 

//MB5 4x2
A(0x30090010); W(0x99998888,NO_Mask); 
A(0x30090790); W(0x11112222,NO_Mask); 

//MB6 4x2
A(0x30090014); W(0x00009999,NO_Mask); 
A(0x30090794); W(0x88889999,NO_Mask); 

//MB7 4x2
A(0x30090018); W(0x77779999,NO_Mask); 
A(0x30090798); W(0x8888aaaa,NO_Mask); 

//MB8 4x2
A(0x3009001C); W(0x66664444,NO_Mask); 
A(0x3009079C); W(0x11117777,NO_Mask); 

//MB9 4x2
A(0x30090020); W(0x55555555,NO_Mask); 
A(0x300907A0); W(0x22222222,NO_Mask); 

//MB10 4x2
A(0x30090024); W(0xffffffff,NO_Mask); 
A(0x300907A4); W(0x11111111,NO_Mask); 

//MB11 4x2
A(0x30090028); W(0xdddddddd,NO_Mask); 
A(0x300907A8); W(0x44445555,NO_Mask); 

//MB12 4x2
A(0x3009002C); W(0x55558888,NO_Mask); 
A(0x300907AC); W(0x11114444,NO_Mask); 

//MB13 4x2
A(0x30090030); W(0x0000ffff,NO_Mask); 
A(0x300907B0); W(0xffff0000,NO_Mask); 

//MB14 4x2
A(0x30090034); W(0xccccffff,NO_Mask); 
A(0x300907B4); W(0xffffdddd,NO_Mask); 

//MB15 4x2
A(0x30090038); W(0x66665555,NO_Mask); 
A(0x300907B8); W(0x99997777,NO_Mask); 

//MB16 4x2
A(0x3009003C); W(0x66665555,NO_Mask); 
A(0x300907BC); W(0xaaaacccc,NO_Mask); 


//M1_Luma_result
//No.1 Luma 4x4MB
A(0x24200000); R(0x55229988);
A(0x24200004); R(0x11223344);
A(0x24200008); R(0x55687abc);
A(0x2420000C); R(0x76854321);
//No.2 Luma 4x4MB
A(0x24200010); R(0x11223344);
A(0x24200014); R(0x56789abc);
A(0x24200018); R(0x55556666);
A(0x2420001C); R(0x77778888);
//No.3 Luma 4x4MB
A(0x24200020); R(0x55667788);
A(0x24200024); R(0x44444444);
A(0x24200028); R(0x88888888);
A(0x2420002C); R(0x99999999);
//No.4 Luma 4x4MB
A(0x24200030); R(0x55667788);
A(0x24200034); R(0x44444444);
A(0x24200038); R(0x88888888);
A(0x2420003C); R(0x99999999);
//No.5 Luma 4x4MB
A(0x24200040); R(0x55667788);
A(0x24200044); R(0x99887766);
A(0x24200048); R(0xaabbccdd);
A(0x2420004C); R(0xccddeeff);
//No.6 Luma 4x4MB
A(0x24200050); R(0x44556677);
A(0x24200054); R(0x99556644);
A(0x24200058); R(0x00005555);
A(0x2420005C); R(0x55550000);
//No.7 Luma 4x4MB
A(0x24200060); R(0x99995555);
A(0x24200064); R(0xbbaaccdd);
A(0x24200068); R(0x66664444);
A(0x2420006C); R(0x778899aa);
//No.8 Luma 4x4MB
A(0x24200070); R(0x11111111);
A(0x24200074); R(0x12345678);
A(0x24200078); R(0x87654321);
A(0x2420007C); R(0x11111111);
//No.9 Luma 4x4MB
A(0x24200080); R(0x22222222);
A(0x24200084); R(0x44446666);
A(0x24200088); R(0x55557777);
A(0x2420008C); R(0x22222222);
//No.10 Luma 4x4MB
A(0x24200090); R(0x33333333);
A(0x24200094); R(0xeeeeaaaa);
A(0x24200098); R(0xaaaabbbb);
A(0x2420009C); R(0x33333333);
//No.11 Luma 4x4MB
A(0x242000A0); R(0x44444444);
A(0x242000A4); R(0x00001111);
A(0x242000A8); R(0x22220000);
A(0x242000AC); R(0x77777777);
//No.12 Luma 4x4MB
A(0x242000B0); R(0x88888888);
A(0x242000B4); R(0xaaaa1111);
A(0x242000B8); R(0x2222aaaa);
A(0x242000BC); R(0x99999999);
//No.13 Luma 4x4MB
A(0x242000C0); R(0xccccdddd);
A(0x242000C4); R(0x99991111);
A(0x242000C8); R(0x22229999);
A(0x242000CC); R(0xaaaa4444);
//No.14 Luma 4x4MB
A(0x242000D0); R(0xffff0000);
A(0x242000D4); R(0xaaaa2222);
A(0x242000D8); R(0x2222bbbb);
A(0x242000DC); R(0x0000dddd);
//No.15 Luma 4x4MB
A(0x242000E0); R(0xddddaaaa);
A(0x242000E4); R(0x11111111);
A(0x242000E8); R(0x33333333);
A(0x242000EC); R(0xaaaadddd);
//No.16 Luma 4x4MB
A(0x242000F0); R(0x99999999);
A(0x242000F4); R(0x55555555);
A(0x242000F8); R(0x77777777);
A(0x242000FC); R(0xffffffff);

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

//M2 Chroma;
 //Chroma
//MB1 4x2
A(0x30110000); W(0x11223344,NO_Mask); 
A(0x30110780); W(0x55556666,NO_Mask); 
//MB2 4x2
A(0x30110004); W(0x99995555,NO_Mask); 
A(0x30110784); W(0x77886655,NO_Mask); 
//MB3 4x2
A(0x30110008); W(0x11112222,NO_Mask); 
A(0x30110788); W(0x33334444,NO_Mask); 
//MB4 4x2
A(0x3011000C); W(0x55557777,NO_Mask); 
A(0x3011078C); W(0x44446666,NO_Mask); 
//MB5 4x2
A(0x30110010); W(0x99998888,NO_Mask); 
A(0x30110790); W(0x11112222,NO_Mask); 
//MB6 4x2
A(0x30110014); W(0x00009999,NO_Mask); 
A(0x30110794); W(0x88889999,NO_Mask); 
//MB7 4x2
A(0x30110018); W(0x77779999,NO_Mask); 
A(0x30110798); W(0x8888aaaa,NO_Mask); 
//MB8 4x2
A(0x3011001C); W(0x66664444,NO_Mask); 
A(0x3011079C); W(0x11117777,NO_Mask); 
//MB9 4x2
A(0x30110020); W(0x55555555,NO_Mask); 
A(0x301107A0); W(0x22222222,NO_Mask); 
//MB10 4x2
A(0x30110024); W(0xffffffff,NO_Mask); 
A(0x301107A4); W(0x11111111,NO_Mask); 
//MB11 4x2
A(0x30110028); W(0xdddddddd,NO_Mask); 
A(0x301107A8); W(0x44445555,NO_Mask); 
//MB12 4x2
A(0x3011002C); W(0x55558888,NO_Mask); 
A(0x301107AC); W(0x11114444,NO_Mask); 
//MB13 4x2
A(0x30110030); W(0x0000ffff,NO_Mask); 
A(0x301107B0); W(0xffff0000,NO_Mask); 
//MB14 4x2
A(0x30110034); W(0xccccffff,NO_Mask); 
A(0x301107B4); W(0xffffdddd,NO_Mask); 
//MB15 4x2
A(0x30110038); W(0x66665555,NO_Mask); 
A(0x301107B8); W(0x99997777,NO_Mask); 
//MB16 4x2
A(0x3011003C); W(0x66665555,NO_Mask); 
A(0x301107BC); W(0xaaaacccc,NO_Mask); 

//M2_Chroma_result    
//No.1 Chroma 4x2MB 
A(0x25006000); R(0x11223344);
A(0x25006004); R(0x55556666);
//No.2 Chroma 4x2MB 
A(0x25006008); R(0x99995555);
A(0x2500600C); R(0x77886655);
//No.3 Chroma 4x2MB 
A(0x25006010); R(0x11112222);
A(0x25006014); R(0x33334444);
//No.4 Chroma 4x2MB 
A(0x25006018); R(0x55557777);
A(0x2500601C); R(0x44446666);
//No.5 Chroma 4x2MB 
A(0x25006020); R(0x99998888);
A(0x25006024); R(0x11112222);
//No.6 Chroma 4x2MB 
A(0x25006028); R(0x00009999);
A(0x2500602C); R(0x88889999);
//No.7 Chroma 4x2MB 
A(0x25006030); R(0x77779999);
A(0x25006034); R(0x8888aaaa);
//No.8 Chroma 4x2MB 
A(0x25006038); R(0x66664444);
A(0x2500603C); R(0x11117777);
//No.9 Chroma 4x2MB 
A(0x25006040); R(0x55555555);
A(0x25006044); R(0x22222222);
//No.10 Chroma 4x2MB 
A(0x25006048); R(0xffffffff);
A(0x2500604C); R(0x11111111);
//No.11 Chroma 4x2MB 
A(0x25006050); R(0xdddddddd);
A(0x25006054); R(0x44445555);
//No.12 Chroma 4x2MB 
A(0x25006058); R(0x55558888);
A(0x2500605C); R(0x11114444);
//No.13 Chroma 4x2MB 
A(0x25006060); R(0x0000ffff);
A(0x25006064); R(0xffff0000);
//No.14 Chroma 4x2MB 
A(0x25006068); R(0xccccffff);
A(0x2500606C); R(0xffffdddd);
//No.15 Chroma 4x2MB 
A(0x25006070); R(0x66665555);
A(0x25006074); R(0x99997777);
//No.16 Chroma 4x2MB 
A(0x25006078); R(0x66665555);
A(0x2500607C); R(0xaaaacccc);
core2end
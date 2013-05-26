core0begin
//Verification writing data of PAC0 to M2 shared memory;
A(0x2501D0B0); R(0x1341349a);
A(0x2501D0B4); R(0x13413492);
A(0x2501D0B8); R(0x13413493);
A(0x2501D0BC); R(0x13413494);

A(0x2501D080); R(0x13413495);
A(0x2501D084); R(0x13413496);
A(0x2501D088); R(0x13413497);
A(0x2501D08C); R(0x13413498);

A(0x2501D0F0); R(0x13413499);
A(0x2501D0F4); R(0x1341349b);
A(0x2501D0F8); R(0x1341349c);
A(0x2501D0FC); R(0x1341349d);

A(0x2501D0A0); R(0x13413490);
A(0x2501D0A4); R(0x13413491);
A(0x2501D0A8); R(0x1341342a);
A(0x2501D0AC); R(0x1341343a);

//M1 DMA0 partition;
//MB1
A(0x24000000); W(0x55229988,NO_Mask); 
A(0x24000780); W(0x11223344,NO_Mask);
A(0x24000F00); W(0x55687abc,NO_Mask);
A(0x24001680); W(0x76854321,NO_Mask);
//MB2
A(0x24000004); W(0x11223344,NO_Mask); 
A(0x24000784); W(0x56789abc,NO_Mask);
A(0x24000F04); W(0x55556666,NO_Mask);
A(0x24001684); W(0x77778888,NO_Mask);
//MB3
A(0x24000008); W(0x55667788,NO_Mask); 
A(0x24000788); W(0x44444444,NO_Mask);
A(0x24000F08); W(0x88888888,NO_Mask);
A(0x24001688); W(0x99999999,NO_Mask);
//MB4
A(0x2400000C); W(0x55667788,NO_Mask); 
A(0x2400078C); W(0x44444444,NO_Mask);
A(0x24000F0C); W(0x88888888,NO_Mask);
A(0x2400168C); W(0x99999999,NO_Mask);
//MB5
A(0x24000010); W(0x55667788,NO_Mask); 
A(0x24000790); W(0x99887766,NO_Mask);
A(0x24000F10); W(0xaabbccdd,NO_Mask);
A(0x24001690); W(0xccddeeff,NO_Mask);
//MB6
A(0x24000014); W(0x44556677,NO_Mask); 
A(0x24000794); W(0x99556644,NO_Mask);
A(0x24000F14); W(0x00005555,NO_Mask);
A(0x24001694); W(0x55550000,NO_Mask);
//MB7
A(0x24000018); W(0x99995555,NO_Mask); 
A(0x24000798); W(0xbbaaccdd,NO_Mask);
A(0x24000F18); W(0x66664444,NO_Mask);
A(0x24001698); W(0x778899aa,NO_Mask);
//MB8
A(0x2400001C); W(0x11111111,NO_Mask); 
A(0x2400079C); W(0x12345678,NO_Mask);
A(0x24000F1C); W(0x87654321,NO_Mask);
A(0x2400169C); W(0x11111111,NO_Mask);
//MB9
A(0x24000020); W(0x22222222,NO_Mask); 
A(0x240007A0); W(0x44446666,NO_Mask);
A(0x24000F20); W(0x55557777,NO_Mask);
A(0x240016A0); W(0x22222222,NO_Mask);
//MB10
A(0x24000024); W(0x33333333,NO_Mask); 
A(0x240007A4); W(0xeeeeaaaa,NO_Mask);
A(0x24000F24); W(0xaaaabbbb,NO_Mask);
A(0x240016A4); W(0x33333333,NO_Mask);
//MB11
A(0x24000028); W(0x44444444,NO_Mask); 
A(0x240007A8); W(0x00001111,NO_Mask);
A(0x24000F28); W(0x22220000,NO_Mask);
A(0x240016A8); W(0x77777777,NO_Mask);
//MB12
A(0x2400002C); W(0x88888888,NO_Mask); 
A(0x240007AC); W(0xaaaa1111,NO_Mask);
A(0x24000F2C); W(0x2222aaaa,NO_Mask);
A(0x240016AC); W(0x99999999,NO_Mask);
//MB13
A(0x24000030); W(0xccccdddd,NO_Mask); 
A(0x240007B0); W(0x99991111,NO_Mask);
A(0x24000F30); W(0x22229999,NO_Mask);
A(0x240016B0); W(0xaaaa4444,NO_Mask);
//MB14
A(0x24000034); W(0xffff0000,NO_Mask); 
A(0x240007B4); W(0xaaaa2222,NO_Mask);
A(0x24000F34); W(0x2222bbbb,NO_Mask);
A(0x240016B4); W(0x0000dddd,NO_Mask);
//MB15
A(0x24000038); W(0xddddaaaa,NO_Mask); 
A(0x240007B8); W(0x11111111,NO_Mask);
A(0x24000F38); W(0x33333333,NO_Mask);
A(0x240016B8); W(0xaaaadddd,NO_Mask);
//MB16
A(0x2400003C); W(0x99999999,NO_Mask); 
A(0x240007BC); W(0x55555555,NO_Mask);
A(0x24000F3C); W(0x77777777,NO_Mask);
A(0x240016BC); W(0xffffffff,NO_Mask);

//Chroma
//MB1 4x2
A(0x24004000); W(0x11223344,NO_Mask); 
A(0x24004780); W(0x55556666,NO_Mask); 
//MB2 4x2
A(0x24004004); W(0x99995555,NO_Mask); 
A(0x24004784); W(0x77886655,NO_Mask); 
//MB3 4x2
A(0x24004008); W(0x11112222,NO_Mask); 
A(0x24004788); W(0x33334444,NO_Mask); 
//MB4 4x2
A(0x2400400C); W(0x55557777,NO_Mask); 
A(0x2400478C); W(0x44446666,NO_Mask); 
//MB5 4x2
A(0x24004010); W(0x99998888,NO_Mask); 
A(0x24004790); W(0x11112222,NO_Mask); 
//MB6 4x2
A(0x24004014); W(0x00009999,NO_Mask); 
A(0x24004794); W(0x88889999,NO_Mask); 
//MB7 4x2
A(0x24004018); W(0x77779999,NO_Mask); 
A(0x24004798); W(0x8888aaaa,NO_Mask); 
//MB8 4x2
A(0x2400401C); W(0x66664444,NO_Mask); 
A(0x2400479C); W(0x11117777,NO_Mask); 
//MB9 4x2
A(0x24004020); W(0x55555555,NO_Mask); 
A(0x240047A0); W(0x22222222,NO_Mask); 
//MB10 4x2
A(0x24004024); W(0xffffffff,NO_Mask); 
A(0x240047A4); W(0x11111111,NO_Mask); 
//MB11 4x2
A(0x24004028); W(0xdddddddd,NO_Mask); 
A(0x240047A8); W(0x44445555,NO_Mask); 
//MB12 4x2
A(0x2400402C); W(0x55558888,NO_Mask); 
A(0x240047AC); W(0x11114444,NO_Mask); 
//MB13 4x2
A(0x24004030); W(0x0000ffff,NO_Mask); 
A(0x240047B0); W(0xffff0000,NO_Mask); 
//MB14 4x2
A(0x24004034); W(0xccccffff,NO_Mask); 
A(0x240047B4); W(0xffffdddd,NO_Mask); 
//MB15 4x2
A(0x24004038); W(0x66665555,NO_Mask); 
A(0x240047B8); W(0x99997777,NO_Mask); 
//MB16 4x2
A(0x2400403C); W(0x66665555,NO_Mask); 
A(0x240047BC); W(0xaaaacccc,NO_Mask); 


//M1_Luma_result
//No.1 Luma 4x4MB
A(0x2501D400); R(0x55229988);
A(0x2501D404); R(0x11223344);
A(0x2501D408); R(0x55687abc);
A(0x2501D40C); R(0x76854321);
//No.2 Luma 4x4MB
A(0x2501D410); R(0x11223344);
A(0x2501D414); R(0x56789abc);
A(0x2501D418); R(0x55556666);
A(0x2501D41C); R(0x77778888);
//No.3 Luma 4x4MB
A(0x2501D420); R(0x55667788);
A(0x2501D424); R(0x44444444);
A(0x2501D428); R(0x88888888);
A(0x2501D42C); R(0x99999999);
//No.4 Luma 4x4MB
A(0x2501D430); R(0x55667788);
A(0x2501D434); R(0x44444444);
A(0x2501D438); R(0x88888888);
A(0x2501D43C); R(0x99999999);
//No.5 Luma 4x4MB
A(0x2501D440); R(0x55667788);
A(0x2501D444); R(0x99887766);
A(0x2501D448); R(0xaabbccdd);
A(0x2501D44C); R(0xccddeeff);
//No.6 Luma 4x4MB
A(0x2501D450); R(0x44556677);
A(0x2501D454); R(0x99556644);
A(0x2501D458); R(0x00005555);
A(0x2501D45C); R(0x55550000);
//No.7 Luma 4x4MB
A(0x2501D460); R(0x99995555);
A(0x2501D464); R(0xbbaaccdd);
A(0x2501D468); R(0x66664444);
A(0x2501D46C); R(0x778899aa);
//No.8 Luma 4x4MB
A(0x2501D470); R(0x11111111);
A(0x2501D474); R(0x12345678);
A(0x2501D478); R(0x87654321);
A(0x2501D47C); R(0x11111111);
//No.9 Luma 4x4MB
A(0x2501D480); R(0x22222222);
A(0x2501D484); R(0x44446666);
A(0x2501D488); R(0x55557777);
A(0x2501D48C); R(0x22222222);
//No.10 Luma 4x4MB
A(0x2501D490); R(0x33333333);
A(0x2501D494); R(0xeeeeaaaa);
A(0x2501D498); R(0xaaaabbbb);
A(0x2501D49C); R(0x33333333);
//No.11 Luma 4x4MB
A(0x2501D4A0); R(0x44444444);
A(0x2501D4A4); R(0x00001111);
A(0x2501D4A8); R(0x22220000);
A(0x2501D4AC); R(0x77777777);
//No.12 Luma 4x4MB
A(0x2501D4B0); R(0x88888888);
A(0x2501D4B4); R(0xaaaa1111);
A(0x2501D4B8); R(0x2222aaaa);
A(0x2501D4BC); R(0x99999999);
//No.13 Luma 4x4MB
A(0x2501D4C0); R(0xccccdddd);
A(0x2501D4C4); R(0x99991111);
A(0x2501D4C8); R(0x22229999);
A(0x2501D4CC); R(0xaaaa4444);
//No.14 Luma 4x4MB
A(0x2501D4D0); R(0xffff0000);
A(0x2501D4D4); R(0xaaaa2222);
A(0x2501D4D8); R(0x2222bbbb);
A(0x2501D4DC); R(0x0000dddd);
//No.15 Luma 4x4MB
A(0x2501D4E0); R(0xddddaaaa);
A(0x2501D4E4); R(0x11111111);
A(0x2501D4E8); R(0x33333333);
A(0x2501D4EC); R(0xaaaadddd);
//No.16 Luma 4x4MB
A(0x2501D4F0); R(0x99999999);
A(0x2501D4F4); R(0x55555555);
A(0x2501D4F8); R(0x77777777);
A(0x2501D4FC); R(0xffffffff);

//M1_Chroma_result    
//No.1 Chroma 4x2MB 
A(0x2501D500); R(0x11223344);
A(0x2501D504); R(0x55556666);
//No.2 Chroma 4x2MB 
A(0x2501D508); R(0x99995555);
A(0x2501D50C); R(0x77886655);
//No.3 Chroma 4x2MB 
A(0x2501D510); R(0x11112222);
A(0x2501D514); R(0x33334444);
//No.4 Chroma 4x2MB 
A(0x2501D518); R(0x55557777);
A(0x2501D51C); R(0x44446666);
//No.5 Chroma 4x2MB 
A(0x2501D520); R(0x99998888);
A(0x2501D524); R(0x11112222);
//No.6 Chroma 4x2MB 
A(0x2501D528); R(0x00009999);
A(0x2501D52C); R(0x88889999);
//No.7 Chroma 4x2MB 
A(0x2501D530); R(0x77779999);
A(0x2501D534); R(0x8888aaaa);
//No.8 Chroma 4x2MB 
A(0x2501D538); R(0x66664444);
A(0x2501D53C); R(0x11117777);
//No.9 Chroma 4x2MB 
A(0x2501D540); R(0x55555555);
A(0x2501D544); R(0x22222222);
//No.10 Chroma 4x2MB 
A(0x2501D548); R(0xffffffff);
A(0x2501D54C); R(0x11111111);
//No.11 Chroma 4x2MB 
A(0x2501D550); R(0xdddddddd);
A(0x2501D554); R(0x44445555);
//No.12 Chroma 4x2MB 
A(0x2501D558); R(0x55558888);
A(0x2501D55C); R(0x11114444);
//No.13 Chroma 4x2MB 
A(0x2501D560); R(0x0000ffff);
A(0x2501D564); R(0xffff0000);
//No.14 Chroma 4x2MB 
A(0x2501D568); R(0xccccffff);
A(0x2501D56C); R(0xffffdddd);
//No.15 Chroma 4x2MB 
A(0x2501D570); R(0x66665555);
A(0x2501D574); R(0x99997777);
//No.16 Chroma 4x2MB 
A(0x2501D578); R(0x66665555);
A(0x2501D57C); R(0xaaaacccc);
core0end

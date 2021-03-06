core1begin
//Verification writing data of PAC1 to M2 shared memory;
A(0x25007100); R(0x1341349a);
A(0x25007104); R(0x13413492);
A(0x25007108); R(0x13413493);
A(0x2500710C); R(0x13413494);
A(0x25007130); R(0x13413495);
A(0x25007134); R(0x13413496);
A(0x25007138); R(0x13413497);
A(0x2500713C); R(0x13413498);
A(0x25007180); R(0x13413499);
A(0x25007184); R(0x1341349b);
A(0x25007188); R(0x1341349c);
A(0x2500718C); R(0x1341349d);
A(0x250071A0); R(0x13413490);
A(0x250071A4); R(0x13413491);
A(0x250071A8); R(0x1341342a);
A(0x250071AC); R(0x1341343a);

//M1 DMA0 partition;
//MB1
A(0x24100000); W(0x55229988,NO_Mask); 
A(0x24100780); W(0x11223344,NO_Mask);
A(0x24100F00); W(0x55687abc,NO_Mask);
A(0x24101680); W(0x76854321,NO_Mask);
//MB2
A(0x24100004); W(0x11223344,NO_Mask); 
A(0x24100784); W(0x56789abc,NO_Mask);
A(0x24100F04); W(0x55556666,NO_Mask);
A(0x24101684); W(0x77778888,NO_Mask);
//MB3
A(0x24100008); W(0x55667788,NO_Mask); 
A(0x24100788); W(0x11133322,NO_Mask);
A(0x24100F08); W(0x999aa111,NO_Mask);
A(0x24101688); W(0x33322111,NO_Mask);
//MB4
A(0x2410000C); W(0x55667788,NO_Mask); 
A(0x2410078C); W(0x11133322,NO_Mask);
A(0x24100F0C); W(0x999aa111,NO_Mask);
A(0x2410168C); W(0x33322111,NO_Mask);
//MB5
A(0x24100010); W(0x55667788,NO_Mask); 
A(0x24100790); W(0x99887766,NO_Mask);
A(0x24100F10); W(0xaabbccdd,NO_Mask);
A(0x24101690); W(0xccddeeff,NO_Mask);
//MB6
A(0x24100014); W(0x44556677,NO_Mask); 
A(0x24100794); W(0x99556644,NO_Mask);
A(0x24100F14); W(0x00005555,NO_Mask);
A(0x24101694); W(0x55550000,NO_Mask);
//MB7
A(0x24100018); W(0x99995555,NO_Mask); 
A(0x24100798); W(0xbbaaccdd,NO_Mask);
A(0x24100F18); W(0x66664444,NO_Mask);
A(0x24101698); W(0x778899aa,NO_Mask);
//MB8
A(0x2410001C); W(0x44466666,NO_Mask); 
A(0x2410079C); W(0x12345678,NO_Mask);
A(0x24100F1C); W(0x87654321,NO_Mask);
A(0x2410169C); W(0x44466666,NO_Mask);
//MB9
A(0x24100020); W(0x22222222,NO_Mask); 
A(0x241007A0); W(0x44446666,NO_Mask);
A(0x24100F20); W(0x55557777,NO_Mask);
A(0x241016A0); W(0x22222222,NO_Mask);
//MB10
A(0x24100024); W(0x33333333,NO_Mask); 
A(0x241007A4); W(0xeeeeaaaa,NO_Mask);
A(0x24100F24); W(0xaaaabbbb,NO_Mask);
A(0x241016A4); W(0x33333333,NO_Mask);
//MB11
A(0x24100028); W(0x11133322,NO_Mask); 
A(0x241007A8); W(0x00001111,NO_Mask);
A(0x24100F28); W(0x22220000,NO_Mask);
A(0x241016A8); W(0x8889999a,NO_Mask);
//MB12
A(0x2410002C); W(0x999aa111,NO_Mask); 
A(0x241007AC); W(0xaaaa1111,NO_Mask);
A(0x24100F2C); W(0x2222aaaa,NO_Mask);
A(0x241016AC); W(0x33322111,NO_Mask);
//MB13
A(0x24100030); W(0xccccdddd,NO_Mask); 
A(0x241007B0); W(0x99991111,NO_Mask);
A(0x24100F30); W(0x22229999,NO_Mask);
A(0x241016B0); W(0xaaaa4444,NO_Mask);
//MB14
A(0x24100034); W(0xffff0000,NO_Mask); 
A(0x241007B4); W(0xaaaa2222,NO_Mask);
A(0x24100F34); W(0x2222bbbb,NO_Mask);
A(0x241016B4); W(0x0000dddd,NO_Mask);
//MB15
A(0x24100038); W(0xddddaaaa,NO_Mask); 
A(0x241007B8); W(0x44466666,NO_Mask);
A(0x24100F38); W(0x33333333,NO_Mask);
A(0x241016B8); W(0xaaaadddd,NO_Mask);
//MB16
A(0x2410003C); W(0x33322111,NO_Mask); 
A(0x241007BC); W(0x55555555,NO_Mask);
A(0x24100F3C); W(0x8889999a,NO_Mask);
A(0x241016BC); W(0xffffffff,NO_Mask);

//Chroma
//MB1 4x2
A(0x24104000); W(0x11223344,NO_Mask); 
A(0x24104780); W(0x55556666,NO_Mask); 
//MB2 4x2
A(0x24104004); W(0x99995555,NO_Mask); 
A(0x24104784); W(0x77886655,NO_Mask); 
//MB3 4x2
A(0x24104008); W(0x11112222,NO_Mask); 
A(0x24104788); W(0x33334444,NO_Mask); 
//MB4 4x2
A(0x2410400C); W(0x55557777,NO_Mask); 
A(0x2410478C); W(0x44446666,NO_Mask); 
//MB5 4x2
A(0x24104010); W(0x99998888,NO_Mask); 
A(0x24104790); W(0x11112222,NO_Mask); 
//MB6 4x2
A(0x24104014); W(0x00009999,NO_Mask); 
A(0x24104794); W(0x88889999,NO_Mask); 
//MB7 4x2
A(0x24104018); W(0x77779999,NO_Mask); 
A(0x24104798); W(0x8888aaaa,NO_Mask); 
//MB8 4x2
A(0x2410401C); W(0x66664444,NO_Mask); 
A(0x2410479C); W(0x11117777,NO_Mask); 
//MB9 4x2
A(0x24104020); W(0x55555555,NO_Mask); 
A(0x241047A0); W(0x22222222,NO_Mask); 
//MB10 4x2
A(0x24104024); W(0xffffffff,NO_Mask); 
A(0x241047A4); W(0x44466666,NO_Mask); 
//MB11 4x2
A(0x24104028); W(0xdddddddd,NO_Mask); 
A(0x241047A8); W(0x44445555,NO_Mask); 
//MB12 4x2
A(0x2410402C); W(0x55558888,NO_Mask); 
A(0x241047AC); W(0x11114444,NO_Mask); 
//MB13 4x2
A(0x24104030); W(0x0000ffff,NO_Mask); 
A(0x241047B0); W(0xffff0000,NO_Mask); 
//MB14 4x2
A(0x24104034); W(0xccccffff,NO_Mask); 
A(0x241047B4); W(0xffffdddd,NO_Mask); 
//MB15 4x2
A(0x24104038); W(0x66665555,NO_Mask); 
A(0x241047B8); W(0x99997777,NO_Mask); 
//MB16 4x2
A(0x2410403C); W(0x66665555,NO_Mask); 
A(0x241047BC); W(0xaaaacccc,NO_Mask); 


//M1_Luma_result
//No.1 Luma 4x4MB
A(0x25007600); R(0x55229988);
A(0x25007604); R(0x11223344);
A(0x25007608); R(0x55687abc);
A(0x2500760C); R(0x76854321);
//No.2 Luma 4x4MB
A(0x25007610); R(0x11223344);
A(0x25007614); R(0x56789abc);
A(0x25007618); R(0x55556666);
A(0x2500761C); R(0x77778888);
//No.3 Luma 4x4MB
A(0x25007620); R(0x55667788);
A(0x25007624); R(0x11133322);
A(0x25007628); R(0x999aa111);
A(0x2500762C); R(0x33322111);
//No.4 Luma 4x4MB
A(0x25007630); R(0x55667788);
A(0x25007634); R(0x11133322);
A(0x25007638); R(0x999aa111);
A(0x2500763C); R(0x33322111);
//No.5 Luma 4x4MB
A(0x25007640); R(0x55667788);
A(0x25007644); R(0x99887766);
A(0x25007648); R(0xaabbccdd);
A(0x2500764C); R(0xccddeeff);
//No.6 Luma 4x4MB
A(0x25007650); R(0x44556677);
A(0x25007654); R(0x99556644);
A(0x25007658); R(0x00005555);
A(0x2500765C); R(0x55550000);
//No.7 Luma 4x4MB
A(0x25007660); R(0x99995555);
A(0x25007664); R(0xbbaaccdd);
A(0x25007668); R(0x66664444);
A(0x2500766C); R(0x778899aa);
//No.8 Luma 4x4MB
A(0x25007670); R(0x44466666);
A(0x25007674); R(0x12345678);
A(0x25007678); R(0x87654321);
A(0x2500767C); R(0x44466666);
//No.9 Luma 4x4MB
A(0x25007680); R(0x22222222);
A(0x25007684); R(0x44446666);
A(0x25007688); R(0x55557777);
A(0x2500768C); R(0x22222222);
//No.10 Luma 4x4MB
A(0x25007690); R(0x33333333);
A(0x25007694); R(0xeeeeaaaa);
A(0x25007698); R(0xaaaabbbb);
A(0x2500769C); R(0x33333333);
//No.11 Luma 4x4MB
A(0x250076A0); R(0x11133322);
A(0x250076A4); R(0x00001111);
A(0x250076A8); R(0x22220000);
A(0x250076AC); R(0x8889999a);
//No.12 Luma 4x4MB
A(0x250076B0); R(0x999aa111);
A(0x250076B4); R(0xaaaa1111);
A(0x250076B8); R(0x2222aaaa);
A(0x250076BC); R(0x33322111);
//No.13 Luma 4x4MB
A(0x250076C0); R(0xccccdddd);
A(0x250076C4); R(0x99991111);
A(0x250076C8); R(0x22229999);
A(0x250076CC); R(0xaaaa4444);
//No.14 Luma 4x4MB
A(0x250076D0); R(0xffff0000);
A(0x250076D4); R(0xaaaa2222);
A(0x250076D8); R(0x2222bbbb);
A(0x250076DC); R(0x0000dddd);
//No.15 Luma 4x4MB
A(0x250076E0); R(0xddddaaaa);
A(0x250076E4); R(0x44466666);
A(0x250076E8); R(0x33333333);
A(0x250076EC); R(0xaaaadddd);
//No.16 Luma 4x4MB
A(0x250076F0); R(0x33322111);
A(0x250076F4); R(0x55555555);
A(0x250076F8); R(0x8889999a);
A(0x250076FC); R(0xffffffff);

//M1_Chroma_result    
//No.1 Chroma 4x2MB 
A(0x25007700); R(0x11223344);
A(0x25007704); R(0x55556666);
//No.2 Chroma 4x2MB 
A(0x25007708); R(0x99995555);
A(0x2500770C); R(0x77886655);
//No.3 Chroma 4x2MB 
A(0x25007710); R(0x11112222);
A(0x25007714); R(0x33334444);
//No.4 Chroma 4x2MB 
A(0x25007718); R(0x55557777);
A(0x2500771C); R(0x44446666);
//No.5 Chroma 4x2MB 
A(0x25007720); R(0x99998888);
A(0x25007724); R(0x11112222);
//No.6 Chroma 4x2MB 
A(0x25007728); R(0x00009999);
A(0x2500772C); R(0x88889999);
//No.7 Chroma 4x2MB 
A(0x25007730); R(0x77779999);
A(0x25007734); R(0x8888aaaa);
//No.8 Chroma 4x2MB 
A(0x25007738); R(0x66664444);
A(0x2500773C); R(0x11117777);
//No.9 Chroma 4x2MB 
A(0x25007740); R(0x55555555);
A(0x25007744); R(0x22222222);
//No.10 Chroma 4x2MB 
A(0x25007748); R(0xffffffff);
A(0x2500774C); R(0x44466666);
//No.11 Chroma 4x2MB 
A(0x25007750); R(0xdddddddd);
A(0x25007754); R(0x44445555);
//No.12 Chroma 4x2MB 
A(0x25007758); R(0x55558888);
A(0x2500775C); R(0x11114444);
//No.13 Chroma 4x2MB 
A(0x25007760); R(0x0000ffff);
A(0x25007764); R(0xffff0000);
//No.14 Chroma 4x2MB 
A(0x25007768); R(0xccccffff);
A(0x2500776C); R(0xffffdddd);
//No.15 Chroma 4x2MB 
A(0x25007770); R(0x66665555);
A(0x25007774); R(0x99997777);
//No.16 Chroma 4x2MB 
A(0x25007778); R(0x66665555);
A(0x2500777C); R(0xaaaacccc);
core1end

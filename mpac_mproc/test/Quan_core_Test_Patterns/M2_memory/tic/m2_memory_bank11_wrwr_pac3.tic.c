core3begin
//Write data to 25005000 to polling.
A(0x25005000); W(0x12121212);
\\Write data to M2 Memory;
A(0x250173C0); W(0x3005F001,NO_Mask);
A(0x250173C4); W(0x3005F01A,NO_Mask);
A(0x250173C8); W(0x3005F000,NO_Mask);
A(0x250173CC); W(0x3005F01A,NO_Mask);
A(0x25017380); W(0x3005F000,NO_Mask);
A(0x25017384); W(0x3005F01A,NO_Mask);
A(0x25017388); W(0x3005F000,NO_Mask);
A(0x2501738C); W(0x3005F01A,NO_Mask);
A(0x250173F0); W(0x3005F000,NO_Mask);
A(0x250173F4); W(0x3005F01A,NO_Mask);
A(0x250173F8); W(0x3005F000,NO_Mask);
A(0x250173FC); W(0x3005F01A,NO_Mask);
A(0x250173A0); W(0x3005F000,NO_Mask);
A(0x250173A4); W(0x3005F01A,NO_Mask);
A(0x250173A8); W(0x3005F000,NO_Mask);
A(0x250173AC); W(0x3005F01A,NO_Mask);

\\Verification;
\\Read data from M2 Memory;
A(0x243013C0); R(0x3005F001);
A(0x243013C4); R(0x3005F01A);
A(0x243013C8); R(0x3005F000);
A(0x243013CC); R(0x3005F01A);
A(0x24301380); R(0x3005F000);
A(0x24301384); R(0x3005F01A);
A(0x24301388); R(0x3005F000);
A(0x2430138C); R(0x3005F01A);
A(0x243013F0); R(0x3005F000);
A(0x243013F4); R(0x3005F01A);
A(0x243013F8); R(0x3005F000);
A(0x243013FC); R(0x3005F01A);
A(0x243013A0); R(0x3005F000);
A(0x243013A4); R(0x3005F01A);
A(0x243013A8); R(0x3005F000);
A(0x243013AC); R(0x3005F01A);

//Chroma
//MB1 4x2
A(0x25017000); W(0x11223344,NO_Mask); 
A(0x25017780); W(0x55556666,NO_Mask); 
//MB2 4x2
A(0x25017004); W(0x99995555,NO_Mask); 
A(0x25017784); W(0x77886655,NO_Mask); 
//MB3 4x2
A(0x25017008); W(0x11112222,NO_Mask); 
A(0x25017788); W(0x33334444,NO_Mask); 
//MB4 4x2
A(0x2501700C); W(0x55557777,NO_Mask); 
A(0x2501778C); W(0x44446666,NO_Mask); 
//MB5 4x2
A(0x25017010); W(0x99998888,NO_Mask); 
A(0x25017790); W(0x11112222,NO_Mask); 
//MB6 4x2
A(0x25017014); W(0x00009999,NO_Mask); 
A(0x25017794); W(0x88889999,NO_Mask); 
//MB7 4x2
A(0x25017018); W(0x77779999,NO_Mask); 
A(0x25017798); W(0x8888aaaa,NO_Mask); 
//MB8 4x2
A(0x2501701C); W(0x66664444,NO_Mask); 
A(0x2501779C); W(0x11117777,NO_Mask); 
//MB9 4x2
A(0x25017020); W(0x55555555,NO_Mask); 
A(0x250177A0); W(0x22222222,NO_Mask); 
//MB10 4x2
A(0x25017024); W(0xffffffff,NO_Mask); 
A(0x250177A4); W(0x11111111,NO_Mask); 
//MB11 4x2
A(0x25017028); W(0xdddddddd,NO_Mask); 
A(0x250177A8); W(0x44445555,NO_Mask); 
//MB12 4x2
A(0x2501702C); W(0x55558888,NO_Mask); 
A(0x250177AC); W(0x11114444,NO_Mask); 
//MB13 4x2
A(0x25017030); W(0x0000ffff,NO_Mask); 
A(0x250177B0); W(0xffff0000,NO_Mask); 
//MB14 4x2
A(0x25017034); W(0xccccffff,NO_Mask); 
A(0x250177B4); W(0xffffdddd,NO_Mask); 
//MB15 4x2
A(0x25017038); W(0x66665555,NO_Mask); 
A(0x250177B8); W(0x99997777,NO_Mask); 
//MB16 4x2
A(0x2501703C); W(0x66665555,NO_Mask); 
A(0x250177BC); W(0xaaaacccc,NO_Mask); 


//M1_Chroma_result    
//No.1 Chroma 4x2MB 
A(0x24301000); R(0x11223344);
A(0x24301004); R(0x55556666);
//No.2 Chroma 4x2MB 
A(0x24301008); R(0x99995555);
A(0x2430100C); R(0x77886655);
//No.3 Chroma 4x2MB 
A(0x24301010); R(0x11112222);
A(0x24301014); R(0x33334444);
//No.4 Chroma 4x2MB 
A(0x24301018); R(0x55557777);
A(0x2430101C); R(0x44446666);
//No.5 Chroma 4x2MB 
A(0x24301020); R(0x99998888);
A(0x24301024); R(0x11112222);
//No.6 Chroma 4x2MB 
A(0x24301028); R(0x00009999);
A(0x2430102C); R(0x88889999);
//No.7 Chroma 4x2MB 
A(0x24301030); R(0x77779999);
A(0x24301034); R(0x8888aaaa);
//No.8 Chroma 4x2MB 
A(0x24301038); R(0x66664444);
A(0x2430103C); R(0x11117777);
//No.9 Chroma 4x2MB 
A(0x24301040); R(0x55555555);
A(0x24301044); R(0x22222222);
//No.10 Chroma 4x2MB 
A(0x24301048); R(0xffffffff);
A(0x2430104C); R(0x11111111);
//No.11 Chroma 4x2MB 
A(0x24301050); R(0xdddddddd);
A(0x24301054); R(0x44445555);
//No.12 Chroma 4x2MB 
A(0x24301058); R(0x55558888);
A(0x2430105C); R(0x11114444);
//No.13 Chroma 4x2MB 
A(0x24301060); R(0x0000ffff);
A(0x24301064); R(0xffff0000);
//No.14 Chroma 4x2MB 
A(0x24301068); R(0xccccffff);
A(0x2430106C); R(0xffffdddd);
//No.15 Chroma 4x2MB 
A(0x24301070); R(0x66665555);
A(0x24301074); R(0x99997777);
//No.16 Chroma 4x2MB 
A(0x24301078); R(0x66665555);
A(0x2430107C); R(0xaaaacccc); 

//M2 Chroma;
//Chroma
//MB1 4x2
A(0x25016000); W(0x11223344,NO_Mask); 
A(0x25016780); W(0x55556666,NO_Mask); 
//MB2 4x2
A(0x25016004); W(0x99995555,NO_Mask); 
A(0x25016784); W(0x77886655,NO_Mask); 
//MB3 4x2
A(0x25016008); W(0x11112222,NO_Mask); 
A(0x25016788); W(0x33334444,NO_Mask); 
//MB4 4x2
A(0x2501600C); W(0x55557777,NO_Mask); 
A(0x2501678C); W(0x44446666,NO_Mask); 
//MB5 4x2
A(0x25016010); W(0x99998888,NO_Mask); 
A(0x25016790); W(0x11112222,NO_Mask); 
//MB6 4x2
A(0x25016014); W(0x00009999,NO_Mask); 
A(0x25016794); W(0x88889999,NO_Mask); 
//MB7 4x2
A(0x25016018); W(0x77779999,NO_Mask); 
A(0x25016798); W(0x8888aaaa,NO_Mask); 
//MB8 4x2
A(0x2501601C); W(0x66664444,NO_Mask); 
A(0x2501679C); W(0x11117777,NO_Mask); 
//MB9 4x2
A(0x25016020); W(0x55555555,NO_Mask); 
A(0x250167A0); W(0x22222222,NO_Mask); 
//MB10 4x2
A(0x25016024); W(0xffffffff,NO_Mask); 
A(0x250167A4); W(0x11111111,NO_Mask); 
//MB11 4x2
A(0x25016028); W(0xdddddddd,NO_Mask); 
A(0x250167A8); W(0x44445555,NO_Mask); 
//MB12 4x2
A(0x2501602C); W(0x55558888,NO_Mask); 
A(0x250167AC); W(0x11114444,NO_Mask); 
//MB13 4x2
A(0x25016030); W(0x0000ffff,NO_Mask); 
A(0x250167B0); W(0xffff0000,NO_Mask); 
//MB14 4x2
A(0x25016034); W(0xccccffff,NO_Mask); 
A(0x250167B4); W(0xffffdddd,NO_Mask); 
//MB15 4x2
A(0x25016038); W(0x66665555,NO_Mask); 
A(0x250167B8); W(0x99997777,NO_Mask); 
//MB16 4x2
A(0x2501603C); W(0x66665555,NO_Mask); 
A(0x250167BC); W(0xaaaacccc,NO_Mask); 

//M2_Chroma_result    
//No.1 Chroma 4x2MB 
A(0x24300000); R(0x11223344);
A(0x24300004); R(0x55556666);
//No.2 Chroma 4x2MB 
A(0x24300008); R(0x99995555);
A(0x2430000C); R(0x77886655);
//No.3 Chroma 4x2MB 
A(0x24300010); R(0x11112222);
A(0x24300014); R(0x33334444);
//No.4 Chroma 4x2MB 
A(0x24300018); R(0x55557777);
A(0x2430001C); R(0x44446666);
//No.5 Chroma 4x2MB 
A(0x24300020); R(0x99998888);
A(0x24300024); R(0x11112222);
//No.6 Chroma 4x2MB 
A(0x24300028); R(0x00009999);
A(0x2430002C); R(0x88889999);
//No.7 Chroma 4x2MB 
A(0x24300030); R(0x77779999);
A(0x24300034); R(0x8888aaaa);
//No.8 Chroma 4x2MB 
A(0x24300038); R(0x66664444);
A(0x2430003C); R(0x11117777);
//No.9 Chroma 4x2MB 
A(0x24300040); R(0x55555555);
A(0x24300044); R(0x22222222);
//No.10 Chroma 4x2MB 
A(0x24300048); R(0xffffffff);
A(0x2430004C); R(0x11111111);
//No.11 Chroma 4x2MB 
A(0x24300050); R(0xdddddddd);
A(0x24300054); R(0x44445555);
//No.12 Chroma 4x2MB 
A(0x24300058); R(0x55558888);
A(0x2430005C); R(0x11114444);
//No.13 Chroma 4x2MB 
A(0x24300060); R(0x0000ffff);
A(0x24300064); R(0xffff0000);
//No.14 Chroma 4x2MB 
A(0x24300068); R(0xccccffff);
A(0x2430006C); R(0xffffdddd);
//No.15 Chroma 4x2MB 
A(0x24300070); R(0x66665555);
A(0x24300074); R(0x99997777);
//No.16 Chroma 4x2MB 
A(0x24300078); R(0x66665555);
A(0x2430007C); R(0xaaaacccc);
core3end

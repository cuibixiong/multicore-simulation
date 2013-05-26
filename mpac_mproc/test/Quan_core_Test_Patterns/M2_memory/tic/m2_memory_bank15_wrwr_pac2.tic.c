core2begin
//Verification writing data of PAC1 to M2 shared memory;
A(0x2501F200); R(0x1341349a);
A(0x2501F204); R(0x13413492);
A(0x2501F208); R(0x13413493);
A(0x2501F20C); R(0x13413494);
A(0x2501F230); R(0x13413495);
A(0x2501F234); R(0x13413496);
A(0x2501F238); R(0x13413497);
A(0x2501F23C); R(0x13413498);
A(0x2501F280); R(0x13413499);
A(0x2501F284); R(0x1341349b);
A(0x2501F288); R(0x1341349c);
A(0x2501F28C); R(0x1341349d);
A(0x2501F2A0); R(0x13413490);
A(0x2501F2A4); R(0x13413491);
A(0x2501F2A8); R(0x1341342a);
A(0x2501F2AC); R(0x1341343a); 

//M1 DMA0 partition;
//MB1
A(0x24200000); W(0x55229988,NO_Mask); 
A(0x24200780); W(0x11223344,NO_Mask);
A(0x24200F00); W(0x55687abc,NO_Mask);
A(0x24201680); W(0x76854321,NO_Mask);
//MB2
A(0x24200004); W(0x11223344,NO_Mask); 
A(0x24200784); W(0x56789abc,NO_Mask);
A(0x24200F04); W(0x55556666,NO_Mask);
A(0x24201684); W(0x77778888,NO_Mask);
//MB3
A(0x24200008); W(0x55667788,NO_Mask); 
A(0x24200788); W(0x44444444,NO_Mask);
A(0x24200F08); W(0x88888888,NO_Mask);
A(0x24201688); W(0x99999999,NO_Mask);
//MB4
A(0x2420000C); W(0x55667788,NO_Mask); 
A(0x2420078C); W(0x44444444,NO_Mask);
A(0x24200F0C); W(0x88888888,NO_Mask);
A(0x2420168C); W(0x99999999,NO_Mask);
//MB5
A(0x24200010); W(0x55667788,NO_Mask); 
A(0x24200790); W(0x99887766,NO_Mask);
A(0x24200F10); W(0xaabbccdd,NO_Mask);
A(0x24201690); W(0xccddeeff,NO_Mask);
//MB6
A(0x24200014); W(0x44556677,NO_Mask); 
A(0x24200794); W(0x99556644,NO_Mask);
A(0x24200F14); W(0x00005555,NO_Mask);
A(0x24201694); W(0x55550000,NO_Mask);
//MB7
A(0x24200018); W(0x99995555,NO_Mask); 
A(0x24200798); W(0xbbaaccdd,NO_Mask);
A(0x24200F18); W(0x66664444,NO_Mask);
A(0x24201698); W(0x778899aa,NO_Mask);
//MB8
A(0x2420001C); W(0x11111111,NO_Mask); 
A(0x2420079C); W(0x12345678,NO_Mask);
A(0x24200F1C); W(0x87654321,NO_Mask);
A(0x2420169C); W(0x11111111,NO_Mask);
//MB9
A(0x24200020); W(0x22222222,NO_Mask); 
A(0x242007A0); W(0x44446666,NO_Mask);
A(0x24200F20); W(0x55557777,NO_Mask);
A(0x242016A0); W(0x22222222,NO_Mask);
//MB10
A(0x24200024); W(0x33333333,NO_Mask); 
A(0x242007A4); W(0xeeeeaaaa,NO_Mask);
A(0x24200F24); W(0xaaaabbbb,NO_Mask);
A(0x242016A4); W(0x33333333,NO_Mask);
//MB11
A(0x24200028); W(0x44444444,NO_Mask); 
A(0x242007A8); W(0x00001111,NO_Mask);
A(0x24200F28); W(0x22220000,NO_Mask);
A(0x242016A8); W(0x77777777,NO_Mask);
//MB12
A(0x2420002C); W(0x88888888,NO_Mask); 
A(0x242007AC); W(0xaaaa1111,NO_Mask);
A(0x24200F2C); W(0x2222aaaa,NO_Mask);
A(0x242016AC); W(0x99999999,NO_Mask);
//MB13
A(0x24200030); W(0xccccdddd,NO_Mask); 
A(0x242007B0); W(0x99991111,NO_Mask);
A(0x24200F30); W(0x22229999,NO_Mask);
A(0x242016B0); W(0xaaaa4444,NO_Mask);
//MB14
A(0x24200034); W(0xffff0000,NO_Mask); 
A(0x242007B4); W(0xaaaa2222,NO_Mask);
A(0x24200F34); W(0x2222bbbb,NO_Mask);
A(0x242016B4); W(0x0000dddd,NO_Mask);
//MB15
A(0x24200038); W(0xddddaaaa,NO_Mask); 
A(0x242007B8); W(0x11111111,NO_Mask);
A(0x24200F38); W(0x33333333,NO_Mask);
A(0x242016B8); W(0xaaaadddd,NO_Mask);
//MB16
A(0x2420003C); W(0x99999999,NO_Mask); 
A(0x242007BC); W(0x55555555,NO_Mask);
A(0x24200F3C); W(0x77777777,NO_Mask);
A(0x242016BC); W(0xffffffff,NO_Mask);

//Chroma
//MB1 4x2
A(0x24204000); W(0x11223344,NO_Mask); 
A(0x24204780); W(0x55556666,NO_Mask); 
//MB2 4x2
A(0x24204004); W(0x99995555,NO_Mask); 
A(0x24204784); W(0x77886655,NO_Mask); 
//MB3 4x2
A(0x24204008); W(0x11112222,NO_Mask); 
A(0x24204788); W(0x33334444,NO_Mask); 
//MB4 4x2
A(0x2420400C); W(0x55557777,NO_Mask); 
A(0x2420478C); W(0x44446666,NO_Mask); 
//MB5 4x2
A(0x24204010); W(0x99998888,NO_Mask); 
A(0x24204790); W(0x11112222,NO_Mask); 
//MB6 4x2
A(0x24204014); W(0x00009999,NO_Mask); 
A(0x24204794); W(0x88889999,NO_Mask); 
//MB7 4x2
A(0x24204018); W(0x77779999,NO_Mask); 
A(0x24204798); W(0x8888aaaa,NO_Mask); 
//MB8 4x2
A(0x2420401C); W(0x66664444,NO_Mask); 
A(0x2420479C); W(0x11117777,NO_Mask); 
//MB9 4x2
A(0x24204020); W(0x55555555,NO_Mask); 
A(0x242047A0); W(0x22222222,NO_Mask); 
//MB10 4x2
A(0x24204024); W(0xffffffff,NO_Mask); 
A(0x242047A4); W(0x11111111,NO_Mask); 
//MB11 4x2
A(0x24204028); W(0xdddddddd,NO_Mask); 
A(0x242047A8); W(0x44445555,NO_Mask); 
//MB12 4x2
A(0x2420402C); W(0x55558888,NO_Mask); 
A(0x242047AC); W(0x11114444,NO_Mask); 
//MB13 4x2
A(0x24204030); W(0x0000ffff,NO_Mask); 
A(0x242047B0); W(0xffff0000,NO_Mask); 
//MB14 4x2
A(0x24204034); W(0xccccffff,NO_Mask); 
A(0x242047B4); W(0xffffdddd,NO_Mask); 
//MB15 4x2
A(0x24204038); W(0x66665555,NO_Mask); 
A(0x242047B8); W(0x99997777,NO_Mask); 
//MB16 4x2
A(0x2420403C); W(0x66665555,NO_Mask); 
A(0x242047BC); W(0xaaaacccc,NO_Mask); 


//M1_Luma_result
//No.1 Luma 4x4MB
A(0x2501F800); R(0x55229988);
A(0x2501F804); R(0x11223344);
A(0x2501F808); R(0x55687abc);
A(0x2501F80C); R(0x76854321);
//No.2 Luma 4x4MB
A(0x2501F810); R(0x11223344);
A(0x2501F814); R(0x56789abc);
A(0x2501F818); R(0x55556666);
A(0x2501F81C); R(0x77778888);
//No.3 Luma 4x4MB
A(0x2501F820); R(0x55667788);
A(0x2501F824); R(0x44444444);
A(0x2501F828); R(0x88888888);
A(0x2501F82C); R(0x99999999);
//No.4 Luma 4x4MB
A(0x2501F830); R(0x55667788);
A(0x2501F834); R(0x44444444);
A(0x2501F838); R(0x88888888);
A(0x2501F83C); R(0x99999999);
//No.5 Luma 4x4MB
A(0x2501F840); R(0x55667788);
A(0x2501F844); R(0x99887766);
A(0x2501F848); R(0xaabbccdd);
A(0x2501F84C); R(0xccddeeff);
//No.6 Luma 4x4MB
A(0x2501F850); R(0x44556677);
A(0x2501F854); R(0x99556644);
A(0x2501F858); R(0x00005555);
A(0x2501F85C); R(0x55550000);
//No.7 Luma 4x4MB
A(0x2501F860); R(0x99995555);
A(0x2501F864); R(0xbbaaccdd);
A(0x2501F868); R(0x66664444);
A(0x2501F86C); R(0x778899aa);
//No.8 Luma 4x4MB
A(0x2501F870); R(0x11111111);
A(0x2501F874); R(0x12345678);
A(0x2501F878); R(0x87654321);
A(0x2501F87C); R(0x11111111);
//No.9 Luma 4x4MB
A(0x2501F880); R(0x22222222);
A(0x2501F884); R(0x44446666);
A(0x2501F888); R(0x55557777);
A(0x2501F88C); R(0x22222222);
//No.10 Luma 4x4MB
A(0x2501F890); R(0x33333333);
A(0x2501F894); R(0xeeeeaaaa);
A(0x2501F898); R(0xaaaabbbb);
A(0x2501F89C); R(0x33333333);
//No.11 Luma 4x4MB
A(0x2501F8A0); R(0x44444444);
A(0x2501F8A4); R(0x00001111);
A(0x2501F8A8); R(0x22220000);
A(0x2501F8AC); R(0x77777777);
//No.12 Luma 4x4MB
A(0x2501F8B0); R(0x88888888);
A(0x2501F8B4); R(0xaaaa1111);
A(0x2501F8B8); R(0x2222aaaa);
A(0x2501F8BC); R(0x99999999);
//No.13 Luma 4x4MB
A(0x2501F8C0); R(0xccccdddd);
A(0x2501F8C4); R(0x99991111);
A(0x2501F8C8); R(0x22229999);
A(0x2501F8CC); R(0xaaaa4444);
//No.14 Luma 4x4MB
A(0x2501F8D0); R(0xffff0000);
A(0x2501F8D4); R(0xaaaa2222);
A(0x2501F8D8); R(0x2222bbbb);
A(0x2501F8DC); R(0x0000dddd);
//No.15 Luma 4x4MB
A(0x2501F8E0); R(0xddddaaaa);
A(0x2501F8E4); R(0x11111111);
A(0x2501F8E8); R(0x33333333);
A(0x2501F8EC); R(0xaaaadddd);
//No.16 Luma 4x4MB
A(0x2501F8F0); R(0x99999999);
A(0x2501F8F4); R(0x55555555);
A(0x2501F8F8); R(0x77777777);
A(0x2501F8FC); R(0xffffffff);

//M1_Chroma_result    
//No.1 Chroma 4x2MB 
A(0x2501F900); R(0x11223344);
A(0x2501F904); R(0x55556666);
//No.2 Chroma 4x2MB 
A(0x2501F908); R(0x99995555);
A(0x2501F90C); R(0x77886655);
//No.3 Chroma 4x2MB 
A(0x2501F910); R(0x11112222);
A(0x2501F914); R(0x33334444);
//No.4 Chroma 4x2MB 
A(0x2501F918); R(0x55557777);
A(0x2501F91C); R(0x44446666);
//No.5 Chroma 4x2MB 
A(0x2501F920); R(0x99998888);
A(0x2501F924); R(0x11112222);
//No.6 Chroma 4x2MB 
A(0x2501F928); R(0x00009999);
A(0x2501F92C); R(0x88889999);
//No.7 Chroma 4x2MB 
A(0x2501F930); R(0x77779999);
A(0x2501F934); R(0x8888aaaa);
//No.8 Chroma 4x2MB 
A(0x2501F938); R(0x66664444);
A(0x2501F93C); R(0x11117777);
//No.9 Chroma 4x2MB 
A(0x2501F940); R(0x55555555);
A(0x2501F944); R(0x22222222);
//No.10 Chroma 4x2MB 
A(0x2501F948); R(0xffffffff);
A(0x2501F94C); R(0x11111111);
//No.11 Chroma 4x2MB 
A(0x2501F950); R(0xdddddddd);
A(0x2501F954); R(0x44445555);
//No.12 Chroma 4x2MB 
A(0x2501F958); R(0x55558888);
A(0x2501F95C); R(0x11114444);
//No.13 Chroma 4x2MB 
A(0x2501F960); R(0x0000ffff);
A(0x2501F964); R(0xffff0000);
//No.14 Chroma 4x2MB 
A(0x2501F968); R(0xccccffff);
A(0x2501F96C); R(0xffffdddd);
//No.15 Chroma 4x2MB 
A(0x2501F970); R(0x66665555);
A(0x2501F974); R(0x99997777);
//No.16 Chroma 4x2MB 
A(0x2501F978); R(0x66665555);
A(0x2501F97C); R(0xaaaacccc);
core2end

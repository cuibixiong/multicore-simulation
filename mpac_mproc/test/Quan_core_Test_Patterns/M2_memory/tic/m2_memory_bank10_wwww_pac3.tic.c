core3begin
//Write data to 25005000 to polling.
A(0x25005000); W(0x12121212);
//Verification writing data of PAC1 to M2 shared memory;
A(0x25015300); R(0x1341349a);
A(0x25015304); R(0x13413492);
A(0x25015308); R(0x13413493);
A(0x2501530C); R(0x13413494);
A(0x25015330); R(0x13413495);
A(0x25015334); R(0x13413496);
A(0x25015338); R(0x13413497);
A(0x2501533C); R(0x13413498);
A(0x25015380); R(0x13413499);
A(0x25015384); R(0x1341349b);
A(0x25015388); R(0x1341349c);
A(0x2501538C); R(0x1341349d);
A(0x250153A0); R(0x13413490);
A(0x250153A4); R(0x13413491);
A(0x250153A8); R(0x1341342a);
A(0x250153AC); R(0x1341343a);

//M1 DMA0 partition;
//MB1
A(0x24300000); W(0x55229988,NO_Mask); 
A(0x24300780); W(0x11223344,NO_Mask);
A(0x24300F00); W(0x55687abc,NO_Mask);
A(0x24301680); W(0x76854321,NO_Mask);
//MB2
A(0x24300004); W(0x11223344,NO_Mask); 
A(0x24300784); W(0x56789abc,NO_Mask);
A(0x24300F04); W(0x55556666,NO_Mask);
A(0x24301684); W(0x77778888,NO_Mask);
//MB3
A(0x24300008); W(0x55667788,NO_Mask); 
A(0x24300788); W(0x11133322,NO_Mask);
A(0x24300F08); W(0x999aa111,NO_Mask);
A(0x24301688); W(0x33322111,NO_Mask);
//MB4
A(0x2430000C); W(0x55667788,NO_Mask); 
A(0x2430078C); W(0x11133322,NO_Mask);
A(0x24300F0C); W(0x999aa111,NO_Mask);
A(0x2430168C); W(0x33322111,NO_Mask);
//MB5
A(0x24300010); W(0x55667788,NO_Mask); 
A(0x24300790); W(0x99887766,NO_Mask);
A(0x24300F10); W(0xaabbccdd,NO_Mask);
A(0x24301690); W(0xccddeeff,NO_Mask);
//MB6
A(0x24300014); W(0x44556677,NO_Mask); 
A(0x24300794); W(0x99556644,NO_Mask);
A(0x24300F14); W(0x00005555,NO_Mask);
A(0x24301694); W(0x55550000,NO_Mask);
//MB7
A(0x24300018); W(0x99995555,NO_Mask); 
A(0x24300798); W(0xbbaaccdd,NO_Mask);
A(0x24300F18); W(0x66664444,NO_Mask);
A(0x24301698); W(0x778899aa,NO_Mask);
//MB8
A(0x2430001C); W(0x44466666,NO_Mask); 
A(0x2430079C); W(0x12345678,NO_Mask);
A(0x24300F1C); W(0x87654321,NO_Mask);
A(0x2430169C); W(0x44466666,NO_Mask);
//MB9
A(0x24300020); W(0x22222222,NO_Mask); 
A(0x243007A0); W(0x44446666,NO_Mask);
A(0x24300F20); W(0x55557777,NO_Mask);
A(0x243016A0); W(0x22222222,NO_Mask);
//MB10
A(0x24300024); W(0x33333333,NO_Mask); 
A(0x243007A4); W(0xeeeeaaaa,NO_Mask);
A(0x24300F24); W(0xaaaabbbb,NO_Mask);
A(0x243016A4); W(0x33333333,NO_Mask);
//MB11
A(0x24300028); W(0x11133322,NO_Mask); 
A(0x243007A8); W(0x00001111,NO_Mask);
A(0x24300F28); W(0x22220000,NO_Mask);
A(0x243016A8); W(0x8889999a,NO_Mask);
//MB12
A(0x2430002C); W(0x999aa111,NO_Mask); 
A(0x243007AC); W(0xaaaa1111,NO_Mask);
A(0x24300F2C); W(0x2222aaaa,NO_Mask);
A(0x243016AC); W(0x33322111,NO_Mask);
//MB13
A(0x24300030); W(0xccccdddd,NO_Mask); 
A(0x243007B0); W(0x99991111,NO_Mask);
A(0x24300F30); W(0x22229999,NO_Mask);
A(0x243016B0); W(0xaaaa4444,NO_Mask);
//MB14
A(0x24300034); W(0xffff0000,NO_Mask); 
A(0x243007B4); W(0xaaaa2222,NO_Mask);
A(0x24300F34); W(0x2222bbbb,NO_Mask);
A(0x243016B4); W(0x0000dddd,NO_Mask);
//MB15
A(0x24300038); W(0xddddaaaa,NO_Mask); 
A(0x243007B8); W(0x44466666,NO_Mask);
A(0x24300F38); W(0x33333333,NO_Mask);
A(0x243016B8); W(0xaaaadddd,NO_Mask);
//MB16
A(0x2430003C); W(0x33322111,NO_Mask); 
A(0x243007BC); W(0x55555555,NO_Mask);
A(0x24300F3C); W(0x8889999a,NO_Mask);
A(0x243016BC); W(0xffffffff,NO_Mask);

//Chroma
//MB1 4x2
A(0x24304000); W(0x11223344,NO_Mask); 
A(0x24304780); W(0x55556666,NO_Mask); 
//MB2 4x2
A(0x24304004); W(0x99995555,NO_Mask); 
A(0x24304784); W(0x77886655,NO_Mask); 
//MB3 4x2
A(0x24304008); W(0x11112222,NO_Mask); 
A(0x24304788); W(0x33334444,NO_Mask); 
//MB4 4x2
A(0x2430400C); W(0x55557777,NO_Mask); 
A(0x2430478C); W(0x44446666,NO_Mask); 
//MB5 4x2
A(0x24304010); W(0x99998888,NO_Mask); 
A(0x24304790); W(0x11112222,NO_Mask); 
//MB6 4x2
A(0x24304014); W(0x00009999,NO_Mask); 
A(0x24304794); W(0x88889999,NO_Mask); 
//MB7 4x2
A(0x24304018); W(0x77779999,NO_Mask); 
A(0x24304798); W(0x8888aaaa,NO_Mask); 
//MB8 4x2
A(0x2430401C); W(0x66664444,NO_Mask); 
A(0x2430479C); W(0x11117777,NO_Mask); 
//MB9 4x2
A(0x24304020); W(0x55555555,NO_Mask); 
A(0x243047A0); W(0x22222222,NO_Mask); 
//MB10 4x2
A(0x24304024); W(0xffffffff,NO_Mask); 
A(0x243047A4); W(0x44466666,NO_Mask); 
//MB11 4x2
A(0x24304028); W(0xdddddddd,NO_Mask); 
A(0x243047A8); W(0x44445555,NO_Mask); 
//MB12 4x2
A(0x2430402C); W(0x55558888,NO_Mask); 
A(0x243047AC); W(0x11114444,NO_Mask); 
//MB13 4x2
A(0x24304030); W(0x0000ffff,NO_Mask); 
A(0x243047B0); W(0xffff0000,NO_Mask); 
//MB14 4x2
A(0x24304034); W(0xccccffff,NO_Mask); 
A(0x243047B4); W(0xffffdddd,NO_Mask); 
//MB15 4x2
A(0x24304038); W(0x66665555,NO_Mask); 
A(0x243047B8); W(0x99997777,NO_Mask); 
//MB16 4x2
A(0x2430403C); W(0x66665555,NO_Mask); 
A(0x243047BC); W(0xaaaacccc,NO_Mask); 

//M1_Luma_result
//No.1 Luma 4x4MB
A(0x25015A00); R(0x55229988);
A(0x25015A04); R(0x11223344);
A(0x25015A08); R(0x55687abc);
A(0x25015A0C); R(0x76854321);
//No.2 Luma 4x4MB
A(0x25015A10); R(0x11223344);
A(0x25015A14); R(0x56789abc);
A(0x25015A18); R(0x55556666);
A(0x25015A1C); R(0x77778888);
//No.3 Luma 4x4MB
A(0x25015A20); R(0x55667788);
A(0x25015A24); R(0x11133322);
A(0x25015A28); R(0x999aa111);
A(0x25015A2C); R(0x33322111);
//No.4 Luma 4x4MB
A(0x25015A30); R(0x55667788);
A(0x25015A34); R(0x11133322);
A(0x25015A38); R(0x999aa111);
A(0x25015A3C); R(0x33322111);
//No.5 Luma 4x4MB
A(0x25015A40); R(0x55667788);
A(0x25015A44); R(0x99887766);
A(0x25015A48); R(0xaabbccdd);
A(0x25015A4C); R(0xccddeeff);
//No.6 Luma 4x4MB
A(0x25015A50); R(0x44556677);
A(0x25015A54); R(0x99556644);
A(0x25015A58); R(0x00005555);
A(0x25015A5C); R(0x55550000);
//No.7 Luma 4x4MB
A(0x25015A60); R(0x99995555);
A(0x25015A64); R(0xbbaaccdd);
A(0x25015A68); R(0x66664444);
A(0x25015A6C); R(0x778899aa);
//No.8 Luma 4x4MB
A(0x25015A70); R(0x44466666);
A(0x25015A74); R(0x12345678);
A(0x25015A78); R(0x87654321);
A(0x25015A7C); R(0x44466666);
//No.9 Luma 4x4MB
A(0x25015A80); R(0x22222222);
A(0x25015A84); R(0x44446666);
A(0x25015A88); R(0x55557777);
A(0x25015A8C); R(0x22222222);
//No.10 Luma 4x4MB
A(0x25015A90); R(0x33333333);
A(0x25015A94); R(0xeeeeaaaa);
A(0x25015A98); R(0xaaaabbbb);
A(0x25015A9C); R(0x33333333);
//No.11 Luma 4x4MB
A(0x25015AA0); R(0x11133322);
A(0x25015AA4); R(0x00001111);
A(0x25015AA8); R(0x22220000);
A(0x25015AAC); R(0x8889999a);
//No.12 Luma 4x4MB
A(0x25015AB0); R(0x999aa111);
A(0x25015AB4); R(0xaaaa1111);
A(0x25015AB8); R(0x2222aaaa);
A(0x25015ABC); R(0x33322111);
//No.13 Luma 4x4MB
A(0x25015AC0); R(0xccccdddd);
A(0x25015AC4); R(0x99991111);
A(0x25015AC8); R(0x22229999);
A(0x25015ACC); R(0xaaaa4444);
//No.14 Luma 4x4MB
A(0x25015AD0); R(0xffff0000);
A(0x25015AD4); R(0xaaaa2222);
A(0x25015AD8); R(0x2222bbbb);
A(0x25015ADC); R(0x0000dddd);
//No.15 Luma 4x4MB
A(0x25015AE0); R(0xddddaaaa);
A(0x25015AE4); R(0x44466666);
A(0x25015AE8); R(0x33333333);
A(0x25015AEC); R(0xaaaadddd);
//No.16 Luma 4x4MB
A(0x25015AF0); R(0x33322111);
A(0x25015AF4); R(0x55555555);
A(0x25015AF8); R(0x8889999a);
A(0x25015AFC); R(0xffffffff);

//M1_Chroma_result    
//No.1 Chroma 4x2MB 
A(0x25015B00); R(0x11223344);
A(0x25015B04); R(0x55556666);
//No.2 Chroma 4x2MB 
A(0x25015B08); R(0x99995555);
A(0x25015B0C); R(0x77886655);
//No.3 Chroma 4x2MB 
A(0x25015B10); R(0x11112222);
A(0x25015B14); R(0x33334444);
//No.4 Chroma 4x2MB 
A(0x25015B18); R(0x55557777);
A(0x25015B1C); R(0x44446666);
//No.5 Chroma 4x2MB 
A(0x25015B20); R(0x99998888);
A(0x25015B24); R(0x11112222);
//No.6 Chroma 4x2MB 
A(0x25015B28); R(0x00009999);
A(0x25015B2C); R(0x88889999);
//No.7 Chroma 4x2MB 
A(0x25015B30); R(0x77779999);
A(0x25015B34); R(0x8888aaaa);
//No.8 Chroma 4x2MB 
A(0x25015B38); R(0x66664444);
A(0x25015B3C); R(0x11117777);
//No.9 Chroma 4x2MB 
A(0x25015B40); R(0x55555555);
A(0x25015B44); R(0x22222222);
//No.10 Chroma 4x2MB 
A(0x25015B48); R(0xffffffff);
A(0x25015B4C); R(0x44466666);
//No.11 Chroma 4x2MB 
A(0x25015B50); R(0xdddddddd);
A(0x25015B54); R(0x44445555);
//No.12 Chroma 4x2MB 
A(0x25015B58); R(0x55558888);
A(0x25015B5C); R(0x11114444);
//No.13 Chroma 4x2MB 
A(0x25015B60); R(0x0000ffff);
A(0x25015B64); R(0xffff0000);
//No.14 Chroma 4x2MB 
A(0x25015B68); R(0xccccffff);
A(0x25015B6C); R(0xffffdddd);
//No.15 Chroma 4x2MB 
A(0x25015B70); R(0x66665555);
A(0x25015B74); R(0x99997777);
//No.16 Chroma 4x2MB 
A(0x25015B78); R(0x66665555);
A(0x25015B7C); R(0xaaaacccc);

//M2 DMA0 partition;
//MB1
A(0x24303000); W(0x55229988,NO_Mask); 
A(0x24303780); W(0x11223344,NO_Mask);
A(0x24303F00); W(0x55687abc,NO_Mask);
A(0x24304680); W(0x76854321,NO_Mask);
//MB2
A(0x24303004); W(0x11223344,NO_Mask); 
A(0x24303784); W(0x56789abc,NO_Mask);
A(0x24303F04); W(0x55556666,NO_Mask);
A(0x24304684); W(0x77778888,NO_Mask);
//MB3
A(0x24303008); W(0x55667788,NO_Mask); 
A(0x24303788); W(0x11133322,NO_Mask);
A(0x24303F08); W(0x999aa111,NO_Mask);
A(0x24304688); W(0x33322111,NO_Mask);
//MB4
A(0x2430300C); W(0x55667788,NO_Mask); 
A(0x2430378C); W(0x11133322,NO_Mask);
A(0x24303F0C); W(0x999aa111,NO_Mask);
A(0x2430468C); W(0x33322111,NO_Mask);
//MB5
A(0x24303010); W(0x55667788,NO_Mask); 
A(0x24303790); W(0x99887766,NO_Mask);
A(0x24303F10); W(0xaabbccdd,NO_Mask);
A(0x24304690); W(0xccddeeff,NO_Mask);
//MB6
A(0x24303014); W(0x44556677,NO_Mask); 
A(0x24303794); W(0x99556644,NO_Mask);
A(0x24303F14); W(0x00005555,NO_Mask);
A(0x24304694); W(0x55550000,NO_Mask);
//MB7
A(0x24303018); W(0x99995555,NO_Mask); 
A(0x24303798); W(0xbbaaccdd,NO_Mask);
A(0x24303F18); W(0x66664444,NO_Mask);
A(0x24304698); W(0x778899aa,NO_Mask);
//MB8
A(0x2430301C); W(0x44466666,NO_Mask); 
A(0x2430379C); W(0x12345678,NO_Mask);
A(0x24303F1C); W(0x87654321,NO_Mask);
A(0x2430469C); W(0x44466666,NO_Mask);
//MB9
A(0x24303020); W(0x22222222,NO_Mask); 
A(0x243037A0); W(0x44446666,NO_Mask);
A(0x24303F20); W(0x55557777,NO_Mask);
A(0x243046A0); W(0x22222222,NO_Mask);
//MB10
A(0x24303024); W(0x33333333,NO_Mask); 
A(0x243037A4); W(0xeeeeaaaa,NO_Mask);
A(0x24303F24); W(0xaaaabbbb,NO_Mask);
A(0x243046A4); W(0x33333333,NO_Mask);
//MB11
A(0x24303028); W(0x11133322,NO_Mask); 
A(0x243037A8); W(0x00001111,NO_Mask);
A(0x24303F28); W(0x22220000,NO_Mask);
A(0x243046A8); W(0x8889999a,NO_Mask);
//MB12
A(0x2430302C); W(0x999aa111,NO_Mask); 
A(0x243037AC); W(0xaaaa1111,NO_Mask);
A(0x24303F2C); W(0x2222aaaa,NO_Mask);
A(0x243046AC); W(0x33322111,NO_Mask);
//MB13
A(0x24303030); W(0xccccdddd,NO_Mask); 
A(0x243037B0); W(0x99991111,NO_Mask);
A(0x24303F30); W(0x22229999,NO_Mask);
A(0x243046B0); W(0xaaaa4444,NO_Mask);
//MB14
A(0x24303034); W(0xffff0000,NO_Mask); 
A(0x243037B4); W(0xaaaa2222,NO_Mask);
A(0x24303F34); W(0x2222bbbb,NO_Mask);
A(0x243046B4); W(0x0000dddd,NO_Mask);
//MB15
A(0x24303038); W(0xddddaaaa,NO_Mask); 
A(0x243037B8); W(0x44466666,NO_Mask);
A(0x24303F38); W(0x33333333,NO_Mask);
A(0x243046B8); W(0xaaaadddd,NO_Mask);
//MB16
A(0x2430303C); W(0x33322111,NO_Mask); 
A(0x243037BC); W(0x55555555,NO_Mask);
A(0x24303F3C); W(0x8889999a,NO_Mask);
A(0x243046BC); W(0xffffffff,NO_Mask);

//Chroma
//MB1 4x2
A(0x24305000); W(0x11223344,NO_Mask); 
A(0x24305780); W(0x55556666,NO_Mask); 
//MB2 4x2
A(0x24305004); W(0x99995555,NO_Mask); 
A(0x24305784); W(0x77886655,NO_Mask); 
//MB3 4x2
A(0x24305008); W(0x11112222,NO_Mask); 
A(0x24305788); W(0x33334444,NO_Mask); 
//MB4 4x2
A(0x2430500C); W(0x55557777,NO_Mask); 
A(0x2430578C); W(0x44446666,NO_Mask); 
//MB5 4x2
A(0x24305010); W(0x99998888,NO_Mask); 
A(0x24305790); W(0x11112222,NO_Mask); 
//MB6 4x2
A(0x24305014); W(0x00009999,NO_Mask); 
A(0x24305794); W(0x88889999,NO_Mask); 
//MB7 4x2
A(0x24305018); W(0x77779999,NO_Mask); 
A(0x24305798); W(0x8888aaaa,NO_Mask); 
//MB8 4x2
A(0x2430501C); W(0x66664444,NO_Mask); 
A(0x2430579C); W(0x11117777,NO_Mask); 
//MB9 4x2
A(0x24305020); W(0x55555555,NO_Mask); 
A(0x243057A0); W(0x22222222,NO_Mask); 
//MB10 4x2
A(0x24305024); W(0xffffffff,NO_Mask); 
A(0x243057A4); W(0x44466666,NO_Mask); 
//MB11 4x2
A(0x24305028); W(0xdddddddd,NO_Mask); 
A(0x243057A8); W(0x44445555,NO_Mask); 
//MB12 4x2
A(0x2430502C); W(0x55558888,NO_Mask); 
A(0x243057AC); W(0x11114444,NO_Mask); 
//MB13 4x2
A(0x24305030); W(0x0000ffff,NO_Mask); 
A(0x243057B0); W(0xffff0000,NO_Mask); 
//MB14 4x2
A(0x24305034); W(0xccccffff,NO_Mask); 
A(0x243057B4); W(0xffffdddd,NO_Mask); 
//MB15 4x2
A(0x24305038); W(0x66665555,NO_Mask); 
A(0x243057B8); W(0x99997777,NO_Mask); 
//MB16 4x2
A(0x2430503C); W(0x66665555,NO_Mask); 
A(0x243057BC); W(0xaaaacccc,NO_Mask); 

//M2_Luma_result
//No.1 Luma 4x4MB
A(0x25014A00); R(0x55229988);
A(0x25014A04); R(0x11223344);
A(0x25014A08); R(0x55687abc);
A(0x25014A0C); R(0x76854321);
//No.2 Luma 4x4MB
A(0x25014A10); R(0x11223344);
A(0x25014A14); R(0x56789abc);
A(0x25014A18); R(0x55556666);
A(0x25014A1C); R(0x77778888);
//No.3 Luma 4x4MB
A(0x25014A20); R(0x55667788);
A(0x25014A24); R(0x11133322);
A(0x25014A28); R(0x999aa111);
A(0x25014A2C); R(0x33322111);
//No.4 Luma 4x4MB
A(0x25014A30); R(0x55667788);
A(0x25014A34); R(0x11133322);
A(0x25014A38); R(0x999aa111);
A(0x25014A3C); R(0x33322111);
//No.5 Luma 4x4MB
A(0x25014A40); R(0x55667788);
A(0x25014A44); R(0x99887766);
A(0x25014A48); R(0xaabbccdd);
A(0x25014A4C); R(0xccddeeff);
//No.6 Luma 4x4MB
A(0x25014A50); R(0x44556677);
A(0x25014A54); R(0x99556644);
A(0x25014A58); R(0x00005555);
A(0x25014A5C); R(0x55550000);
//No.7 Luma 4x4MB
A(0x25014A60); R(0x99995555);
A(0x25014A64); R(0xbbaaccdd);
A(0x25014A68); R(0x66664444);
A(0x25014A6C); R(0x778899aa);
//No.8 Luma 4x4MB
A(0x25014A70); R(0x44466666);
A(0x25014A74); R(0x12345678);
A(0x25014A78); R(0x87654321);
A(0x25014A7C); R(0x44466666);
//No.9 Luma 4x4MB
A(0x25014A80); R(0x22222222);
A(0x25014A84); R(0x44446666);
A(0x25014A88); R(0x55557777);
A(0x25014A8C); R(0x22222222);
//No.10 Luma 4x4MB
A(0x25014A90); R(0x33333333);
A(0x25014A94); R(0xeeeeaaaa);
A(0x25014A98); R(0xaaaabbbb);
A(0x25014A9C); R(0x33333333);
//No.11 Luma 4x4MB
A(0x25014AA0); R(0x11133322);
A(0x25014AA4); R(0x00001111);
A(0x25014AA8); R(0x22220000);
A(0x25014AAC); R(0x8889999a);
//No.12 Luma 4x4MB
A(0x25014AB0); R(0x999aa111);
A(0x25014AB4); R(0xaaaa1111);
A(0x25014AB8); R(0x2222aaaa);
A(0x25014ABC); R(0x33322111);
//No.13 Luma 4x4MB
A(0x25014AC0); R(0xccccdddd);
A(0x25014AC4); R(0x99991111);
A(0x25014AC8); R(0x22229999);
A(0x25014ACC); R(0xaaaa4444);
//No.14 Luma 4x4MB
A(0x25014AD0); R(0xffff0000);
A(0x25014AD4); R(0xaaaa2222);
A(0x25014AD8); R(0x2222bbbb);
A(0x25014ADC); R(0x0000dddd);
//No.15 Luma 4x4MB
A(0x25014AE0); R(0xddddaaaa);
A(0x25014AE4); R(0x44466666);
A(0x25014AE8); R(0x33333333);
A(0x25014AEC); R(0xaaaadddd);
//No.16 Luma 4x4MB
A(0x25014AF0); R(0x33322111);
A(0x25014AF4); R(0x55555555);
A(0x25014AF8); R(0x8889999a);
A(0x25014AFC); R(0xffffffff);

//M2_Chroma_result    
//No.1 Chroma 4x2MB 
A(0x25014B00); R(0x11223344);
A(0x25014B04); R(0x55556666);
//No.2 Chroma 4x2MB 
A(0x25014B08); R(0x99995555);
A(0x25014B0C); R(0x77886655);
//No.3 Chroma 4x2MB 
A(0x25014B10); R(0x11112222);
A(0x25014B14); R(0x33334444);
//No.4 Chroma 4x2MB 
A(0x25014B18); R(0x55557777);
A(0x25014B1C); R(0x44446666);
//No.5 Chroma 4x2MB 
A(0x25014B20); R(0x99998888);
A(0x25014B24); R(0x11112222);
//No.6 Chroma 4x2MB 
A(0x25014B28); R(0x00009999);
A(0x25014B2C); R(0x88889999);
//No.7 Chroma 4x2MB 
A(0x25014B30); R(0x77779999);
A(0x25014B34); R(0x8888aaaa);
//No.8 Chroma 4x2MB 
A(0x25014B38); R(0x66664444);
A(0x25014B3C); R(0x11117777);
//No.9 Chroma 4x2MB 
A(0x25014B40); R(0x55555555);
A(0x25014B44); R(0x22222222);
//No.10 Chroma 4x2MB 
A(0x25014B48); R(0xffffffff);
A(0x25014B4C); R(0x44466666);
//No.11 Chroma 4x2MB 
A(0x25014B50); R(0xdddddddd);
A(0x25014B54); R(0x44445555);
//No.12 Chroma 4x2MB 
A(0x25014B58); R(0x55558888);
A(0x25014B5C); R(0x11114444);
//No.13 Chroma 4x2MB 
A(0x25014B60); R(0x0000ffff);
A(0x25014B64); R(0xffff0000);
//No.14 Chroma 4x2MB 
A(0x25014B68); R(0xccccffff);
A(0x25014B6C); R(0xffffdddd);
//No.15 Chroma 4x2MB 
A(0x25014B70); R(0x66665555);
A(0x25014B74); R(0x99997777);
//No.16 Chroma 4x2MB 
A(0x25014B78); R(0x66665555);
A(0x25014B7C); R(0xaaaacccc);
core3end

;============================================================================================================================================================================================================================================================================================================================================
;               frame=19537  mbx=6  mby=20
;============================================================================================================================================================================================================================================================================================================================================
.data

; Raw Y (+0)
.global InYBaseAddr
.align 3
InYBaseAddr:
.half      26, -120, -114, -131,   64,   49,   43,   43,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5
.half     -52, -129, -169,   62, -154,   87,   13,  154,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5
.half    -194, -123,   70,  156,  -44,  143,  -26,  -27,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5
.half     -29,   18,  -54,  102, -121,  -71,   31,  -52,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5
.half      19,   56,  172,    5,  -26,  -80,    7, -239,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5
.half    -152,   18,   15,   12,  -23,   76,  -10,    9,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5
.half    -194,  153, -207, -191,  -93,   86, -144,   52,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5
.half      26,   24,   15,   33,  130,   35,   72,  -23,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5
.half      -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,    5,   -5,   -5,   -5,   -5
.half      -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5
.half      -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5
.half      -5,   -5,   -5,    5,   -5,   -5,   -5,   -5,   -5,   -5,    5,   -5,   -5,   -5,   -5,   -5
.half      -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5
.half      -5,   -5,   -5,   -5,    5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5
.half      -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5
.half      -5,   -5,   -5,   -5,    5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5,   -5

; Search Window (+512)
.global SWBaseAddr
.align 3
SWBaseAddr:
;         0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25  26  27  28  29  30  31  32  33  34  35  36  37  38  39  40  41  42  43  44  45  46  47  48  49  50  51  52  53  54  55  56  57  58  59  60  61  62  63 
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte   226,147,147,184, 47,163, 28,173,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 46, 98,101,255,213,156, 15,100,126, 45,130,239,209, 13,156, 89,219, 57, 23,158,185,149,181,111,115, 20, 92, 31,101,128, 46,148
.byte   203,115,145,118,171,140,253, 29,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,208,158,156,162,171, 56,251,135,114, 18, 37, 43,168,218,154, 27,238,246, 58, 84,118,104,232, 89,251,123, 17, 42, 30, 45,215,239
.byte    72,132,179, 69,103, 21, 48, 65,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,159, 34, 72, 71,252,227, 98,235,217,156, 63, 80,  4, 39,169,255,162,186, 41,193,231,  0,176,178,115, 65, 40, 30,205, 38, 60,108
.byte     8,105, 84,158,163,  9,214,151,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,177,111,145,181,150, 58,180, 56,244,221,249,219,221,169,141, 80,234,181,111,184,219,171, 36, 36, 47,216,105,151,237,153,216,159
.byte     2,226,173,124,225,193,224,149,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,230,208,114,196,217,116,135,124,222,176,218,198,183, 74,249,157,156, 78,138,208,182,205,165,190, 54,249, 92,217,  2, 50,112,233
.byte    83,144, 12,144,106,221,229, 96,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 69,252, 37,115,167,151, 53,130, 53,203,189,198, 78,112,214,208,200,210,195,131,249, 18,229,251,244,146,119,213, 83, 87,107,152
.byte    10, 83, 93, 74,202, 94,131,  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,164, 64, 13, 55, 41, 44,225,233,191,217,206, 88,201,169,215,131,217, 68,114, 99,  1,235,152, 85,123,164,229,229,130,202, 70, 38
.byte   178,218,219,133, 76, 61,  5,104,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  2,185, 63,184,189,137,199,212, 54,102,185,102,184,113, 84, 98, 37,249,200, 48, 33,116,101, 43,199,194,117,146, 33,249,154, 35
.byte   205,225, 43,107,217, 98,198, 40,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 32,133,133,237,204,139,252,169, 71,172,227, 46, 55,157,148,242,195,232, 55, 98, 11,205,  5,189,167,224, 66,243, 30, 72, 91, 62
.byte   250,180, 58, 90,234,124,123, 50,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,199, 96,153,160, 83,225,221,107, 41,180,179,196,203,233,204,210,197,178, 33,175,154, 56, 69,104, 25,113,211,242,211,154, 27,154
.byte   166,175,117, 45, 69,145,158, 45,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,240,126,133, 50, 32,255, 58, 73,141,255, 89,166,126,207,122, 35,153,148,104,206, 88, 88,156, 82, 13,214,172,247, 82, 39, 42, 67
.byte    95,156, 91, 52, 54, 98, 56,142,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,138, 23,175,188, 87, 99,223, 98,249,176,204,226,124,243,210, 35,135,213,180,137,214,203, 14,124,123,131,170,192, 21, 72,237,159
.byte    64, 35, 19, 33,100,  1,122, 84,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,167, 62, 62, 68,182,208,180, 37,177,240,173,214,161,206,219,225,128, 97,205,185,158, 49,224,132,131, 53,113,243, 40,  2,228,207
.byte    90, 42,  6, 42,135,200,175,210,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,144,158, 26,235,166,203,253,129, 93,232, 69,187,189,250,192, 38,177, 86,146, 74, 53, 87,189,243,175,185,170,106,138,188, 15, 27
.byte   120,112,110, 49,215, 98,106, 29,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31,255, 82,250,204, 40, 81,156,250,225,144,126,205,137,125, 47,205, 44,202, 85,236,144,190,106,192, 43, 89, 74, 84,120, 30,116
.byte   151,237, 93, 57,119, 75,188,138,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,166, 75, 67, 30,217,169,185,221,115,224,182,214,188, 89,223, 80,145,143,124,124,159, 88, 59, 73, 12,224,175, 23,152, 76,170, 62
.byte   231,220,144,  4,181, 68, 33, 78,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,197,169,226,218,153,175,250,118,114,108,214, 33,215, 53, 50,134, 67,222,190,255, 30,132,123,217,170,207, 30, 73,240, 61,250,181
.byte    92,233, 11, 40,139, 32,101,145,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 31,146, 32, 63,106, 89,250,191,223,146,180,186,205,177,236, 65, 34, 74,159,157,238,208,239,245,172,153,  8,150,172,201,201,203
.byte    47,196, 33,104, 10,186,211,208,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,151,171, 71, 27,219,123,245, 48,201,173, 51,130,196, 72,235,234,204,139,203, 84,101,182, 97, 10,128,123, 79,181,110,132,125,  6
.byte    75,202,222, 16, 70,195,161,146,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 65, 96, 84,177,198,167,246,195,223,140, 95,203, 31, 45,238, 35, 89,111,162,219, 99,218,185, 10,110,188,155,112,235,234,118, 45
.byte    37,212, 82, 28, 41, 36,173,122,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 88,170,121,100,246, 85,210,145, 80, 43,155,207,157,183,155, 12,152,215,148,249,136,241,254,250,103, 72,180,160,149,123, 91,237
.byte    52, 80,245, 39, 24,228,245,116,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 79, 72, 73, 81,243,199,238,206, 92, 49,149,220,141,178,228,104, 68,207, 44,162,164,225,167, 13,152, 61,121, 49, 84,235,  7,164
.byte   155, 83, 85,176, 74,192, 32,194,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 21,139, 80,254, 20,247,106,112,120,159, 97,116,239, 15, 56,131,225,200,119,101,180,112,100, 22,180, 19,177, 60, 66, 16,  3, 87
.byte   110,  4, 86, 46,209,118, 95,115,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 95,129, 55,141,192,205, 31, 48,162, 62,245, 98,192,144,160,246, 90,199,157,249,163, 64,248, 55,120,118, 99, 99,106,237,205,201
.byte    68,128, 54,246,171, 42, 99, 72,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,180, 84,213, 25,177, 43,244,109,156, 93,106, 30,128,150,225, 93, 89, 83,189,  8,190, 28, 25,109, 42,197,165,230,104,240,170, 29
.byte   238,242, 21,122,147,241,112, 60,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,135,205,102, 81,140,161,219,245,169,112,200,158, 81, 64,225,166,248,121,155,161,180,152,211, 40,  9, 49,134,132, 60, 32,140,196
.byte   167,243, 61, 68,206,166, 56, 60,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 97, 56,218, 50,157,219,105,244,109,215,179,240,194, 98,220, 23,176,148, 26,105,171, 47,210,209,239,114,178, 59,169,110, 25, 10
.byte   239,135,220,107,108,210,137,198,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,126,235, 44,110,123,228,246, 30, 90,195,253,240,173,142,221,170,248,115, 70,178,  6, 20,213, 10, 64, 86,137,254,240,  4, 91,110
.byte    63,241, 41,101, 27, 64,227,184,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,149,134,182,177, 38, 42, 23,126,156, 90,128,125,183,141,  5,  8,214,209, 39,198,213,130, 52,197,  9, 16, 48,117,227,185, 59,120
.byte   123,184,134,108,243,224, 52,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,155,100, 53, 82,241, 59, 90,199, 12,129,142,226,  3,194,167, 13,211,215,130,182,144,190, 46,207,175, 88, 52,203,152, 23,131, 51
.byte   232, 62,142,109,199,  0,196, 39,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 98,194,226,101,132,137,114, 87, 96,245, 13,240,179, 60,191, 98,148,243, 45, 44, 10,176, 96,134,105,230,242, 92,198, 38, 92, 40
.byte    95, 80, 48,109, 38, 59, 15,240,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,245,210, 23,168, 14,214, 11,162,201, 56,206,212,233, 46, 90, 82, 20, 76,174,219,115, 11,  3, 91, 73,145,200, 17,146,141, 56,135
.byte    71, 37,229, 83, 67,147,115,174,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,115,221,196, 92, 12, 30,174, 32,106, 93,251,221,104,255, 57,177,144,  1,194, 34,142,251,170,237, 75,218, 90,113, 21,105, 97,136
.byte   130,136,  4,240, 76, 14,239, 18,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,240,111,139, 88,110,196, 10,254,198,204, 33, 84,199,203, 66, 18,165,156,132,186,  6,229, 66, 77, 11, 39,160, 78,187, 19,252,171
.byte   190,194,153,153,107, 77, 25,176,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,218, 16,103,162,219,169,180,128, 69, 56, 58, 75, 30,124,152, 41,164, 56,119, 95, 76,116, 10,206,252, 14,191, 72, 28,174, 91,247
.byte    23, 49, 15,231,198,220, 90,147,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,134, 83,252,164,207,148,205,115,205, 68,210, 25,184,221,231,180,235,166,253,  8, 84, 88,255, 18, 26,152,171,133,229,196, 53,107
.byte   151,238,204,161,129, 90,150,187,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 33, 45,172,217, 10,147,142,245, 58,139,253,142,227,252,161,253,148, 76,130,122, 17,183,229, 40,233,245, 15,175,209,106, 66,242
.byte    77, 77, 16,221, 56,213,  2,112,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,229,148, 74,200,144,235,197, 37, 55, 71,159, 72,254,132,113,231,121,128,150, 75,234,216, 61,129,198,  9, 34, 72, 99,185,  3, 72
.byte   192, 50,251,230, 91,253,133,  5,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 28,161,184, 27, 38, 41,  2,159,170,153,234,148,113, 40, 22, 56, 49, 56,128,149,241,131,221, 62,209,238, 28,  9,195, 30,121,224
.byte   238,196,100,134,116,164, 80, 93,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,150,112,154,  8,152,176, 64,201,232,192, 94,218, 67, 60, 24, 20, 42, 52, 30,237, 83,151,205, 19,201,200,249, 37,198,126, 42, 92
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
; Motion Vector (+4608)

.align 4
MVBaseAddr:
OutMV0:
.word   0x00000000
OutMV1:
.word   0x00000000
OutMV2:
.word   0x00000000
OutMV3:
.word   0x00000000
OutMV4:
.word   0x00000000
OutMV5:
.word   0x00000000
OutMV6:
.word   0x00000000
OutMV7:
.word   0x00000000
OutMV8:
.word   0x00000000
OutMV9:
.word   0x00000000
OutMV10:
.word   0x00000000
OutMV11:
.word   0x00000000
OutMV12:
.word   0x00000000
OutMV13:
.word   0x00000000
OutMV14:
.word   0x00000000
OutMV15:
.word   0x00000000
; input parameters (+4672)
.global InputParamsBaseAddr
.align 4
InputParamsBaseAddr:
    .byte 0x04              ; Func_Mode             (4)
    .byte 0x0c              ; SWSearchRange         (12)
    .byte 0x40              ; SWB_Width         (64)
    .byte 0x20              ; SWStartOffset         (32)
    .byte 0x04              ; MbType         (4)
    .half 512               ; SWBaseAddr
    .half 0xffff            ; CBP
    .half 4608              ; MVBaseAddr
    .half 5200              ; OutYAddr
    .half 0                 ; InYBaseAddr

.text
; set CFU_Info_Sel(SR13) according to interested

    {   MOVI.L SR13, 2                          |   NOP |   NOP |   NOP |   NOP }

; store Input_Addr(Base+4672) to ME (SR4-7 = CFU0-3, ME use SR6)
    {   MOVI R0, 0x80001240                 |   NOP |   NOP |   NOP |   NOP }
    {   COPY SR6, R0                                |   NOP |   NOP |   NOP |   NOP }

; test if store success
    {   TEST P1, P2, 0xFFFF, 0x8000 |   NOP |   NOP |   NOP |   NOP }

; start function (MC_Luma)
    {   MOVI.H R1, 0x0000                       |   NOP |   NOP |   NOP |   NOP }
    {   MOVI.L R1, 0x0044                       |   NOP |   NOP |   NOP |   NOP }
    {   COPY SR6, R1                                |   NOP |   NOP |   NOP |   NOP }

; test if busy
    {   TEST P3, P4, 0xFFFF, 0x2044 |   NOP |   NOP |   NOP |   NOP }

; wait for done (300 cycles)
; change CFU_Command to Waiting
    {   MOVI.H R2, 0x2000                       |   NOP |   NOP |   NOP |   NOP }
    {   MOVI.L R2, 0x0000                       |   NOP |   NOP |   NOP |   NOP }
    {   COPY SR6, R2                                |   NOP |   NOP |   NOP |   NOP }

    {   MOVI R3, 300                               |   NOP |   NOP |   NOP |   NOP }
    {   WAIT R3, 0xFFFF, 0x0044         |   NOP |   NOP |   NOP |   NOP }

; test output if cannot dump memory

; trap
    {   NOP                         |   NOP |   NOP |   NOP |   NOP }
    {   NOP                         |   NOP |   NOP |   NOP |   NOP }
    {   NOP                         |   NOP |   NOP |   NOP |   NOP }
    {   NOP                         |   NOP |   NOP |   NOP |   NOP }
    { TRAP                      |   NOP |   NOP |   NOP |   NOP }

; values to be checked
;.align 4
;OutYBaseAddr:
;OutYReconstructed:
.byte   187, 86,105, 94,192,146,248,228,153, 44,219,127,126, 48,108,238
.byte   137,121, 23,100, 23,173,159,228, 48, 82,184,238,170,180,165,101
.byte    11, 14,195,203,161,187,176, 58,231,139,185,101,187, 38, 84, 69
.byte   159,107,169,182, 24, 72,155, 72,154, 83, 54, 68,  7,219,170, 18
.byte   234,109,222,139, 41,142,197, 16, 25,127,118,212,165,202, 25, 68
.byte    53,195,251, 77, 11,150,149,166,233,203,234,240,167,148,  3,145
.byte     2,225, 28, 43,111,225, 59,136, 96,177, 92,  5,123,118, 74,176
.byte    57, 69,253, 68,219,146,234,196, 94,213,180,  5,105,183,150,107
.byte   152,178,150,  7,147,210,143,244,131,236,249,255, 98, 67,175,155
.byte   136,173,223, 99, 63,202, 39,157,159,220,162,  8,147, 56,116, 44
.byte   234, 10, 51,126,220,195,114, 96,175,107, 95, 17,175, 14,172, 55
.byte   187,139,155,251, 85,194,152,244,158, 59,253, 50,115,113, 94, 94
.byte   123,145,220, 88, 84, 78,184,  3,185, 23, 20,104, 37,192,160,225
.byte    76, 59,220,161,253,116,150,156,175,147,206, 35,  4, 44,129,127
.byte   189, 93,215, 18,171,143, 21,100,166, 42,205,204,234,109,173, 54
.byte   168,137,216,165,253,110, 65,173,  1, 15,208,  5, 59, 81,132,249


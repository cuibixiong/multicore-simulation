;============================================================================================================================================================================================================================================================================================================================================
;               frame=32140  mbx=32  mby=21
;============================================================================================================================================================================================================================================================================================================================================
.data

; Raw Y (+0)
.global InYBaseAddr
.align 3
InYBaseAddr:
.half      -9,   33,   12,   20,   15,   44,  -20,   12, -178,    1,  -48,    3,    2,   71, -106,   -4
.half      64,  -65,  -83,  -40,   20,   14,   33,  -18,  -17,   34,  -25,   10,   56,  -51,   92,   15
.half      -6,  -47,  115,    9,  -28,  -46,  -19,   47,  -49,  -19,   -7,   39,  -59,  -58,  -73,   40
.half      49,  -44,   16,   68,  170,  -28,   51,  -15,  -47,  139,   55, -155,   -5,  -45,  -69,   26
.half     -97,  131,   49,   28,  -32,    0,  -41,   34,  -14,    1,  -14,   65,  -67,  -10,   12,   -1
.half      54,   15,  -20,  -10,   33,   -1,   23,  121,  -58,   41,   30,   55,  -44,   13,   73,  -54
.half     -55,   34,   56,   22,  -78,   30,  -86,   73,    3,   13,   71,   53, -167,  -44,   -8,   18
.half      23,   19,  -78,   34,  -15,   32,  -43,  144,   52,   24,   27,   57,  -50,   34,  -74,   21
.half     -15,  -32,  -80,   33,  -24,  -10,  -92,   -1,   61,  129,   73, -113,  -23,   24,   24,  -39
.half     -50,    2,   75,  -22,   10,   31,   66,  -32,    1,    6,   43,   22,   20,   -3,  -71,  -71
.half      78,  -14,   21,   70,  -85,   56,  -49,   16,  -42,  -67,  -25,  112,  -16,  -13,    1,   60
.half      15,   17,  -51,  -17,    1,   30,    8,  -33,  -39,   13,   22,   -3,   45,  -67,   48,   96
.half      -6,  -12,   98,   -7,   -7,  -12,  -88, -126,  -33,  -32,   26,   17,  -47,   21,  -60,  -11
.half      55,  -40,  -91,  -12,  -70,  -35,  -17,   -8,  -75,   36,  -18,   69,  -44,    6,  -86,  -12
.half     121,   12,   12,   24,    2,  -35,  -24,  102,  -33, -102,  108,    0,   23,  -15,   26,   31
.half    -138,   68,   24,  -61,   42,   -5,   18,  -61,  -42,    4,  -25, -114,  116,   -9,  -46,  -25

; Search Window (+512)
.global SWBaseAddr
.align 3
SWBaseAddr:
;         0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25  26  27  28  29  30  31  32  33  34  35  36  37  38  39  40  41  42  43  44  45  46  47  48  49  50  51  52  53  54  55  56  57  58  59  60  61  62  63 
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,215,196,147,164,193,103,  2, 46,171,223,107, 50,165,178,186, 54,  4, 99, 57,253, 83,159, 40,115,122, 80,255,227,114, 37, 21, 73,233,168,237,170, 15,240,216,187,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,207, 67,237,116,246,167,171,250, 11,228,247, 94,131, 31,210,254,111,209,225,225,246,247, 42,223,159, 24,137,175,  8, 98,106,215,165, 87, 75,155,255,246,149, 10,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,218,140,104, 94,172, 58, 92, 27, 12, 61,253,  2, 52, 39,226,212, 63,107,131, 71,205,237, 30,115, 68,106, 14, 67, 96,164, 77, 59, 48,182,153,220,240,245,248,252,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 50,245,255,103, 28,225, 59, 92, 76,190,163, 26,171,194,141,239, 44,155, 51,140, 63,128,199,112, 54, 96, 76, 39, 85, 68, 35,136, 57, 34,239, 86,  3, 42,178, 80,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,232, 85,106,147, 23,247,130, 67,146,181,208,210, 54,151, 66,108,248,142,147, 77,211,183,213, 12,217,196, 98,221,238, 20, 45,214,106,151,105,129,142,236,197, 32,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,161,149,242,215, 44, 52, 68, 36,195,215,114,150,142, 71,162,104, 12,  5, 69,250, 25,114,209,131,  9, 58,  5,151, 38,202,183,200, 95,170,159,139,222,227,176,161,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,187, 34, 55, 73,105,218,177,117,223,246,112,248,104, 65,124,113,123,129,  8,162, 75,192,106,170,106,  9, 53, 72,237,229,234,168,  7, 33,241,113,251,163,230,218,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,153, 86,211,  2,151, 79,115, 19,208,124,181, 27, 60, 31,197,166, 40,250,238, 21,224,216,189,231,250,175, 88,245, 82, 63,208,235,149,163,237, 45,242, 97, 64,194,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,221,245,221, 25, 20,162,191, 60,156,173, 82,124,134, 15,100,128,190,188,117, 16,251, 69,252,145,232,233,190,218, 74,254,156, 39,243,121, 64,  7, 27,255, 67,184,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,173,149, 52, 51,165,152,179, 99, 85, 40,116, 80,110,112,225, 86, 89,159, 49,164,157,205,203,144, 71, 12,151, 98, 11,219, 26,184,112, 79,235, 21,231,158,121, 60,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,199,237,141, 53, 93,110,139,182, 14,188, 90,171,138, 38, 60,209, 50,211, 51, 61,174, 78,246, 31,157,225, 52,132,128,173,193, 71,154, 78,124,247,188,  7,174,202,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,196,  8,118, 78, 46,178, 31, 96,133, 82,158, 52,160,148, 83, 61,117,135,194,245, 53,131, 60,207,209,184,199,141,192,117, 88,132,125,206,210,172,128,241, 12,  5,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 67,170, 57,228, 62,140, 33,180, 20,227,169, 73,102,230, 24, 55,158,223,197, 94, 84, 29,226,210,235,180,126,107,165,138,112,233, 53,170,205,115, 54,238, 39, 74,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,210,209,147, 56,183,172,112, 85,139, 53,180,224, 82,150,178, 61, 75, 48,168,240,186, 24,217,239,194,166, 99,249,149,138, 67,103, 91,215,159, 18,131, 15,104, 14,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 68, 28,238,150,178,160,211,253,208,123,238,139,148,199,122, 86,110,221, 79,  3,104,147,106,195,106,  9,214,237, 25, 62,251, 93, 90,234,244, 12,138,199, 10, 91,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 67,248,230,215,191, 96, 45, 45, 62,125, 48,166, 16,154,105,122,164, 63,103,189,125, 98, 26,215, 76, 14,228,215,214,238, 50, 25,230, 24,240,165,120, 29,211,182,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,154,  3, 92,170,158,198, 36, 66,  5,139,255,131,238, 25, 90, 58, 40, 62, 17,254, 44, 67, 23, 18, 91,  7,184,212, 36,139,138,191,142,231,105, 44,173,142,110,178,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 25,109, 53,  7,135,144, 66,175,206, 83,173,251,151,196, 13,242,203,197,198,239, 80, 81,174,223, 56, 24, 11,229,166,122,151,191,231,205,199,110, 93,  9, 29, 43,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 92,202, 38,243,142, 52,230, 89,249,172, 73, 74,253,247, 41, 53, 15, 52, 26,181,174,178,117,150,127, 60,  4,220, 69, 34,  7,161,236, 46,149,123, 98,123,212, 91,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 39, 29,165, 37, 21,206, 90, 36,  3,117,218,177, 39, 79, 71,166,139, 76,130,208,110,137,113, 90,183,  6,213, 25,129,170,117,169,199, 26,206,220,233, 40,  1,236,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,157,219,157,196, 42,229,106,181, 49,236,133,159,118,246,249, 45,253,207, 71,126,121,188, 39, 64,214,245, 29,191, 30, 30,171,187,249, 73,128, 35, 46,234,216, 95,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,215, 93,254, 77, 83,247,122, 80,198,193,207, 63,125,246,128, 84,236,157, 19, 10,187,191,197,180,  8, 69,215, 54, 48,175,149,  7, 12,147, 84, 95,138,206,176, 81,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,144,127,144, 13,117, 16, 97, 97,173,117,107,104, 52, 49, 28, 60,118,243,114,166,162,  7,173,174,154,  1, 14, 36,208,190,117, 96, 61,  6,109,178, 22,207, 20,196,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 68,127, 44,120,176, 73,180, 39, 60, 38,205,223, 45,123,141,199,124,155,235, 76, 89, 97,172,150,103, 26, 73,125,233, 93, 65, 45,220,110,165,141,183, 89,180,243,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,127,129,210,172,252, 96,115,121,251, 94,197, 85,191,114,235, 38,140, 52,164,117,145,229,162,110, 83, 71,251, 10,160,175,254, 31, 48,208,203, 45, 48, 62,166, 44,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,156,107,129, 92,221,108,130,105,161, 38,222, 50, 12,128,160, 95,199,155,106,103, 74,104,134,123, 56, 81,168,105,143, 78,149, 44,185, 22,136,151,130, 10,  0, 35,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 49,223, 86, 61, 95,246,156, 39,146,  6,142,220,110, 21, 87,167,102,255, 16,246, 77,165, 34,  7,187,170,158, 61,180,158, 97,229,125,183, 34,221,173,191,  4, 63,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,197,146, 28, 52,167,115,219, 14,115,235,  4,192,144, 38,199, 75,208,101,136,132,  4,233,106,129,160,140, 94, 78, 75, 98,141, 17,245,169, 69,156, 29, 32,170,144,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 11,174, 80,155,212, 24,230,164,125,110, 41,129, 88,147,  3,248, 31, 97, 70,107,196,212,124,185,125,193, 85,154,225,  0, 42,236,174,123,135,131,147,109, 39, 16,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,219, 80,146, 51,227,149, 44,  3,246,114,110,186, 70,234,115,196,171,201, 94,140,201,137,120,119,  4,255,250,151,108, 34,167, 71,114, 57,123, 86,206,167, 89,197,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 25,199,127, 96,177,243, 36, 92,188,130,232,133, 11, 96,252, 15, 95,247,166,203, 25, 78, 18,139,135,141,225, 86, 52, 58, 27, 78,  1,154,174,178,141,210, 14, 73,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 84,246,206, 96, 86,203,111,181,194, 22,128,219,100,147,102,235, 32, 72, 65, 85,130, 92,163,132,247, 81, 54,132, 35, 69,206,119, 59,156,215,146,103, 71, 71, 41,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 93,200,  4,193, 91,107,172,123,179,238,208, 53, 74,115,185, 65,196,240,198,231, 53,148, 95,112, 48, 54,  2,152,125, 74,193,218, 18,198,155,109, 49, 72,232,228,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 54,185, 25,128, 44,211,194,241,195,136,216,248, 28, 55,104, 76,110,107,228,235,181,166,198,199,108, 97, 52,157,169, 28,129,223,213,154, 96,  2,109, 34,243, 48,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,170,203, 40,198,  3,145, 18,113,252,247, 92,177,157, 34,120,  9,132,172,166, 45,200, 39, 13,158,193,109,160, 47,143,147, 95, 57, 94,136,255, 97, 25, 17,210, 21,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  8, 47,198,165, 81, 62,174,213,234, 84,  3,178,123, 16, 80, 61,125,240,108, 12,131,203, 69,226, 83, 68, 67,108, 85, 22,129, 94, 69, 71,  3,150,133,178,108,111,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  6,111, 34,130,127,114,191,252, 99, 43,  8,230,246, 77,200, 74,145, 12,182,230, 34, 56, 68,103,127, 72,253,  5,250,105,116,  0,216,150,130, 87,  9, 65, 83,108,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,108, 91, 82, 99,168, 27,173, 57, 39, 99, 32, 73,155,100,176, 27,172,173, 32,166, 23,148,167,239, 43, 41, 71, 52,107,154,160,215,246,242, 58,158, 13,231,216, 52,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 75,248,125,230, 92, 45,  1,  9,219, 33,175,242,182, 86,225,225,128, 40, 21,235,195,181,194,185,167,253, 87,181,228, 47,233, 47, 39,103, 22,132,148, 23,141,111,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 57, 60, 97,239,147, 67,208, 19,107,229,254, 46,154,192,231, 65,189, 63,246,162,110,224,209,150, 71,231, 26,219,255,167, 75, 56,227,172, 39,118,239,247,137, 91,  0,  0,  0,  0,  0,  0,  0,  0
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
.word   0xfff4ffe0
OutMV1:
.word   0xfff80000
OutMV2:
.word   0xffd80008
OutMV3:
.word   0xfff00008
OutMV4:
.word   0xffec0008
OutMV5:
.word   0xffe0ffd4
OutMV6:
.word   0x002c0004
OutMV7:
.word   0xfffc0028
OutMV8:
.word   0xffdcffdc
OutMV9:
.word   0x00000008
OutMV10:
.word   0xfff40010
OutMV11:
.word   0xfff80000
OutMV12:
.word   0xffd8ffd4
OutMV13:
.word   0x0008ffd0
OutMV14:
.word   0x0024fff0
OutMV15:
.word   0x0024001c
; input parameters (+4672)
.global InputParamsBaseAddr
.align 4
InputParamsBaseAddr:
    .byte 0x04              ; Func_Mode             (4)
    .byte 0x0c              ; SWSearchRange         (12)
    .byte 0x40              ; SWB_Width         (64)
    .byte 0x10              ; SWStartOffset         (16)
    .byte 0x07              ; MbType         (7)
    .half 512               ; SWBaseAddr
    .half 0xffff            ; CBP
    .half 4608              ; MVBaseAddr
    .half 5200              ; OutYAddr
    .half 0                 ; InYBaseAddr

.text

;set dma (load data to dmem)
;Parameter0 (parameters)
{  MOVI.L R3, 0x0070  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R3, 0x1E05  |  NOP  |  NOP  |  NOP  |  NOP  }
;SAR (Source)
{  MOVI.L R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;DAR (Destination)
{  MOVI.L R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x1E00  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;SGR
{  MOVI.L R4, 0x0007  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x00A0  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;DSR
{  MOVI.L R4, 0x0004  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x0050  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;CTL (Size)
{  MOVI.L R4, 0x0002  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x04a0  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;EN
{  MOVI.L R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }

;Check DMA Done
{  MOVI.L R5, 0x0054       |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R5, 0x1E05       |  NOP  |  NOP  |  NOP  |  NOP  }
Label2:
{  LW R6, R5, 0            |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  SEQI R7, P1, P2, R6, 0  |  NOP  |  NOP  |  NOP  |  NOP  }
{  (P2)B Label2           |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }

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
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }


; test output if cannot dump memory
;set dma (store data to ddr)
;Parameter0 (bitstrem)
{  MOVI.L R3, 0x0070  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R3, 0x1E05  |  NOP  |  NOP  |  NOP  |  NOP  }
;SAR
{  MOVI.L R4, 0x1450  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x1E00  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;DAR
{  MOVI.L R4, 0x1450  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;SGR
{  MOVI.L R4, 0x0007  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x00A0  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;DSR
{  MOVI.L R4, 0x0004  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x0050  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;CTL
{  MOVI.L R4, 0x0012  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x0040  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }
;EN
{  MOVI.L R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R4, 0x0000  |  NOP  |  NOP  |  NOP  |  NOP  }
{  SW R4, R3, 4+      |  NOP  |  NOP  |  NOP  |  NOP  }

;Check DMA Done
{  MOVI.L R5, 0x0054       |  NOP  |  NOP  |  NOP  |  NOP  }
{  MOVI.H R5, 0x1E05       |  NOP  |  NOP  |  NOP  |  NOP  }
Label3:
{  LW R6, R5, 0            |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  SEQI R7, P1, P2, R6, 0  |  NOP  |  NOP  |  NOP  |  NOP  }
{  (P2)B Label3           |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
{  NOP                     |  NOP  |  NOP  |  NOP  |  NOP  }
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
.byte   156,185,191,119, 65,255, 31, 73, 11,232,202,178,153,137,  2,244
.byte   157, 45, 56,142,137,149,227,227,235,179,207,243,127,111,196, 27
.byte    40,131,146,105,130,177,178,141,154,125, 64, 51,  6, 66, 40,163
.byte   111, 96, 49,248,245, 20,219,225,199,170,212, 70, 26,152, 97, 66
.byte    27,244,172,157,165, 94, 43, 63,219,107,115,225,173,155,132, 28
.byte   251,181, 20,240,201,239,209,145,154,165,215,180, 61, 57,246, 88
.byte    45,162,246,210,  1, 33, 18,220,140,133,190, 57, 32, 66, 85, 27
.byte   248,105, 11,193, 88,221, 82,242,130, 42,166,192, 99,157, 24,144
.byte    63, 14, 98, 64, 47,116, 29,187,249,219,244, 25, 29, 73, 52, 21
.byte   178, 64,215, 11, 29, 41,253,159, 83,164, 95,182, 65,120, 70,128
.byte   134,169,193,182, 29,222,113, 23,185,102, 48,214,175,101,236, 98
.byte   165,195,109,194,236,106, 97, 64, 14,193,246, 79, 57, 61,208,191
.byte   230,145,117,  3,111,231, 26, 40, 77, 75,254,252,176,234, 94, 85
.byte   173,203, 23,154, 54,120,218, 68, 57,208,148,114, 13,100, 50,243
.byte   245,167,247,100,142, 17,140,219, 92,138,216, 12,117, 54, 97, 34
.byte     2,120,188, 56,241,150,124, 42,103, 16,157,116,116,207,104,105


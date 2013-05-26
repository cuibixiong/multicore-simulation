;============================================================================================================================================================================================================================================================================================================================================
;               frame=37681  mbx=1  mby=29
;============================================================================================================================================================================================================================================================================================================================================
.data

; Residual Cb (+0)
.global InCbBaseAddr
.align 3
InCbBaseAddr:
.half     209,  -17,  116,   45,  171, -125,   31,  -53
.half      48, -165,   65,  -83,  166,   49,  -20,  192
.half     -13,    7,   10,   35,   72,  -18,   58,  -71
.half     165, -144,  -16,   88, -129, -127,   35,  201
.half    -208,   82,  -22, -193, -121,   84,   95,   42
.half    -199,   18, -238,  -20,  -95,   -4,   14, -132
.half    -138,   40,  -70,   53, -154,  -55,  136,  -26
.half    -205, -120,   91, -113, -160,   91,  -57, -113

; Residual Cr (+128)
.global InCrBaseAddr
.align 3
InCrBaseAddr:
.half      37,   91,  -91,  -52,   -1,   20,  164,  -79
.half    -169,   65,  -64,  -75,  -41,  -70,  217,   15
.half     218,   62,   41,  197,  234,  189,   23,  -28
.half     -93,   96,  152,  -10, -121,   56, -170,  -81
.half     187,   12,   14,   -7,  -53,  -40,   29,  175
.half     -34,  -30,  -96, -145,  -82,  145,  -69,   51
.half      42,  144,   -7,   59,  127,  -89,  -15,   81
.half     -47, -228, -178,  126,  132,  -33,  159,   72

; Search Window (+256)
.global SWBaseAddr
.align 3
SWBaseAddr:
;         0   1   2   3   4   5   6   7   8   9  10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25  26  27  28  29  30  31  32  33  34  35  36  37  38  39  40  41  42  43  44  45  46  47  48  49  50  51  52  53  54  55  56  57  58  59  60  61  62  63 
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte     0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0
.byte    24,233, 47,146, 83,215,165,198,  0,  0,  0,  0,  0,  0,  0,  0,249,201, 43,164, 52,100, 77,251,174,163,146,127, 29, 29,230, 78, 23, 67,141, 99,247,160,210, 83,  0,  0,  0,  0,  0,  0,  0,  0,149,  9, 24, 79,198,116,174, 38,120,221, 48, 59, 95, 24,130,224
.byte   112,155,119,194,234,123,175,116,  0,  0,  0,  0,  0,  0,  0,  0, 75, 48,154, 25, 15,207,185,213, 53, 20, 76,200,157, 64,114,150,199, 10,180,134,145,163, 81,229,  0,  0,  0,  0,  0,  0,  0,  0,106,221,176,183, 54,245, 30,209,190,101,166,159,160, 67,  6,189
.byte   188,161,  1,184,215,216,109,203,  0,  0,  0,  0,  0,  0,  0,  0, 15, 74, 47,251,178, 15, 65,226,109,188, 49,106, 16,191, 54,164,238,235,156,179,199, 25,187,218,  0,  0,  0,  0,  0,  0,  0,  0,136, 91, 18,204, 59, 37,166,178,125,228,126, 28,229,191, 52, 70
.byte    11, 83,208, 39, 30, 34,119,206,  0,  0,  0,  0,  0,  0,  0,  0, 56,190,  6,134, 14,213,121,138,104, 33,200, 29,161,185,176,233,167, 17,217,222,253,152,173,223,  0,  0,  0,  0,  0,  0,  0,  0,135,106, 40, 22, 69, 68,122, 54, 44,105,217,160,245, 14,132,233
.byte   149,  1,197,200, 61, 45,162, 69,  0,  0,  0,  0,  0,  0,  0,  0,217, 73,201, 65, 91,120,126,245,  9,155, 33,183,192,215,134, 22, 95, 94, 66, 33, 64,187, 34,171,  0,  0,  0,  0,  0,  0,  0,  0,239,161,102,106,250, 12, 97,138, 72,217,195, 63,217, 55,165, 95
.byte    93, 59, 79,101,168,254,177,204,  0,  0,  0,  0,  0,  0,  0,  0,106,132,164,202, 20,155, 71,250, 17, 58, 62,247, 67, 54, 70,144, 20,  1,  6, 99,  0,239,249,194,  0,  0,  0,  0,  0,  0,  0,  0,225,139, 59,100,162,155,177,220,251,214,  2,123, 36,229,124,176
.byte    87,166,192,172, 55,113,158, 84,  0,  0,  0,  0,  0,  0,  0,  0,244,153,  9,173,181, 49, 96,172,213,190,237,135, 35,133,127,151, 48, 96, 83,117,221,151, 29,115,  0,  0,  0,  0,  0,  0,  0,  0,  6, 50,144, 76,228,251,193,189,231, 36, 35,149,134,212, 81,115
.byte   199,174,104, 85, 66, 49, 70, 85,  0,  0,  0,  0,  0,  0,  0,  0,  4,151, 53,135,165, 45, 93,151,244, 21,145, 42,159, 96,184,177, 73,252, 54, 13,130,160,200, 58,  0,  0,  0,  0,  0,  0,  0,  0, 18,242, 31, 88, 12, 36,196,181, 61,180,194,200,155, 62,180,188
.byte   174, 16,149,167, 47,180,108,222,  0,  0,  0,  0,  0,  0,  0,  0,  6,238, 44, 95,179, 10,116, 40,  4, 55, 12,121, 14,239,115,142,125,219,111, 73,177,163,220,113,  0,  0,  0,  0,  0,  0,  0,  0,106,151, 24,204,191,107,187, 59,214,108,140, 79,170, 84, 68,121
.byte    50,242, 53,133,254,171, 29, 48,  0,  0,  0,  0,  0,  0,  0,  0,179,221,162, 14,  1,  5, 65,237, 16,203,109,239, 35, 63,128,  0,222,212,  1, 54,138, 64,152, 46,  0,  0,  0,  0,  0,  0,  0,  0, 21,191, 87,176,253,116,147,240,253,166,114,156,163,143, 29, 51
.byte   118, 70,243,115,195, 64,179,235,  0,  0,  0,  0,  0,  0,  0,  0,150,212,109,159,102, 31,251, 25,254,  2, 13,105, 17, 75,173, 92, 48,227,229, 90,147,190, 90,177,  0,  0,  0,  0,  0,  0,  0,  0,251,  3,195,144,222,230, 32, 45, 12, 51,135, 11, 20, 46,123, 67
.byte   215,  2, 59,209, 74,172,149, 76,  0,  0,  0,  0,  0,  0,  0,  0,102,228,116,126, 98,180, 69, 82, 65,159,125,142,166,254, 41, 10,238, 75,128,157,133,144,254,214,  0,  0,  0,  0,  0,  0,  0,  0,237,115, 77,133,202, 15, 16,188,152, 52, 19, 64,207, 89,233,143
.byte   181, 35,196, 88,200,190, 93, 21,  0,  0,  0,  0,  0,  0,  0,  0,150, 11,254, 83,104,253, 59, 32,245, 93,163,206,179,125,121, 31, 42,179,119, 44, 85,  3,222, 82,  0,  0,  0,  0,  0,  0,  0,  0,235, 19,153,164, 81,145,  7, 18, 34, 49, 46,237,123, 73,201, 16
.byte    69, 26,115, 60,186,135,151, 32,  0,  0,  0,  0,  0,  0,  0,  0,  1,131,161,145,205,158,216, 86,232, 65,241,216,238,189,117,158, 33,231,171, 64,218,147,221,127,  0,  0,  0,  0,  0,  0,  0,  0,115,164, 82, 85, 15, 70,189,141,122,172,153,185,150, 75,210,118
.byte    26,172, 26,254,109,196,  5,214,  0,  0,  0,  0,  0,  0,  0,  0, 87, 43,250,  2,154, 52,145,133,244,190, 75,168,212,152, 12,235, 22, 21,174,181, 50,255, 74,249,  0,  0,  0,  0,  0,  0,  0,  0, 97, 72,  4,233,191, 15,210,215,159,103,250,  5, 47,107,185,100
.byte   217,203, 82,201,215,206, 79,  9,  0,  0,  0,  0,  0,  0,  0,  0,233, 96,142, 58, 55,205,139,168,207,187,  3,158,235,111,173,233, 74,103,  5,138,151, 99,118, 30,  0,  0,  0,  0,  0,  0,  0,  0,148, 52,  8, 98,210, 68,184,166, 84,233,185,112, 99,240, 69,150
.byte    36, 69,177, 10, 48,113,165,240,  0,  0,  0,  0,  0,  0,  0,  0,202,  8,125, 62,  9, 89,243, 77,140, 52, 29,105,148, 87,173,  2, 10,161,131,186, 99, 35,190, 50,  0,  0,  0,  0,  0,  0,  0,  0,196,205,166,104,173,182, 66,204, 24,223,253,244, 55,228, 96,119
.byte     5, 10, 53,221, 49, 68, 19,148,  0,  0,  0,  0,  0,  0,  0,  0,214, 17, 33,231,177,154,159,213,167,101,157, 18,210,241, 65,170,187, 39,242,230,119,208, 25,186,  0,  0,  0,  0,  0,  0,  0,  0, 36,243,122,182, 63, 94,156,196, 26, 88,111,206,131,120,225, 23
.byte   142,151,248, 51,199,139, 69,178,  0,  0,  0,  0,  0,  0,  0,  0, 52, 18,105,159,168,180,114,  1, 25,159,254, 52,243,255,145,193,211,247, 54,161,231, 58,140, 94,  0,  0,  0,  0,  0,  0,  0,  0,250,209, 37, 60,145,234, 94,120, 12, 78,124, 47,120,  6,148,197
.byte   129, 59, 42, 14,197,109, 92,  5,  0,  0,  0,  0,  0,  0,  0,  0,152,172,205,197, 88,198, 89,175, 91,222,125,244,249,126, 12,157, 74, 78,  0,131,213, 30, 28,183,  0,  0,  0,  0,  0,  0,  0,  0, 81,150,224,192,197,234,135,231, 70, 83, 18, 68,127, 63, 48,164
.byte    56,144,165, 30, 87,175, 24,128,  0,  0,  0,  0,  0,  0,  0,  0, 99, 11,246, 36,127, 46,211, 47, 22,163,107,195,135, 79, 77,155,166, 46,180, 36, 76, 43,223, 46,  0,  0,  0,  0,  0,  0,  0,  0,228,224,255,239,163,139,204, 85,106, 64,178, 48, 48,227, 84,176
.byte   202,215, 66,252,240, 85, 23, 58,  0,  0,  0,  0,  0,  0,  0,  0, 73,111,213,229, 99, 64,136, 96,129,239,164, 75, 90, 39,217,161, 16,160,188,165, 60,121,181,152,  0,  0,  0,  0,  0,  0,  0,  0, 35,180, 50, 92, 52,176,219,193,240, 38, 13,252,250,114,167, 35
.byte    98,151, 48, 42, 74, 19,210, 60,  0,  0,  0,  0,  0,  0,  0,  0,165,191, 55, 70,  4,  3, 20,  1,180,126,149,156,183,254,167,103, 38,153,221, 53, 45, 94, 20,134,  0,  0,  0,  0,  0,  0,  0,  0, 41, 74, 10,145,109,222,164,222,216,247,123,133,242,207, 56, 77
.byte    20, 69,128, 55, 81, 64, 24, 47,  0,  0,  0,  0,  0,  0,  0,  0,236,125, 54,  7, 12,188, 62,  0, 74, 57,116,176,144, 28,215,233,102, 74, 76,140,244,143, 64, 98,  0,  0,  0,  0,  0,  0,  0,  0,187,129, 26,237,  5,179, 36,160,151,123, 99,190,195, 98, 89,195
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

; Motion Vector (+4352)
.global MVBaseAddr
MVBaseAddr:

;.align 4
;MV0:
.word   0x00000000
;MV1:
.word   0x00000000
;MV2:
.word   0x00000000
;MV3:
.word   0x00000000
;MV4:
.word   0x00000000
;MV5:
.word   0x00000000
;MV6:
.word   0x00000000
;MV7:
.word   0x00000000
;MV8:
.word   0x00000000
;MV9:
.word   0x00000000
;MV10:
.word   0x00000000
;MV11:
.word   0x00000000
;MV12:
.word   0x00000000
;MV13:
.word   0x00000000
;MV14:
.word   0x00000000
;MV15:
.word   0x00000000

; input parameters (+4416)
.global InputParamsBaseAddr
.align 4
InputParamsBaseAddr:
    .byte 0x01              ; Func_Mode             (1)
    .byte 0x10              ; SWSearchRange         (16)
    .byte 0x40              ; SWB_Width             (64)
    .byte 0x10              ; SW_Start_Offset       (16)
    .byte 0x04              ; MbType                (4)
    .half 256               ; SWBaseAddr
    .half 0xffff            ; CBP_Cb
    .half 0xffff            ; CBP_Cr
    .half 4352              ; MVBaseAddr
    .half 4800              ; OutCbBaseAddr
    .half 4864              ; OutCrBaseAddr
    .half 0                 ; InCbBaseAddr

    .half 128                ; InCrBaseAddr

.text
; set CFU_Info_Sel(SR13) according to interested

    {   MOVI.L SR13, 2                          |   NOP |   NOP |   NOP |   NOP }

; store Input_Addr(Base+4416) to ME (SR4-7 = CFU0-3, ME use SR6)
    {   MOVI R0, 0x80001140                 |   NOP |   NOP |   NOP |   NOP }
    {   COPY SR6, R0                                |   NOP |   NOP |   NOP |   NOP }

; test if store success
    {   TEST P1, P2, 0xFFFF, 0x8000 |   NOP |   NOP |   NOP |   NOP }

; start function (MC_Chroma)
    {   MOVI.H R1, 0x0000                       |   NOP |   NOP |   NOP |   NOP }
    {   MOVI.L R1, 0x0058                       |   NOP |   NOP |   NOP |   NOP }
    {   COPY SR6, R1                                |   NOP |   NOP |   NOP |   NOP }

; test if busy
    {   TEST P3, P4, 0xFFFF, 0x2058 |   NOP |   NOP |   NOP |   NOP }

; wait for done (500 cycles)
; change CFU_Command to Waiting
    {   MOVI.H R2, 0x2000                       |   NOP |   NOP |   NOP |   NOP }
    {   MOVI.L R2, 0x0000                       |   NOP |   NOP |   NOP |   NOP }
    {   COPY SR6, R2                                |   NOP |   NOP |   NOP |   NOP }

    {   MOVI R3, 500                               |   NOP |   NOP |   NOP |   NOP }
    {   WAIT R3, 0xFFFF, 0x0058         |   NOP |   NOP |   NOP |   NOP }

; test output if cannot dump memory

; trap
    {   NOP                         |   NOP |   NOP |   NOP |   NOP }
    {   NOP                         |   NOP |   NOP |   NOP |   NOP }
    {   NOP                         |   NOP |   NOP |   NOP |   NOP }
    {   NOP                         |   NOP |   NOP |   NOP |   NOP }
    { TRAP                      |   NOP |   NOP |   NOP |   NOP }

; values to be checked
;.align 4
;OutCbBaseAddr:
;OutCbReconstructed:
;.byte     213,   38,  128,  166,  185,  114,  146,   89
;.byte      64,   38,  174,  156,  201,  112,  108,  192
;.byte     241,    9,   23,  140,   89,   57,  231,   21
;.byte     230,   15,  109,  230,   37,  127,   76,  211
;.byte      37,  175,  141,   13,   58,  209,  216,   73
;.byte      33,   83,    3,  196,  143,  185,  131,   26
;.byte     106,  230,    5,  221,   58,   97,  148,  209
;.byte       2,   67,   94,   45,   75,  202,  116,  120

;.align 4
;OutCrBaseAddr:
;OutCrReconstructed:
;.byte     251,  199,   49,   27,  169,  104,  232,   42
;.byte      84,  231,   50,   81,  122,   73,  246,   66
;.byte     230,  113,  176,  208,  254,  235,  146,   39
;.byte      59,  148,  171,   54,   86,  145,   63,   62
;.byte     221,   61,   60,  230,   70,   33,  230,  191
;.byte      88,  142,   57,   40,   68,  220,  141,  169
;.byte     201,  247,  243,   64,  174,   18,  170,  181
;.byte      37,    5,    7,  238,  231,  207,  228,  222


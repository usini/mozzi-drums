#ifndef pad8_H_
#define pad8_H_
 
#if ARDUINO >= 100
#include "Arduino.h"
#else
#include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"
 
#define pad8_NUM_CELLS 4545
#define pad8_SAMPLERATE 32768
 
CONSTTABLE_STORAGE(int8_t) pad8_DATA [] = {2, 1, -2, -3, -2, 2, 7, 13, 17, 18,
17, 15, 12, 9, 6, 6, 6, 7, 8, 8, 8, 7, 7, 8, 9, 10, 10, 9, 8, 5, 4, 2, 1, 2, 4,
8, 12, 12, 8, -1, -7, -7, 1, 13, 21, 18, 5, -12, -27, -33, -31, -26, -22, -22,
-24, -26, -26, -26, -27, -29, -29, -24, -16, -8, -5, -10, -21, -32, -36, -31,
-20, -10, -7, -11, -18, -23, -23, -20, -17, -18, -21, -25, -25, -19, -10, 0, 6,
7, 2, -5, -11, -13, -8, 0, 10, 16, 16, 11, 5, 2, 4, 10, 15, 16, 9, 0, -6, -3, 8,
24, 36, 39, 32, 20, 9, 5, 8, 12, 15, 13, 9, 7, 10, 17, 26, 31, 29, 21, 11, 4, 2,
7, 15, 23, 28, 28, 22, 14, 5, -2, -6, -5, 0, 6, 13, 18, 22, 25, 28, 31, 32, 30,
27, 23, 21, 23, 27, 31, 32, 31, 27, 26, 26, 28, 29, 27, 22, 17, 16, 18, 23, 27,
26, 21, 14, 9, 8, 11, 14, 13, 8, 2, -4, -5, -3, 1, 2, 0, -5, -10, -12, -12, -10,
-9, -10, -13, -14, -15, -14, -14, -15, -18, -20, -21, -20, -18, -17, -19, -21,
-24, -25, -24, -22, -20, -21, -23, -25, -27, -28, -29, -30, -31, -32, -30, -27,
-24, -22, -23, -26, -29, -31, -31, -30, -29, -29, -29, -29, -29, -27, -25, -24,
-25, -26, -27, -27, -27, -27, -26, -26, -26, -26, -25, -24, -24, -23, -23, -23,
-23, -23, -23, -22, -22, -21, -21, -20, -20, -19, -18, -17, -15, -15, -15, -16,
-17, -17, -17, -16, -15, -14, -14, -13, -13, -14, -13, -13, -12, -10, -9, -7,
-6, -5, -4, -3, -1, 0, 1, 1, 2, 3, 4, 5, 6, 7, 9, 12, 15, 18, 19, 19, 19, 20,
23, 27, 31, 33, 34, 34, 33, 34, 35, 37, 39, 41, 41, 40, 38, 37, 38, 40, 41, 43,
43, 43, 43, 43, 44, 45, 46, 45, 42, 40, 39, 39, 40, 40, 38, 36, 35, 35, 36, 36,
34, 32, 29, 29, 31, 33, 32, 29, 26, 23, 22, 24, 25, 25, 24, 22, 21, 21, 20, 18,
16, 13, 13, 13, 15, 15, 13, 9, 7, 7, 9, 10, 8, 2, -3, -6, -4, 0, 3, 1, -6, -12,
-15, -13, -8, -4, -4, -6, -9, -10, -10, -10, -12, -14, -16, -16, -13, -10, -9,
-12, -17, -24, -29, -32, -33, -33, -33, -34, -34, -33, -31, -30, -31, -33, -34,
-35, -35, -34, -33, -33, -34, -34, -34, -33, -32, -32, -32, -31, -31, -30, -30,
-29, -29, -29, -28, -28, -28, -27, -27, -26, -26, -26, -25, -25, -24, -24, -23,
-23, -24, -23, -22, -20, -18, -17, -17, -17, -17, -16, -13, -11, -9, -9, -9, -8,
-6, -3, 0, 2, 3, 2, 3, 4, 5, 5, 4, 2, 2, 4, 7, 10, 11, 9, 6, 5, 8, 14, 20, 22,
20, 14, 10, 9, 14, 19, 23, 22, 18, 14, 13, 16, 20, 21, 21, 19, 19, 22, 26, 29,
28, 24, 20, 19, 22, 28, 30, 28, 22, 15, 14, 17, 23, 26, 25, 19, 14, 12, 15, 20,
25, 27, 26, 26, 25, 25, 24, 23, 22, 22, 24, 24, 23, 20, 16, 14, 15, 18, 21, 21,
19, 14, 11, 12, 14, 17, 18, 15, 11, 8, 7, 9, 11, 11, 8, 4, 1, -1, -2, -2, -1,
-1, 0, 0, 0, -2, -5, -8, -9, -8, -7, -6, -5, -6, -7, -9, -10, -10, -10, -11,
-12, -14, -16, -17, -16, -15, -15, -17, -20, -24, -25, -23, -20, -18, -19, -23,
-27, -27, -25, -21, -19, -19, -22, -25, -27, -26, -25, -24, -24, -26, -26, -23,
-19, -16, -16, -18, -22, -23, -22, -18, -14, -13, -14, -16, -18, -19, -19, -19,
-19, -19, -17, -15, -13, -12, -12, -13, -13, -13, -12, -11, -11, -12, -14, -15,
-16, -15, -13, -11, -10, -10, -12, -15, -16, -16, -15, -14, -13, -14, -15, -17,
-17, -16, -15, -14, -13, -14, -14, -14, -13, -12, -11, -12, -12, -11, -8, -3, 0,
1, -1, -4, -6, -5, -2, 2, 5, 5, 4, 2, 2, 5, 8, 11, 12, 11, 10, 11, 14, 17, 19,
19, 17, 16, 17, 21, 25, 29, 31, 31, 31, 30, 30, 31, 30, 29, 29, 31, 34, 38, 40,
38, 36, 34, 35, 38, 39, 38, 35, 32, 32, 33, 35, 35, 33, 30, 27, 26, 26, 25, 24,
23, 22, 23, 24, 23, 20, 16, 13, 14, 18, 22, 22, 16, 8, 2, 2, 6, 10, 11, 7, 1,
-3, -2, 2, 6, 6, 1, -4, -7, -6, -3, 1, 3, 4, 2, 0, -3, -6, -8, -9, -9, -8, -6,
-5, -7, -10, -13, -14, -14, -12, -10, -10, -12, -15, -18, -19, -20, -20, -20,
-19, -18, -16, -17, -19, -24, -28, -30, -29, -26, -23, -22, -23, -26, -29, -29,
-27, -23, -20, -18, -19, -22, -26, -29, -28, -26, -24, -22, -23, -25, -26, -25,
-24, -23, -23, -25, -27, -26, -21, -16, -12, -12, -16, -21, -24, -22, -17, -12,
-10, -13, -18, -21, -20, -16, -12, -9, -9, -9, -8, -6, -2, 2, 3, 1, -1, -3, -4,
-3, -2, 0, 2, 4, 6, 6, 6, 5, 5, 6, 8, 10, 10, 8, 6, 6, 9, 15, 20, 21, 18, 14,
10, 10, 13, 16, 18, 17, 15, 13, 14, 16, 19, 20, 18, 16, 16, 17, 19, 21, 20, 19,
17, 17, 19, 20, 20, 16, 13, 10, 12, 16, 21, 23, 20, 14, 8, 6, 9, 15, 19, 21, 18,
14, 10, 10, 12, 14, 16, 15, 13, 12, 13, 15, 17, 17, 15, 13, 13, 15, 17, 19, 17,
13, 9, 6, 8, 12, 16, 18, 17, 14, 11, 10, 10, 12, 13, 12, 11, 9, 7, 7, 7, 8, 9,
9, 9, 7, 4, 1, -1, 0, 2, 4, 4, 3, -1, -4, -6, -5, -4, -3, -6, -10, -14, -15,
-12, -7, -4, -4, -8, -13, -17, -18, -16, -14, -14, -15, -16, -17, -16, -14, -14,
-15, -18, -20, -20, -19, -17, -17, -19, -21, -22, -20, -16, -14, -15, -18, -21,
-22, -20, -18, -16, -16, -17, -18, -17, -16, -16, -17, -19, -19, -17, -15, -13,
-12, -13, -15, -15, -14, -12, -10, -10, -11, -12, -12, -10, -8, -8, -10, -12,
-13, -11, -8, -6, -6, -8, -10, -12, -12, -11, -9, -7, -5, -4, -4, -6, -9, -11,
-10, -8, -5, -4, -5, -8, -10, -9, -7, -4, -3, -3, -4, -3, -1, 2, 3, 2, 0, -2,
-1, 2, 6, 8, 6, 3, 1, 2, 5, 8, 9, 8, 7, 9, 14, 19, 22, 20, 16, 13, 11, 13, 17,
21, 23, 23, 22, 19, 16, 15, 16, 19, 23, 25, 26, 25, 24, 24, 25, 26, 27, 25, 23,
21, 20, 21, 23, 24, 24, 22, 19, 18, 18, 20, 22, 21, 19, 17, 15, 15, 16, 18, 19,
19, 17, 14, 12, 10, 10, 10, 10, 9, 8, 6, 4, 2, 1, 1, 1, 2, 3, 4, 4, 3, 1, -2,
-3, -4, -3, -2, -1, -2, -3, -4, -6, -8, -10, -12, -11, -9, -6, -4, -4, -7, -10,
-12, -13, -11, -9, -9, -9, -9, -9, -8, -8, -8, -10, -11, -13, -12, -11, -10,
-10, -11, -12, -13, -12, -10, -8, -7, -8, -11, -14, -16, -17, -15, -14, -12,
-13, -14, -15, -15, -14, -13, -12, -13, -15, -17, -16, -13, -10, -8, -10, -14,
-18, -19, -17, -12, -9, -9, -11, -14, -14, -12, -11, -10, -12, -13, -13, -11,
-9, -9, -10, -11, -11, -9, -6, -4, -4, -6, -9, -10, -8, -5, -2, -2, -4, -6, -7,
-6, -5, -4, -3, -3, -1, 2, 4, 4, 0, -4, -6, -6, -2, 3, 6, 9, 9, 8, 6, 4, 2, 3,
6, 10, 12, 12, 9, 5, 4, 6, 10, 13, 13, 10, 7, 7, 10, 14, 17, 15, 11, 6, 3, 5, 9,
12, 12, 9, 7, 7, 9, 11, 12, 10, 8, 7, 8, 10, 12, 12, 11, 10, 9, 10, 9, 8, 6, 5,
6, 8, 10, 12, 13, 13, 13, 13, 13, 13, 12, 11, 10, 11, 12, 14, 14, 13, 12, 10,
10, 11, 12, 13, 13, 12, 11, 10, 9, 8, 8, 9, 10, 12, 14, 14, 12, 11, 8, 6, 3, 2,
1, 3, 7, 9, 10, 7, 3, -2, -5, -5, -3, -1, 0, 1, 1, 1, -1, -3, -6, -8, -8, -6,
-3, -1, -2, -6, -11, -15, -15, -12, -9, -7, -7, -9, -10, -11, -11, -11, -12,
-12, -12, -11, -10, -10, -11, -13, -15, -16, -16, -15, -14, -13, -12, -12, -11,
-12, -13, -14, -14, -13, -12, -11, -11, -13, -16, -18, -17, -14, -10, -8, -9,
-12, -15, -16, -15, -12, -10, -10, -11, -12, -12, -10, -9, -8, -8, -10, -11,
-11, -10, -8, -7, -6, -7, -8, -9, -8, -7, -6, -5, -6, -6, -7, -6, -4, -2, -1, 0,
0, 0, -1, -1, -1, -1, 1, 3, 5, 7, 7, 6, 6, 6, 7, 7, 5, 2, -1, -2, 0, 4, 7, 8, 7,
6, 6, 7, 9, 11, 10, 8, 5, 4, 5, 8, 9, 10, 9, 8, 9, 10, 11, 11, 10, 9, 9, 10, 11,
10, 9, 9, 10, 11, 13, 12, 10, 7, 6, 8, 10, 12, 12, 10, 7, 6, 8, 10, 13, 13, 12,
10, 9, 9, 9, 9, 7, 5, 5, 6, 9, 10, 10, 8, 6, 5, 7, 10, 13, 13, 11, 7, 3, 2, 3,
5, 8, 9, 8, 6, 4, 3, 2, 1, 2, 3, 4, 5, 5, 4, 1, -1, -2, -1, 1, 3, 3, 2, 0, -1,
-2, -2, -1, 0, 1, 0, -1, -3, -5, -7, -7, -7, -6, -4, -3, -3, -4, -4, -5, -5, -4,
-4, -5, -6, -7, -7, -6, -5, -4, -4, -5, -6, -7, -8, -8, -8, -8, -9, -9, -9, -9,
-8, -8, -8, -8, -8, -8, -8, -9, -9, -10, -10, -9, -10, -10, -10, -10, -10, -9,
-8, -9, -11, -12, -13, -12, -9, -7, -6, -7, -9, -11, -11, -11, -9, -7, -6, -6,
-7, -7, -7, -6, -6, -6, -6, -5, -4, -2, -1, -1, -2, -4, -5, -5, -5, -4, -3, -3,
-3, -4, -5, -6, -5, -4, -2, 0, 1, 1, 0, -1, -1, -2, -2, -1, 0, 1, 2, 3, 2, 2, 1,
0, 0, 0, 2, 4, 6, 7, 6, 5, 3, 2, 2, 3, 5, 6, 6, 4, 3, 3, 5, 9, 12, 13, 10, 6, 2,
1, 2, 4, 6, 7, 7, 7, 7, 7, 7, 7, 7, 7, 8, 9, 10, 10, 10, 9, 8, 7, 8, 9, 10, 10,
10, 8, 7, 7, 8, 9, 11, 12, 11, 11, 10, 11, 12, 12, 11, 9, 7, 6, 7, 10, 11, 12,
11, 8, 6, 4, 4, 5, 7, 8, 9, 8, 6, 3, 0, 0, 1, 5, 8, 9, 5, 0, -3, -3, -1, 2, 3,
1, -2, -4, -3, 0, 3, 3, 1, -2, -4, -4, -3, -2, -2, -3, -4, -4, -3, -2, -3, -5,
-8, -10, -10, -9, -8, -7, -8, -8, -8, -7, -8, -9, -10, -11, -9, -8, -7, -9, -11,
-12, -10, -7, -6, -6, -10, -14, -16, -14, -11, -7, -6, -7, -9, -11, -10, -8, -7,
-7, -8, -11, -12, -12, -10, -8, -6, -6, -7, -7, -7, -6, -5, -5, -5, -7, -8, -10,
-10, -8, -4, -2, -1, -3, -6, -7, -7, -4, -1, 0, -1, -2, -2, -1, 0, 0, -2, -4,
-4, -1, 3, 5, 5, 2, -1, -2, 0, 3, 6, 5, 3, 0, -1, 0, 2, 4, 4, 2, 1, 2, 5, 7, 8,
7, 5, 3, 2, 3, 4, 4, 4, 4, 4, 5, 5, 4, 4, 3, 4, 5, 5, 5, 4, 3, 2, 3, 4, 6, 8, 8,
7, 6, 5, 4, 5, 5, 5, 5, 4, 3, 3, 4, 4, 3, 2, 2, 3, 5, 7, 8, 6, 4, 1, 1, 4, 6, 7,
6, 2, 0, 0, 3, 7, 10, 9, 5, 0, -2, -1, 2, 5, 6, 5, 3, 3, 4, 5, 6, 5, 4, 4, 4, 5,
5, 4, 2, 1, 2, 4, 6, 7, 6, 3, 0, -2, -1, 2, 4, 6, 5, 2, 0, -1, -1, 0, 2, 3, 3,
3, 3, 1, 0, -2, -3, -3, -2, -1, 1, 1, 1, 0, -1, -1, -1, -1, -2, -3, -4, -3, -2,
-1, 0, -1, -3, -5, -6, -5, -3, -2, -2, -3, -5, -6, -6, -5, -5, -4, -4, -4, -5,
-6, -7, -8, -7, -7, -6, -6, -6, -8, -8, -8, -7, -5, -4, -5, -5, -6, -7, -7, -8,
-8, -8, -8, -7, -6, -6, -5, -6, -6, -6, -6, -6, -5, -5, -5, -5, -4, -4, -4, -4,
-4, -5, -5, -5, -5, -5, -6, -5, -4, -3, -2, -3, -5, -5, -5, -3, -1, -1, -2, -4,
-4, -3, -1, 0, 0, -2, -4, -5, -4, -2, -1, 0, 1, 1, 1, 1, 1, 0, 0, 0, 1, 2, 4, 4,
3, 2, 2, 4, 5, 6, 5, 3, 2, 2, 4, 5, 5, 5, 5, 6, 8, 8, 7, 5, 3, 3, 5, 8, 9, 8, 6,
5, 6, 8, 10, 11, 9, 7, 6, 7, 9, 10, 10, 7, 5, 6, 8, 10, 11, 8, 5, 3, 4, 7, 11,
11, 8, 3, 0, 0, 3, 6, 8, 8, 6, 4, 1, 1, 1, 2, 3, 3, 3, 3, 3, 4, 4, 4, 4, 3, 2,
0, 0, 0, 0, 1, 1, 1, 0, -1, 0, 0, 1, 1, 0, 0, 0, 1, 1, -1, -2, -3, -3, -1, 0,
-1, -2, -4, -5, -4, -2, -1, -1, -2, -3, -3, -3, -3, -3, -5, -6, -6, -5, -4, -3,
-3, -5, -6, -6, -6, -5, -5, -5, -7, -7, -7, -6, -5, -5, -5, -6, -5, -4, -4, -5,
-7, -8, -9, -8, -7, -5, -4, -4, -4, -5, -5, -5, -6, -6, -6, -6, -5, -4, -4, -3,
-4, -4, -5, -5, -4, -4, -3, -3, -4, -5, -5, -3, -1, 1, 0, -1, -4, -5, -5, -3,
-1, -1, -1, -2, -2, -1, 1, 2, 2, 1, -1, -3, -3, -1, 1, 3, 4, 4, 4, 4, 3, 3, 2,
1, 1, 1, 2, 2, 3, 3, 4, 4, 3, 2, 1, 1, 2, 3, 4, 4, 3, 2, 2, 3, 4, 4, 3, 3, 2, 2,
1, 1, 1, 1, 2, 3, 3, 4, 4, 3, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 2, 2, 2, 2, 3, 3, 2,
1, 0, -1, 0, 1, 3, 3, 2, 1, 1, 2, 3, 4, 3, 2, 1, 1, 1, 2, 3, 2, 2, 1, 1, 2, 2,
3, 3, 3, 2, 2, 1, 1, 2, 3, 4, 4, 4, 3, 2, 2, 1, 1, 1, 1, 1, 2, 3, 3, 4, 3, 2, 1,
1, 1, 2, 2, 2, 2, 1, 2, 2, 3, 3, 2, 1, 0, 0, 0, 1, 1, 1, 0, 0, -1, -1, -1, -1,
0, 0, 1, 0, -1, -2, -3, -3, -2, -1, 0, 0, -1, -2, -3, -4, -4, -3, -2, -1, -1,
-2, -3, -4, -4, -3, -3, -3, -4, -5, -5, -5, -4, -3, -2, -3, -3, -4, -4, -5, -5,
-6, -7, -6, -5, -3, -3, -3, -5, -7, -8, -7, -5, -3, -2, -3, -4, -5, -5, -5, -5,
-4, -4, -4, -4, -4, -5, -4, -3, -2, -1, 0, -1, -3, -4, -5, -4, -3, -1, 0, 0, 0,
-1, -2, -3, -3, -3, -2, -1, -1, -1, -1, -1, -1, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1,
0, 0, 0, 1, 2, 3, 2, 1, 1, 1, 1, 2, 3, 4, 4, 4, 4, 3, 2, 2, 2, 3, 3, 3, 4, 4, 4,
5, 5, 6, 5, 4, 4, 4, 4, 5, 5, 5, 4, 3, 3, 4, 5, 5, 5, 4, 3, 2, 3, 4, 5, 5, 5, 5,
4, 3, 3, 3, 3, 3, 4, 4, 3, 3, 3, 4, 4, 4, 3, 1, 0, -1, -1, 1, 3, 4, 4, 2, 1, 1,
1, 2, 2, 2, 1, 1, 0, 0, 0, 0, 1, 1, 2, 2, 2, 0, -2, -3, -3, -2, -1, 1, 2, 1, 0,
-1, -1, -1, -1, -1, -1, -2, -2, -3, -3, -2, -2, -1, -1, -1, -2, -2, -3, -3, -2,
-2, -1, -2, -2, -2, -2, -1, -1, -2, -3, -4, -4, -3, -2, -2, -2, -3, -3, -3, -2,
-3, -4, -5, -5, -4, -2, -1, -1, -2, -3, -4, -4, -3, -3, -3, -3, -3, -2, -1, -1,
-2, -4, -5, -5, -4, -1, 0, -1, -2, -4, -4, -2, -2, -2, -3, -4, -4, -3, -2, -1,
-2, -3, -4, -4, -3, -1, 0, 0, -1, -1, -2, -2, -1, -1, -1, -1, -1, 0, 0, -1, -1,
-2, -1, 0, 1, 1, 1, 0, 1, 2, 2, 2, 1, 0, 0, 1, 2, 3, 3, 2, 2, 1, 2, 2, 2, 2, 2,
1, 2, 3, 4, 4, 4, 3, 2, 2, 2, 2, 2, 2, 2, 3, 4, 4, 3, 3, 2, 2, 3, 3, 3, 2, 1, 1,
2, 3, 3, 4, 3, 2, 1, 1, 1, 2, 3, 4, 3, 1, -1, -2, -1, 1, 4, 5, 5, 2, 0, -1, -1,
1, 2, 3, 2, 1, 0, 0, 1, 1, 1, 1, 1, 1, 2, 2, 1, 0, 0, 1, 2, 3, 2, 0, -1, -1, 1,
3, 4, 3, 0, -2, -2, -1, 1, 2, 1, 0, -2, -1, 0, 2, 2, 1, -1, -3, -2, -1, 1, 2, 2,
1, -1, -1, -1, -2, -2, -3, -3, -2, -1, 0, 0, -1, -1, -2, -2, -2, -2, -2, -2, -3,
-3, -3, -2, -1, -1, -1, -1, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2, -2,
-2, -2, -1, -2, -2, -3, -3, -3, -3, -2, -1, -1, -1, -2, -2, -3, -2, -2, -2, -2,
-2, -1, 0, 0, -1, -2, -3, -4, -3, -2, -1, 0, -1, -2, -2, -2, -1, 0, 0, 0, 1, 0,
0, 0, -1, -1, -1, 0, 1, 0, 0, -1, -2, -1, 0, 1, 2, 2, 1, 0, -1, 0, 0, 1, 1, 1,
0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 2, 2, 1, 1, 0, 0, 1, 2, 2, 2, 1, 0, -1, 0, 2,
2, 2, 1, -1, -1, 0, 2, 3, 3, 3, 1, 1, 1, 1, 1, 1, 1, 2, 2, 3, 3, 2, 0, -1, 0, 1,
2, 2, 1, 1, 1, 2, 3, 4, 3, 1, 0, 0, 1, 3, 3, 2, 1, 0, 0, 1, 2, 2, 1, 1, 1, 1, 2,
3, 3, 2, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, -1, -1, -1, 0, 1, 1, 1, 0,
-1, -1, 0, 0, 1, 1, 0, -1, -2, -1, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, -1,
-1, 0, 1, 1, 1, 0, -2, -3, -3, -1, 1, 2, 2, 1, -1, -1, -1, 0, 0, 0, -1, -2, -2,
-2, -1, 0, -1, -1, -2, -2, -1, -1, -1, -1, -2, -3, -3, -2, -1, -1, -1, -2, -3,
-3, -3, -2, -2, -2, -3, -3, -3, -2, -1, -1, -1, -1, -2, -3, -3, -4, -3, -2, -1,
-1, -1, -2, -3, -3, -3, -2, -1, 0, -1, -1, -2, -2, -2, -1, -1, -2, -2, -2, -1,
0, 0, 0, 0, -1, -1, -1, -1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 1, 2, 2, 1, 1, 0, 0,
0, 1, 1, 1, 1, 2, 2, 3, 3, 3, 2, 1, 1, 2, 2, 2, 2, 2, 1, 1, 2, 3, 3, 3, 3, 3, 2,
2, 2, 2, 3, 3, 3, 3, 2, 1, 1, 2, 3, 3, 3, 3, 2, 2, 2, 1, 1, 1, 2, 2, 2, 3, 3, 3,
2, 2, 2, 1, 1, 0, 0, 0, 1, 1, 2, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 1, 0, -1,
-1, -1, 0, 0, -1, -1, -2, -1, 0, 0, 0, 0, -1, -2, -2, -1, -1, -2, -3, -3, -3,
-2, -1, 0, 0, -1, -1, -1, -1, -2, -3, -3, -3, -2, -2, -1, -1, -1, -2, -2, -2,
-2, -2, -2, -2, -2, -1, -1, -1, -1, -2, -3, -2, -2, -1, 0, 0, -1, -2, -2, -2,
-1, 0, 0, 0, -1, -2, -2, -1, -1, 0, 0, 0, 0, 0, 0, 1, 1, 0, -1, -1, -1, 0, 0, 1,
1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, -1,
0, 0, 1, 1, 1, 0, 0, 0, 1, 1, 1, 0, -1, -1, 0, 1, 2, 2, 1, 1, 0, 1, 1, 2, 1, 1,
0, -1, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 2, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 1, 0, 0, 0, -1, -1, 0, 0, 1, 1, 1, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 1,
1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1,
0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0,
0, 0, 0, 1, 1, 0, 0, -1, -1, 0, 0, 1, 0, -1, -1, -1, 0, 1, 1, 0, -1, -1, -1, -1,
0, 0, 0, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
-2, -1, -1, 0, 0, -1, -1, -2, -2, -2, -1, -1, 0, -1, -1, -1, -2, -2, -1, -1, -1,
-1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, 0, -1, -1, -1, -1,
0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 0,
1, 1, 1, 1, 0, 0, 1, 1, 2, 2, 2, 1, 1, 1, 1, 1, 2, 2, 1, 1, 1, 1, 2, 2, 2, 2, 1,
0, 0, 1, 2, 2, 2, 1, 1, 1, 2, 2, 1, 1, 0, 1, 1, 2, 2, 2, 1, 0, 0, 1, 1, 2, 1, 1,
0, -1, 0, 1, 1, 1, 0, 0, 0, 0, 1, 1, 0, 0, -1, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0,
0, -1, -1, -1, 0, 0, 0, -1, -1, -2, -1, 0, 1, 1, 0, -1, -2, -2, -1, 0, 0, 0, -1,
-1, -2, -2, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
-1, -1, 0, 0, 0, 0, -1, -1, 0, 0, 0, 1, 0, 0, -1, -1, -1, 0, 0, 1, 0, 0, -1, -1,
0, 1, 1, 1, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, -1, -1, -1, 0, 0, 0, 0,
0, -1, -1, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0,
1, 1, 1, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0,
0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };

#endif /* pad8_H_ */

#ifndef __TEMPERATURE_TABLE_H_
#define __TEMPERATURE_TABLE_H_

#include "stm32f10x.h"


#if (TEMPERATURE_SENSOR == 1)  //100k���¶�ϵ��B3950���������Ӧ�¶ȱ�
const u16 Temperature_Table_B3950[301] = 
{
	4038, 
	4035, 
	4032, 
	4029, 
	4025, 
	4022, 
	4019, 
	4015, 
	4011, 
	4007, 
	4003, 
	3998, 
	3993, 
	3989, 
	3984, 
	3979, 
	3973, 
	3968, 
	3962, 
	3956, 
	3949, 
	3942, 
	3935, 
	3928, 
	3920, 
	3912, 
	3904,  
	3894,//3896,    
	3888,//             27c
	3881,
	3874, 
	3865, 
	3856, 
	3847,
	3836, 
	3826,
	3814,//           35c
        
	3803,   
	3790,                 
	3777,
	3764,//     array_num 40
	3750,//  40c
        
	3737, 
	3723, 
	3710,
	3704,//3698,
	3698,//3683,     
	3683,//3668, 
	3668,//3653, 
	3653,//3637,   
	3637,//3622, 
	3622,//3606,     50c 
        
	3606,//3589, 
	3589,//3573,               
	3573,//3555,
	3555,//3538,               
	3538,//3520,     55c
        
	3520,//3501,      
	3501,//3481,               
	3481,//3461,              
	3461,//3439,          array_num60     
        3439,//3419,      60c  
        
	3429,//3398,   
	3419,//3376, 
	3398,//3354,
	3376,//3331,        
	3354,//3308,      65c  
        
	3331,//3284,         
	3308,//3260, 
	3284,//3236,      
	3260,//3211,   
        3236,//3187,     70c  
        
	3211, //3161,
	3187, //3136,
	3161,//3111,
	3136,//3086,
	3123,//3061,
        
	3111,//3036,  
	3086,//3010,      77c  
	3061,//2985, 
	3036,//2959, 
	3010,//2933,      80c
        
	2985,//2907, 
	2959, //2880,
	2933, //2853,
	2907,//2824, 
	2880,//2796,     85c
       
            
	2853,//2766, 
	2824,//2736, 
	2796,//2704, 
	2766,//2672, 
	2751,//2641,
        
	2736,//2611,//     91C
	2704,//2581,
	2672,//2551, 
	2641,//2522, 
             
	2611,//2492,//      95C
	2581,//2463, 
	2551,//2433,
	2522,//2403,
	2507,//2372, 
	2492,//2341,//      100c
        
	2463,//2309, 
	2433,//2276, 
	2403,//2242, 
	2372,//2208, 
	2341,//2180,//       105c
             
             
	2309,//2150, 
	2276,//2120, 
	2242,//2090, 
	2208,//2058, 
	2194,//2027,       110c
        
	2180,//1995, 
	2165,//1964, 
	2150,//1932, 
        2120,//1901, 
	2090,//1871, 
	2058,//1842, 
	2042,//1814, 
	2027,//1787, 
	1995,//1761, 
	1964,//1731,//      120c
        
	1932,//1702, 
	1901,//1674, 
	1871,//1647, 
	1842,//1621, 
	1828,//1596,
        
	1814,//1571, 
	1800,//1547, 
	1787,//1523,//     128c 
	1761,//1499, 
	1731,//1475, 
        
	1702,//1451, 
	1674,//1426, 
	1647,//1401, 
	1621,//1375, 
	1596,//1348, 
	1571,//1323, 
	1547,//1298, 
	1523,//1273, 
	1499,//1250, 
	1475,//1227,//     140c 
        
	1451,//1205, 
	1426,//1184, 
	1401,//1164, 
	1375,//1144, 
	1348,//1125,//     145c
        
	1323,//1107, 
	1298,//1090, 
	1273,//1073, 
	1250,//1057, 
	1227,//1035,      150c
        
	1205,//1014, 
	1184,//994, 
	1164,//975, 
	1144,//957, 
	1125,//940,//     155c
        
	1107,//924, 
	1090,//908, 
	1073,//892, 
	1057,//876, 
	1035,//861, 
	1014,//845, 
	994,//829, 
	975,//813, 
	957,//797, 
	940,//782, //    165c
        
	924,//768, 
	908,//754, 
	892,//740, 
	876,//727, 
	861,//713, 
	829,//701, 
	813,//688, 
	797,//676, 
	782,//664, 
	768,//652,//     175c
        
	754,//641, 
	740,//629, 
	727,//618, 
	713,//607, 
	701,//594,      180C
        
	688,//583, 
	676,//572, 
	664,//562, 
	652,//552, 
	641,//543, 
	629,//535, 
	618,//526, 
	607,//518, 
	594,//509, 
	583,//501,       190C
        
	572,//493, 
	562,//484, 
	552,//475, 
	543,//465, 
	535,//458, 
	526,//451, 
	518,//444, 
	509,//436, 
	501,//428, 
	493,//420,        200C
        
	484,//412, 
	475,//404, 
	465,//396, 
	458,//389, 
	451,//381, 
	444,//374, 
	436,//368, 
	428,//361, 
	420,//356, 
	412,//349,       210C
        
	404,//343, 
	396,//337, 
	389,//332, 
	381,//326, 
	374,//320, 
	368,//314, 
	361,//309, 
	356,//304, 
	349,//298, 
	343,//293,      220C
        
	337,//288, 
	332,//283, 
	326,//278, 
	320,//273, 
	314,//269, 
	309,//265, 
	304,//260, 
	298,//256, 
	293,//251, 
	288,//247,//        230C
        
	283,//243, 
	278,//238, 
	273,//234, 
	269,//230, 
	265,//226, 
	260,//222, 
	256,//219, 
	251,//215, 
	247,//212, 
	243,//208,//       240C
        
	238,//205, 
	234,//202, 
	230,//199, 
	226,//196, 
	222,//193, 
	219,//190, 
	215,//187, 
	212,//184, 
	208,//181, 
	205,//178,//      250C
        
	202,//174, 
	199,//172, 
	196,//170, 
	193,//166, 
	190,//164, 
	187,//162, 
	184,//159, 
	181,//157, 
	178,//154, 
	174,//152,//       260C 
        
	172,//150, 
	170,//147, 
	166,//145, 
	164,//142, 
	162,//140, 
	159,//137, 
	157,//136, 
	154,//134, 
	152,//132, 
	150,//130,        270c
        
	147,//128, 
	145,//126, 
	142,//123, 
	140,//122, 
	137,//120, 
	136,//118, 
	134,//116, 
	132,//114, 
	130,//113, 
	128,//111,        280c
        
	126,//109, 
	123,//108, 
	122,//106, 
	120,//105, 
	118,//103, 
	116,//101, 
	114,//100, 
	113,//98, 
	111,//96, 
	109,//95,        290c
        
	108,//93, 
	106,//91, 
	105,//90, 
	103,//88, 
	101,//87, 
	100,//86, 
	98,//85, 
	96,//84, 
	93,//83, 

};

#endif

#ifdef NOZZLE_PT3_25E2  
//���������ͺ�PT3-25E2-S2  -1~300deg  ���������Ӧ�¶ȱ�-1~300
//const u16 Temperature_Table_PT325E2S2[302] = 
const u16 Temperature_Table_NOZZLE[302] = 
{
4043,//-1c
4040,
4037,
4034,
4030,
4027,
4023,
4019,
4015,
4011,
4007,
4002,
3997,
3993,
3987,
3982,
3976,
3971,
3965,
3958,
3952,
3945,
3938,
3931,
3923,
3916,
3907,
3899,
3890,
3881,
3872,
3863,
3853,
3842,
3832,
3821,
3810,
3798,
3786,
3774,
3761,
3748,
3735,
3721,
3707,
3693,
3678,
3662,
3647,
3631,
3614,
3597,
3580,
3562,
3544,
3526,
3507,
3488,
3468,
3448,
3428,
3407,
3386,
3364,
3342,
3320,
3297,
3274,
3251,
3227,
3203,
3179,
3154,
3129,
3103,
3078,
3052,
3026,
2999,
2972,
2945,
2918,
2891,
2863,
2835,
2807,
2779,
2750,
2722,
2693,
2664,
2652,
2621,
2590,
2560,
2529,
2498,
2467,
2436,
2405,
2374,
2343,
2312,
2281,
2250,
2220,
2189,
2158,
2128,
2097,
2067,
2037,
2007,
1977,
1948,
1919,
1889,
1860,
1832,
1803,
1775,
1747,
1719,
1692,
1665,
1638,
1611,
1585,
1559,
1533,
1507,
1482,
1457,
1433,
1408,
1384,
1361,
1338,
1315,
1292,
1270,
1248,
1226,
1205,
1183,
1163,
1142,
1122,
1102,
1083,
1064,
1045,
1026,
1008,
990,
973,
955,
938,
922,
905,
889,
873,
857,
842,
827,
812,
798,
783,
769,
756,
742,
729,
716,
703,
691,
678,
666,
655,
643,
632,
620,
609,
599,
588,
578,
568,
558,
548,
538,
529,
520,
511,
502,
493,
484,
476,
468,
460,
452,
444,
437,
429,
422,
415,
408,
401,
394,
387,
381,
374,
368,
362,
356,
350,
344,
339,
333,
328,
322,
317,
312,
307,
302,
297,
292,
287,
283,
278,
274,
270,
265,
261,
257,
253,
249,
245,
241,
237,
234,
230,
227,
223,
220,
216,
213,
210,
207,
204,
201,
198,
195,
192,
189,
186,
183,
181,
178,
175,
173,
170,
168,
165,
163,
161,
158,
156,
154,
152,
150,
147,
145,
143,
141,
139,
137,
136,
134,
132,
130,
128,
127,
125,
123,
122,
120,
118,
117,
115,
114,
112,
111,
109,
108,
106,
105,
104,
102,
101,
100,
98,
97,
96,//300c
};
#endif

#ifdef NOZZLE_F3950  
//100k���¶�ϵ��F3950���������Ӧ�¶ȱ�-1~300
//const u16 Temperature_Table_F3950[302] = 
const u16 Temperature_Table_NOZZLE[302] = 
{
4041,//-1c
4038 ,
4035 	,
4032 	,
4029 	,
4025 	,
4022 	,
4018 	,
4014 	,
4010 	,
4006 	,
4002 	,
3997 	,
3992 	,
3988 	,
3982 	,
3977 	,
3972 	,
3966 	,
3960 	,
3954 	,
3948 	,
3941 	,
3934 	,
3927 	,
3920 	,
3912 	,
3904 	,
3896 	,
3888 	,
3879 	,
3870 	,
3861 	,
3851 	,
3841 	,
3831 	,
3821 	,
3810 	,
3799 	,
3787 	,
3775 	,
3763 	,
3751 	,
3738 	,
3725 	,
3711 	,
3697 	,
3683 	,
3668 	,
3653 	,
3637 	,
3622 	,
3605 	,
3589 	,
3572 	,
3554 	,
3536 	,
3518 	,
3500 	,
3481 	,
3461 	,
3441 	,
3421 	,
3401 	,
3380 	,
3358 	,
3337 	,
3314 	,
3292 	,
3269 	,
3246 	,
3222 	,
3198 	,
3174 	,
3149 	,
3124 	,
3099 	,
3073 	,
3047 	,
3021 	,
2994 	,
2968 	,
2940 	,
2913 	,
2885 	,
2858 	,
2829 	,
2801 	,
2773 	,
2744 	,
2715 	,
2686 	,
2657 	,
2627 	,
2598 	,
2568 	,
2538 	,
2509 	,
2479 	,
2449 	,
2419 	,
2389 	,
2359 	,
2329 	,
2299 	,
2269 	,
2239 	,
2209 	,
2179 	,
2149 	,
2119 	,
2090 	,
2060 	,
2031 	,
2001 	,
1972 	,
1943 	,
1914 	,
1886 	,
1857 	,
1829 	,
1801 	,
1773 	,
1745 	,
1718 	,
1691 	,
1664 	,
1637 	,
1611 	,
1584 	,
1558 	,
1533 	,
1507 	,
1482 	,
1457 	,
1433 	,
1409 	,
1385 	,
1361 	,
1338 	,
1314 	,
1292 	,
1269 	,
1247 	,
1225 	,
1204 	,
1182 	,
1161 	,
1141 	,
1120 	,
1100 	,
1080 	,
1061 	,
1042 	,
1023 	,
1004 	,
986 	,
968 	,
951 	,
933 	,
916 	,
899 	,
883 	,
867 	,
851 	,
835 	,
820 	,
804 	,
790 	,
775 	,
761 	,
747 	,
733 	,
719 	,
706 	,
693 	,
680 	,
667 	,
655 	,
643 	,
631 	,
619 	,
608 	,
596 	,
585 	,
574 	,
564 	,
553 	,
543 	,
533 	,
523 	,
514 	,
504 	,
495 	,
486 	,
477 	,
468 	,
459 	,
451 	,
443 	,
434 	,
427 	,
419 	,
411 	,
404 	,
396 	,
389 	,
382 	,
375 	,
368 	,
362 	,
355 	,
349 	,
343 	,
336 	,
330 	,
324 	,
319 	,
313 	,
307 	,
302 	,
297 	,
291 	,
286 	,
281 	,
276 	,
271 	,
267 	,
262 	,
257 	,
253 	,
248 	,
244 	,
240 	,
236 	,
232 	,
228 	,
224 	,
220 	,
216 	,
213 	,
209 	,
205 	,
202 	,
199 	,
195 	,
192 	,
189 	,
186 	,
182 	,
179 	,
176 	,
173 	,
171 	,
168 	,
165 	,
162 	,
160 	,
157 	,
154 	,
152 	,
149 	,
147 	,
145 	,
142 	,
140 	,
138 	,
136 	,
133 	,
131 	,
129 	,
127 	,
125 	,
123 	,
121 	,
119 	,
117 	,
116 	,
114 	,
112 	,
110 	,
109 	,
107 	,
105 	,
104 	,
102 	,
101 	,
99 	,
97 	,
96 	,
95 	,
93 	,
92 	,
90 	,
89 	,
88 	,
86 	,
85 	,
84 	,
83 	,
81 	,
80 	,
};
#endif

#endif

#include <stdint.h>

extern uint32_t ADC_VAL; 

int BIT_12[] = {
2463,2413,2364,2314,2264,2215,2166,2116,2068,2019,1971,1923,1876,1829,1782,1737,1692,1647,1603,1560,1518,1476,1435,1395,1355,1317,1279,1242,1206,1171,1137,1103,1070,1039,1008,977,948,920,892,
865,839,813,788,764,741,718,696,675,655,635,615,597,578,561,544,527,511,496,481,466,452,439,425,413,400,388,377,366,355,344,334,324,315,306,297,288,279,271,263,256,248,241,234,228,221,215,209,
203,197,191,186,181,176,171,166,162,157,153,149,144,141,137,133,130,126,123,119,116,113,110,107,105,102,99,97,94,92,89,87,85,83,81,79,77,75,73,71,69,67,66,64,62,61,59,58,57,55,54,53,51,50,49,48,
47,45,44,43,42,41,40,39,39,38,37,36,35,34,34,33,32,31,31,30,29,29,28,27,27,26,26,25
};

int TEMP[] = {
-20,-19,-18,-17,-16,-15,-14,-13,-12,-11,-10,-9,-8,-7,-6,-5,-4,-3,-2,-1,0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,
43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,99,100,101,102,103,104,105,
106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124,125,126,127,128,129,130,131,132,133,134,135,136,137,138,139,140,141,142,143,144,145,146,147,148,149,150
};

void BIT_12_SEARCH(void)
{
   if (ADC_VAL >= BIT_12[10])
   {
	    
	 } 
}

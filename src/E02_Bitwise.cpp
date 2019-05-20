//
//  E02_Bitwise.cpp
//  Unit1_exercise2_understanding_bitwise
//

/*
 
 Note:
 Implement the functions in this exercise file to make the tests
 pass in E02_BitwiseSpec.cpp file.
 
 Your primary goal is to implement all these functions by using
 bitwise operators only.
 
 */


int andOfEachByte(int n) {
	int byte0 = n << 24;
	byte0 = byte0 >> 24;
	int byte1 = n << 16;
	byte1 = byte1 >> 24;
	int byte2 = n << 8;
	byte2 = byte2 >> 24;
	int byte3 = n >> 24;
	int result = byte3 & byte2 & byte1 & byte0;
	return result;
}

//
// Note1:
// implement the function using bitwise operators only
// should not use * and + operators.
int numberFromBits(int bits[32]){
	int count, sum = 0;
	int res[32], res1[32];
	for(count = 0; count < 32; count++) {
		res[31 - count] =  1 << count;
	}
	for (count = 0; count < 32; count++)
	{
		res1[count] = res[count] * bits[count];
	}
	for (count = 0; count < 32; count++) {
		sum = sum | res1[count];
	}
	return sum;
}

//
// Note2:
// implement the function using bitwise operators only
// should not use % and / operators.
void bitsFromNumber(int n, int bits[32]) {
    
}

//
// Note3:
// Refer this to understand how numbers are represented in binary format
// https://www.youtube.com/watch?v=qrUjFtZZWf4
// mainly how negative number are represented.
//
// implement this function by calling above bitsFromNumber function only.
//
int numberOfOnesInBinary(int n) {
    return -1;
}

//
// Returns
//  1 - yes
//  0 - no
//
int isPalindromeInBase256(unsigned long int n) {
    return -99;
}

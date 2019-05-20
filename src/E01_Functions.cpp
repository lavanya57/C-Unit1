//
//  E01_Functions.cpp
//  Unit1_exercise1_understanding_functions
//

/*
 
 Note:
 Implement the functions in this exercise file to make the tests
 pass in E01_FunctionsSpec.cpp file.
 
 */


//
// Note:
//  Think of all the edge cases.
//
// returns the mid-point of
// given 2 points on X-axis
//
int midPoint(int x1, int x2) {
	signed int mid;
	x2 = x2 - x1;
	x2 = x2 / 2;
	mid = x1 + x2;
    return mid;
}

//
// sum of most significant digits of non-negative integers.
//
int msd(int n) {
	int reverse = 0;
	while (n != 0) {
		reverse = reverse * 10 + n % 10;
		n = n / 10;
	}
	reverse = reverse % 10;
	return reverse;
}
int sumOfMSDs(int num1, int num2) {
	int sum = 0;
	//num1 = msd(num1);
	//num2 = msd(num2);
	sum = msd(num1) + msd(num2);
    return sum;
}

//
// sum of two 100 digit positive numbers
//
void sumOf100DigitNumbers(int num1[100], int num2[100], int sum[101]) {
	int counter, Sum = 0;
	for (counter = 100; counter >= 0; counter--) {
		if (counter - 1 < 0) {
			sum[counter] = Sum;
		}
		else {
			sum[counter] = Sum + num1[counter - 1] + num2[counter - 1];
		}
		if (sum[counter] >= 10) {
			sum[counter] = sum[counter] - 10;
			Sum = 1;
		}
		else {
			Sum = 0;
		}

	}
}

//
// product of two 100 digit positive numbers
//
void productOf100DigitNumbers(int num1[100], int num2[100], int prod[200]) {
    
}
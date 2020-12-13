#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numArr[10] = { 25, 69, 54, 8, 77, 6, 29, 10, 3, 98 };
	int smallestNumValue = numArr[0];
	int smallestNumIndex = 0;
	for (int i = 0; i < 10; i++)
	{
		printf_s("numArr[%d] = %d\n", i, numArr[i]);
		if (numArr[i] < smallestNumValue)
		{
			smallestNumValue = numArr[i];
			smallestNumIndex = i;
		}
	}
	printf_s("\nThe smallest number in the array: %d\n", smallestNumValue);
	printf_s("The index of the smallest number in the array: [%d]\n", smallestNumIndex);
	
	for (int i = 0; i < 10; i++)
	{
		printf_s("\nnumArr[%d] = %d", i, numArr[i]);
		if (numArr[i] == smallestNumValue)
		{
			printf_s("[MIN]");
		}
	}
	printf_s("\n");
	return 0;
}
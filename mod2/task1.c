#include<stdio.h>

int main()
	{
	//take two integers from the user
	//display their sum
	//display their difference
	//display the product

	int numOne;
	int numTwo;

	printf("Please enter two integers:\n");
	scanf("%d %d", &numOne, &numTwo);
	

	printf("The sum of %d and %d is: %d\n", numOne, numTwo, numOne + numTwo);
	printf("The difference of %d and %d is: %d\n", numOne, numTwo, numOne - numTwo);
	printf("The product of %d and %d is: %d\n", numOne, numTwo, numOne * numTwo);
	//division will give you the quotient
	printf("The division of %d and %d is: %d\n", numOne, numTwo, numOne /  numTwo);
	//get the remainder with modulus %
	printf("The modulus of %d and %d is: %d\n", numOne, numTwo, numOne %  numTwo);
	
	return 0;
	
	}

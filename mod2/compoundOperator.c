#include<stdio.h>

int main ()
{
	int i = 0;
	printf("i is %d\n", i);

	//increment i by one
	i = i + 1;
	printf("i is %d\n", i);
	
	i += 1; //compound operator	
	printf("i is %d\n", i);
	
	i = i-1;
	printf("i is %d\n", i);

	i -=1;
	printf("i is %d\n", i);

	int y = 3;

 	i +=y;
	printf("i is %d\n", i);
	
	i *= y;
	printf("i is %d\n", i);
	return 0;
}

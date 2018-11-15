#include <stdio.h>

int add(int a, int b)
{
	return a+b;
}

int substract(int a, int b)
{
	return a-b;
}

int multiply(int a, int b)
{
	return a*b;
}

int divide(int a, int b)
{
	return a/b;
}

int main(void)
{
	int a, b;
	char c;
	
	int (*calculate)(int, int);
	
	printf("수식을 입력하시오 : ");
	scanf("%d %c %d", &a, &c, &b);
	
	switch(c)
	{
		case '+': 
			calculate = add;
			break;
		
		case '-': 
			calculate = substract;
			break;
			
		case'*': 
			calculate = multiply;
			break;
		
		case '/'
		: 
			calculate = divide;
			break;		
	}
	
	printf("result : %i\n", calculate(a, b));
	
	return 0;
}

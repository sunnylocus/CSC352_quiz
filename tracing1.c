#include <stdio.h>

int mystery(int *p) 
{
	switch(*p)
	{
		case 1: 
			*p *=2;
			printf("%d\n",*p);
		case 230:
			printf("aaaaa\n");
			return 0;
		default:
			printf("Not one or tow!\n");
	}
	return 1;
}

int main(int argc, char const *argv[])
{
	int x = 1;
	int y = mystery(&x);

	printf("x is %d and y is %d\n", x,y);
	return 0;
}
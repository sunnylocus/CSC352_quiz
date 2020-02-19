#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

const char *byte_to_binary(int x)
{
    static char b[9];
    b[0] = '\0';

    int z;
    for (z = 128; z > 0; z >>= 1)
    {
        strcat(b, ((x & z) == z) ? "1" : "0");
    }

    return b;
}
 
void q1()
{
	int a = 2;
	int b = 6;
	int c;

	c = ++b % 3;
	b--;
	a *= b;

	printf("%d %d %d\n", a,b,c);
}

void q2() 
{
	float pi = 3.14159f;

    printf("%.2f", pi);
}

void q3(int arr[])
{
	
	printf("%d\n",sizeof(arr));
}

void q4()
{
	unsigned char c = 199;
	printf("%s\n", byte_to_binary(~c ));
	printf("%d\n", (~c ));
}

void q5()
{
	unsigned char c = 199;
	printf("%s\n", byte_to_binary(c|~c ));
	printf("%d\n", (c|~c ));
}

void q6()
{
	unsigned char c = 199;
	printf("%s\n", byte_to_binary(c^145 ));
	printf("%d\n", (c^ 145));
}

void q7()
{
	unsigned char c = 199;
	printf("%s\n", byte_to_binary(c&1 ));
	printf("%d\n", (c&1 ));
}

void q8()
{
	int i = 0;
	scanf("%x",&i);
	printf("%d",i);
}

void q9()
{
	char str[4];
	strcpy(str,"qwerty");
	printf(" q9 is %s\n", 	str);
}

void q10()
{
	int a = 1;
	int b = 4;
	int c = b++ + (a%2);
	a *= b;

	printf("a=%d,b=%d,c=%d\n", 	a,b,c);
}

int main(int argc, char const *argv[])
{
	//int arr[10];
	//q3(arr);
	//printf("The sizeof is %d\n", sizeof(double*)	);
	//
	q5();
}
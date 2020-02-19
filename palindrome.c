
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char inWord[100] = {0};
	printf("Enter a word:");
	scanf("%s",inWord);

	int size = strlen(inWord);

	int i=0;
	for(i=0; i < size /2 ; i++) 
	{
		if(inWord[0] == inWord[size - i -1] ) 
		{
			printf("%s is a palindrome\n", inWord);
			return 0;
		}
	}

	printf("%s is not a palindrome\n",inWord);
	return 0;
}
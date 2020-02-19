#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	FILE *f;
	char in[100];
	char c;
	f = fopen("data.txt", "rt");
	/**
	 * Checks whether the end-of-File indicator associated
	 * with stream is set, returning a value different from zero if it is.
	 */
	while (!feof(f)) 
	{
		/**
		 * Reads data from the stream and stores them according
		 * to the parameter format into the locations pointed by the additional arguments.
		 * 
		 * Any number of non-whitespace characters, stopping at the first whitespace character found.
		 * A terminating null character is automatically added at the end of the stored sequence.
		 */
		fscanf(f,"%c",&c);
		printf(" The char is %c\n", c);
		fscanf(f,"%s",in); 

		printf("%s\n", in);
	}
	fclose(f);

	return 0;
}
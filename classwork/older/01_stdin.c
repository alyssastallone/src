#include <stdio.h>		// use standard streams


int main(void) {
	// define an int called 'a' and initialize it to 0.
	int a = 0;
	int b = 0;
	float c = 0.0;		

	// puts prints a string to standard output
	puts("Hello, World!");

	// this is equivalent to
	printf("%s\n", "Hello, World!");

	// which is equivalent to
	fprintf(stdout, "%s\n", "Hello, World!");

	// read an integer from standard input. Note the ampersand before 'a'
	printf("Enter a  number: ");
	scanf("%d", &a);

	// read one integer and one float from standard input.
	printf("Enter one integer and one float: ");
	scanf("%d %f", &b, &c);

	// print the sum of a and b
	printf("%d + %d = %d\n", a, b, a+b);

	// everything went well; return 0
	return 0;
}
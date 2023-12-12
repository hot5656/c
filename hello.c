// # build static library
// gcc -shared -o cs50lib.dll cs50.c 
// # build hello.c and link library
// gcc -o hello.exe .\hello.c -L. -lcs50lib

# include "cs50.h"
# include <stdio.h>
int main(void) {
	// printf("hello, world");

	string answer = get_string("What's your name?");
	printf("%% Hello, %s!\n", answer);
}

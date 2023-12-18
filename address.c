#include <stdio.h>

int main(void)
{
	// int n = 50;
	// printf("%i\n", n);
	// printf("%p\n", &n);

	// int n = 50;
	// int *p = &n;

	// printf("%p\n", p);
	// printf("%i\n", *p);

	char *s = "Hi!";

	// printf("%p\n", s);
	// printf("%p\n", &s[0]);
	// printf("%p\n", &s[1]);
	// printf("%p\n", &s[2]);
	// printf("%p\n", &s[3]);
	// printf("%s\n", s);

	printf("%c\n", *s);
	printf("%c\n", *(s+1));
	printf("%c\n", *(s+2));

}
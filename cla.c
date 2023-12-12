// gcc -o cla.exe .\cla.c -L. -lcs50lib
// echo $? : return main return
#include <stdio.h>

int main(int argc, char *argv[]) {
	for (int i = 0 ; i < argc ; i++ ){
		printf("argv[%i] is %s 1st=%c 2nd=%c \n", i, argv[i], argv[i][0], argv[i][1]);
	}

	if (argc == 1) {
		return 1;
	}
	else {
		return 0;
	}
}
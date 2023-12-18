#include "cs50.h"
#include <stdio.h>
#include <string.h>

// typedef struct 
// {
// 	string name;
// 	string number;
// }
// person ;

// int main(void)
// {
// 	person people[] = {
// 		{
// 			"Carter",
// 			"+1-617-495-1000"
// 		},
// 		{
// 			"David",
// 			"+1-949-469-2751"
// 		},
// 	};

// 	string name  = get_string("Nmae: ");
// 	for (int i = 0 ; i < 2; i++){
// 		if (strcmp(people[i].name,name) == 0) {
// 			printf("Found %s\n", people[i].number);
// 			return 0;
// 		}
// 	}
// 	printf("Not found\n");
// 	return 1;
// }

int main(void) {
	FILE *file = fopen("phonebook.csv", "a");

	string name = get_string("Name: ");
	string number = get_string("Number:");
	fprintf(file, "%s,%s\n", name, number);
	fclose(file);
}
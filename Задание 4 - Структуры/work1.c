#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


struct abonent {
	char name[10];
	char second_name[10];
	char tel[10];
};

int main() {

	struct abonent abonents[100];
	int n = 0;
	int choice;

	do {
		printf("1. Add abonent\n");
		printf("2. Delet abonent\n");
		printf("3. Search abonent\n");
		printf("4. Display all entries\n");
		printf("5. Exit\n");
		scanf("%d", &choice);

	switch (choice) {
	case 1:
		if (n == 100) {
			printf("Anxiety Directory.\n");
			break;
		}
		printf("Enter the abonent name: \n");
		scanf("%s", abonents[n].name);
		printf("Enter the abonent sacond name: \n");
		scanf("%s", abonents[n].second_name);
		printf("Enter the abonent number: \n");
		scanf("%s", abonents[n].tel);
		n++;
		break;

	case 2:
		if (n == 0) {
			printf("The directory is empty\n");
			break;
		}
		printf("Enter the name of the abonent you want to delete:\n");
		scanf("%s %s", abonents[n].name, abonents[n].second_name);
		memset(abonents[n].name, 0, sizeof(abonents[n].name));
		memset(abonents[n].second_name, 0, sizeof(abonents[n].second_name));
		memset(abonents[n].tel, 0, sizeof(abonents[n].tel));
		n--;
		break;

	case 3:
		printf("Enter the name of the abonet you want to find:\n");
		scanf("%s", abonents[0].name);
		for (int i = 0; i < n; i++) {
			if (strcmp(abonents[i].name, abonents[0].name) == 0) {
				printf("%s %s %s\n", abonents[i].name, abonents[i].second_name, abonents[i].tel);
			}
		}
		break;

	case 4:
		for (int i = 0; i < n; i++) {
			printf("%s %s %s \n", abonents[i].name, abonents[i].second_name, abonents[i].tel);
		}
		break;
	}
	} while (choice != 5);

	return 0;
}
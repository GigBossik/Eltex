
#include "abonent.h"
#include <stdio.h>

struct abonent abonents[100];
int count = 0;

void Menu() {

	printf("1. Add abonent\n");
	printf("2. Delet abonent\n");
	printf("3. Search abonent\n");
	printf("4. Display all entries\n");
	printf("5. Exit\n");
}

int Variant(int count) {

	int variant;
	char s[100]; 
	scanf("%s", s);

	while (sscanf(s, "%d", &variant) != 1 || variant < 1 || variant > count) {
		printf("Incorrect input. Try again: "); 
		scanf("%s", s);
	}

	return variant;
}

void Add() {
	if (count == 100) {
		printf("Anxiety Directory.\n");
		return;
	}
	printf("Enter the abonent name: \n");
	scanf("%s", abonents[count].name);
	printf("Enter the abonent sacond name: \n");
	scanf("%s", abonents[count].second_name);
	printf("Enter the abonent number: \n");
	scanf("%s", abonents[count].tel);
	count++;
}

void Delet() {

	if (count == 0) {
		printf("The directory is empty\n");
		return;
	}
	printf("Enter the name of the abonent you want to delete:\n");
	scanf("%s %s", abonents[count].name, abonents[count].second_name);
	memset(abonents[count].name, 0, sizeof(abonents[count].name));
	memset(abonents[count].second_name, 0, sizeof(abonents[count].second_name));
	memset(abonents[count].tel, 0, sizeof(abonents[count].tel));
	count--;
	return;
}

void Search() {
	printf("Enter the name of the abonet you want to find:\n");
	scanf("%s", abonents[0].name);
	for (int i = 0; i < count; i++) {
		if (strcmp(abonents[i].name, abonents[0].name) == 0) {
			printf("%s %s %s\n", abonents[i].name, abonents[i].second_name, abonents[i].tel);
		}
	}
	return;
}

void Display() {
	for (int i = 0; i < count; i++) {
		printf("%s %s %s \n", abonents[i].name, abonents[i].second_name, abonents[i].tel);
	}
	return;
}
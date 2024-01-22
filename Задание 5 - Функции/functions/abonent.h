#pragma once
#ifndef ABONENT_H
#define ABONENT_H 

struct abonent {
	char name[10];
	char second_name[10];
	char tel[10];
};

void Menu();
int Variant(int count);
void Add();
void Delet();
void Search();
void Display();

#endif // !ADD_H
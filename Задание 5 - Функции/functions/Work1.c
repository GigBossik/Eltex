#include <stdio.h>
#include "abonent.h"


int main() {
	int variant;

	do {
		Menu();
		variant = Variant(5);

		switch (variant) {
		case 1:
			Add();
			break;
		case 2:
			Delet();
			break;
		case 3:
			Search();
			break;
		case 4:
			Display();
			break;
		}
	} while (variant != 5);
	return 0;
}
#include <stdio.h>

int main() {
	int age;

	scanf("%d", &age);

	if (age<5) {
		printf("SEM CATEGORIA\n");

	} else if (age>=5 && age<=7) {
		printf("INFANTIL A\n");

	} else if (age>=8 && age<=10) {
		printf("INFANTIL B\n");

	} else if (age>=11 && age<=13) {
		printf("JUVENIL A\n");

	} else if (age>=14 && age<=17) {
		printf("JUVENIL B\n");

	} else if (age>=18) {
		printf("SENIOR\n");

	}
	return 0;
}

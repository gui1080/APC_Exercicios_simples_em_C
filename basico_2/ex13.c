#include <stdio.h>

int main() {
	int c1, c2;
	double t;

	scanf("%d %d", &c1, &c2);
	t=0.00;

	switch (c1)	{
		case 1:
			t+=5.00;
			break;

		case 2:
			t+=7.00;
			break;

		case 3:
			t+=7.50;
			break;

		case 4:
			t+=3.50;
			break;

		case 5:
			t+=3.00;
			break;
	}

	switch (c2) {
        case 1:
            t+=5.00;
            break;

        case 2:
            t+=7.00;
            break;

        case 3:
            t+=7.50;
            break;

        case 4:
            t+=3.50;
            break;

        case 5:
            t+=3.00;
            break;
    }

	printf("Total: R$ %.2lf\n", t);
	return 0;
}

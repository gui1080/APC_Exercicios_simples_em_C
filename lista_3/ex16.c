#include <stdio.h>

int main() {
	int idade = 0, opiniao = 0, op1 = 0, op2 = 0, op3 = 0, op4 = 0, op5 = 0;
	double somaI = 0, quant = 0;

	while (idade >= 0) {
		scanf("%d %d", &idade, &opiniao);

		if (idade >= 0 && (opiniao == 1 || opiniao == 2 || opiniao == 3 || opiniao == 4 || opiniao == 5)) {
			quant++;
			somaI+=idade;

			switch (opiniao) {
				case 1:
					op1++;
					break;

				case 2:
					op2++;
					break;
				
				case 3:
					op3++;
					break;
				
				case 4:
					op4++;
					break;
				
				case 5:
					op5++;
					break;
			}

		}else{
			if (idade<0) {
				break;
			
			}else{
				while(!(opiniao == 1 || opiniao == 2 || opiniao == 3 || opiniao == 4 || opiniao == 5)) {
					scanf("%d", &opiniao);
				}

				quant++;
				somaI+=idade;
				
				switch (opiniao) {
					case 1:
						op1++;
						break;
				
					case 2:
						op2++;
						break;
				
					case 3:
						op3++;
						break;
				
					case 4:
						op4++;
						break;
				
					case 5:
						op5++;
						break;
				}
			}
		}
	}
	
	printf("qtde de participantes: %.0lf\n", quant);
	printf("idade media dos participantes: %.1lf\n", somaI/quant);
	printf("Otimo: %.1lf%\n", (op1/quant)*100);
	printf("Bom: %.1lf%\n", (op2/quant)*100);
	printf("Regular: %.1lf%\n", (op3/quant)*100);
	printf("Ruim: %.1lf%\n", (op4/quant)*100);
	printf("Pessimo: %.1lf%\n", (op5/quant)*100);
	return 0;
}

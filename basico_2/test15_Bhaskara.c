#include <stdio.h>
#include <math.h> 

int main(void)
{
    double num1,num2, num3, mod, x1, x2, delta;
	//float x1, x2, delta;
    char oper;
	scanf("%c %lf %lf %lf", &oper, &num1, &num2, &num3);
	
 	switch(oper) 
        {       
	
 	case '+':
                        printf("%.3lf\n", num1 + num2);
                        break;

        case '-':
                        printf("%.3lf\n", num1 - num2);
                        break;

        case '*':
                        printf("%.3lf\n", num1 * num2);
                        break;

        case '/':
                        if(num2 != 0) {
                            printf("%.3f\n", num1 / num2);
			            }
		            	else    {
			                    printf("ERROR!\n");
                        }
		break;

	case '%':
                        if(num2 != 0 && num1 == (int) num1  && num2 == (int) num2) {
                            mod=((int) num1 % (int) num2);
                            printf("%.3lf\n", mod);
			            }
			            else    {
			                    printf("ERROR!\n");
                        }
		break;
                
	case 'p':
			            if (num1 < 0 && num2 != (int) num2) {
			                printf("ERROR!\n");
			            }
			            else    {
			                printf("%.3lf", pow(num1, num2));
			            }
	
		break;

	case 'r':
		   if(num1>=0) {
			printf("%.3lf\n", sqrt(num1));
		     }
		   else {
			printf("ERROR!\n");
		     }
		break;

	case 'b':
	        if (num1 ==0) {
	            printf("ERROR!\n"); }
	        else {
	            delta=((num2*num2)-(4*num1*num3)); 
			    if(delta < 0) {
                    printf("ERROR!\n"); } 
                else {
			        x1=((-num2)+sqrt(delta))/(2*num1);
			        x2=((-num2)-sqrt(delta))/(2*num1);
			        printf("%.3lf %.3lf\n", x1, x2); }
            }
		break;
        }
    return 0;
 }

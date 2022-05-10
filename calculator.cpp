#include <stdio.h>

int main(){
	char op;
	int num1, num2;
	printf("Enter an operator to start! (+,-,*,/): ");
	scanf("%c", &op);
	printf("Enter the two numbers to start! :");
	scanf("%d %d", &num1, &num2);
	
	switch(op){
		case '+':
			printf("%d + %d =\t%d\n", num1 , num2, num1 + num2);
			break;
			
		case '-':
			printf("%d - %d =\t%d\n", num1 , num2, num1 - num2);
			break;
			
		case '*':
			printf("%d * %d =\t%d\n", num1 , num2, num1 * num2);
			break;
			
		case '/':
			printf("%d / %d =\t%d\n", num1 , num2, num1 / num2);
			break;
		default:
			printf("Oh no! Invalid operator :c");
	}
	return 0;
}	

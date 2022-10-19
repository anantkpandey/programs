#include<stdio.h>

main(){
	int op1, op2, sum;
	printf("Enter two operands\n");
	scanf("%d %d", &op1, &op2);
	sum = op1 + op2;
	printf("Sum of %d and %d = %d\n", op1, op2, sum);
}

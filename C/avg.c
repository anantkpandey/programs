#include<stdio.h>

main(){
	
	/* sample interactive program */
	
	char name[20];
	float score1, score2, score3, avg;
	
	printf("Please enter your name: \n");
	scanf("%[^\n]", name);						/*enter name*/
	
	printf("Please enter the first score: \n");
	scanf("%f", &score1);						/* enter 1st score */
	
	printf("Please enter the second score: \n");
	scanf("%f", &score2);						/* enter 2nd score */
	
	printf("Please enter the third score: \n");
	scanf("%f", &score3);						/* enter 3rd score */
	
	avg = (score1 + score2 + score3) / 3;		/* calculate avg */
	
	/* write output */
	printf("\n\nName: %-s\n\n", name);
	printf("Score 1: %-5.1f\n", score1);
	printf("Score 2: %-5.1f\n", score2);
	printf("Score 3: %-5.1f\n", score3);
	printf("Average: %-5.1f\n\n", avg);
}

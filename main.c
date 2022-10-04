#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num1=0;
	int num2=0;
	char c;
	int result=0;
	
	
	printf("enter the calculation:");
	scanf("%d %c %d",&num1,&c,&num2);
	
	
	switch(c){
		case '+':
			result=num1+num2;
		break;
		
		case '-':
			result=num1-num2;
		break;
		
		case '*':
			result=num1*num2;
		break;
		
		case '/':
			result=num1/num2;
		break;
	}
	
	printf("=%d",result);
	
	return 0;
}

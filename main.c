#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int answer=59;
	int result=0;
	int count=0; 
	
	do{
		printf("Guess a number :");
		scanf("%d",&result);
		
		if(result<answer){
			printf("low!\n");
			count+=1; 
		}
		else if(result>answer){
			printf("high!\n");
			count+=1;
		}
		else{
			count+=1;
			printf("Congratulation! trials:%d",count);
			break;
		}
	}while(result!=answer);
	
	
	return 0;
}

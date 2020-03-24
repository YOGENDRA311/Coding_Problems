#include<stdio.h>
#include<ctype.h>
int main(){
	
	for(int i=0;i<5;i++){
		for(int j=0;j<=i;j++){
			if((i+j)%2 == 0){
				printf("1");
			}
			else
			{
				printf("0");
			}
		}printf("\n");
	}	
}

#include<stdio.h>

int main(){
	int i,j,k;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			if(j==i){
				printf("1 ");
			}
			else if(j==4-i-1){
				printf("0 ");
			}
			else{
				printf("* ");
			}
		}printf("\n");
	}return 0;
}

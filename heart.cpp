#include<stdio.h>
int main(){
	int i,j,k,n,x=1,min=1;
	for(int i=0;i<5;i++){
		for(j=4;j>=i;j--){
			printf(" "); }
		for(k=0;k<min;k++){
			printf("*");  }
		for(n=(5+5-2);n>=x;n--){
			printf(" ");   }
		for(k=0;k<min;k++){
			printf("*"); }
		min+=2;
		x+=2;
		printf("\n");
	}
	for(int i=10;i>=1;i--){
		for(j=10;j>=1;j--){
			if(i>j)
				printf("* ");
			else
				printf(" ");}
			printf("\n");
		}
	return 0;
}

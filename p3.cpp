#include<stdio.h>
int main(){
	int i,j,value,diff;
	for(i=1;i<=6;i++){
		diff  = 6-1;
		value = i;
		for(j=i+1;j<=6;j++){
			printf("%d ",value);
			value+=diff;
			diff--;
		}printf("\n");
	}return 0;
}

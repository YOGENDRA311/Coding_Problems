#include<stdio.h>

int main(){
	int num;
	scanf("%d",&num);
	for(int i=2;i<=num;i++){
		if(num%i==0){
			int count=0;
			while(num%i==0){
				num=num/i;
				count++;
				
			}printf("%d is %d times\n",i,count);
		}
	}return 0;
	
}

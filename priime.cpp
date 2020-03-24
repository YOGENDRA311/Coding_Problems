#include<stdio.h>
int main(){
	int n,cnt;
	scanf("%d",&n);
	for(int i=2;i<n/2;i++){
		if(n%i==0){
			cnt++;
		}
	}if(cnt>0){
		printf("no is not prime");
		}
	 else{
	 
	printf("no is prime");
	}	return 0;
}

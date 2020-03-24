#include<stdio.h>
#include<math.h>
int main(){
	int n,cnt=2;
	scanf("%d",&n);
	int arr[50];
	arr[0]=1;
	arr[1]=n;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			arr[cnt++]=i;
			
			if(i!=sqrt(n)){
			
				arr[cnt++]=n/i;
			}
		}
	}
	for(int i=0;i<cnt;i++){
		printf("%d ",arr[i]);
	}return 0;
}

#include<stdio.h>

void sum(int[],int);
int main(){
	int arr[]={2,7,11,15};
	int sum=13;
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			
			if(arr[j] == sum-arr[i]){
				printf("[%d, %d]",i,j);	
				break;
			}
			
		}
	}
	return 0;
}

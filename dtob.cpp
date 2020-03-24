#include<iostream>

using namespace std;
int dtob(int);
#define MAX 100
int main(){
	
		int n;
		cin>>n;
		dtob(n);
		return 0;
}
int dtob(int n){
	int arr[32],i=0;
	while(n>0){
		arr[i] = n%2;
		n=n/2;
		i++;
	}
	for(int j=i-1;j>=0;j--){
		cout<<arr[j]<<" ";
	}
	return 0;
}

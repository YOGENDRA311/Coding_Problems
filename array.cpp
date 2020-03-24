#include<iostream>

using namespace std;
void SOE(int*,int );
int main(){
	
	int A[]={1,2,3,4,5};
	int size = sizeof(A)/sizeof(A[0]);
	SOE(A,size);
	for(int i=0;i<size;i++){
		cout<<" "<<A[i]; 
	}
}
void SOE(int* A,int size){
	for(int i=0;i<size;i++){
		A[i]=A[i]*2;
	}
}

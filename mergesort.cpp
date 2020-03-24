#include<iostream>

using namespace std;

void mergesort(int[],int,int);
void merge(int[],int,int,int);
void print(int[],int);

void mergesort(int arr[],int l,int h){
	if(l<h){
		
		int mid  = (l+h)/2;
		
		mergesort(arr,l,mid);
		mergesort(arr,mid+1,h);
		
		merge(arr,l,mid,h);
	}
}
void merge(int arr[],int l ,int mid,int h){

	int n1,n2;
	
	n1 = mid-l+1;
	n2 = h-mid; 
	
	int a1[n1],a2[n2];
	
	for(int i=0;i<n1;i++){
		a1[i]=arr[l+i];
	}
	
	for(int j=0;j<n2;j++){
		a2[j]=arr[mid+1+j];
	}
	
	int i=0,j=0,k=l;
	
	while(i<n1 && j<n2){
	
		if(a1[i]<a2[j]){
	
			arr[k] = a1[i];
			i++;
		}
	
		else
		{
			arr[k]=a2[j];
			j++;
		}
		k++;
	}
	
	while(i<n1){
		arr[k]=a1[i];
		i++;
		k++;
	}
	
	while(j<n2){
		arr[k]=a2[j];
		j++;
		k++;
	}
}
void print(int arr[],int n){
	
	for(int i=0;i<n;i++){
		cout<<" "<<arr[i];
	}
}

int main(){

	int arr[]={2,1,9,6,11,3,5};

	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<"Before Sorting:-";

	print(arr,n);

	mergesort(arr,0,n-1);

	cout<<"\nAfter Sorting:-";

	print(arr,n);

	return 0;
}

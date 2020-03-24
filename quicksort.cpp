#include<iostream>

using namespace std;

void quicksort(int[],int,int);
int partition(int[],int,int);
void print(int[],int);
void swap(int*,int*);

void quicksort(int arr[],int low,int high){
	int pi;
	if(low<high){
	    pi = partition(arr,low,high);
		
		quicksort(arr,low,pi-1);
		quicksort(arr,pi+1,high);
	}
}
int partition(int arr[],int low,int high){
	 int pivot;
	 pivot = arr[high];
	 int i = (low-1);
	 for(int j=low;j<high;j++){
	 	
		 if(arr[j]<=pivot){
	 		i++;
	 		swap(&arr[i],&arr[j]);
		 }
	 }
	 
	 swap(&arr[i+1],&arr[high]);
	 return (i+1);
}
void print(int arr[],int size){
	
	cout<<"\nsize="<<size<<endl;
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
}
void swap(int *a,int *b){
	
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int arr[]={10,20,80,90,40,50,70};
	int size  = sizeof(arr)/sizeof(arr[0]);
	cout<<"Before Sort:-";
	print(arr,size);
	
	quicksort(arr,0,size-1);
	
	cout<<"\nAfter Sort:-";
	print(arr,size);
	
	cout<<"\nsize="<<size;
	
	return  0;
}


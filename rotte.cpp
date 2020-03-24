#include<stdio.h>
int main(){
	char c[]={'a','b','c','a','b'};
	int n = sizeof(c)/sizeof(c[0]);
	int r=20003;
	int count=0;
	r=r%n;
	for(int i=0;i<n;i++){
		int j=(i+r)%n;
		if(c[i]==c[j]){
			count++;
		}
	}printf("%d",count);
	return 0;
}

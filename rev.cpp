#include<stdio.h>
int main(){
	char c[] = {'a','b','c','a','b'};
	int n = sizeof(c)/sizeof(c[0]);
	char s[n];
	for(int i=0;i<n;i++){
		char temp = c[n];
		for(int j=n;j>=0;j--){
			printf("%c",c[j]);			
		}
	}
	return 0;
}

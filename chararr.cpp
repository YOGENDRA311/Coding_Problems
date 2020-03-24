#include<stdio.h>
#include<string.h>

//using namespace std;

int main(){
	char c[9]="yogendra";
	char* c2;
	c2 = c;
	*(c2+7)='A';
	*(c+0)='Y';
	printf("%s",c2);
}

#include<iostream>

using namespace std;

void increment(int*);

int main(){
	int a=10;
	increment(&a);
	cout<<"A = "<<a<<endl;
	//cout<<"Address of a="<<&a<<endl;
	return 0;
}
void increment(int* p){
	*p = (*p)+1;
	//cout<<"Addrees of increment="<<&a<<endl;
	//cout<<"value increamnt "<<a<<endl;
	//return a;
}

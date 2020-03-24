#include<iostream>
using namespace std;

int main(){
	int n,count=0;
	cin>>n;
	for(int i=0;i<=n;i++){
		int num = n%10;
		if(num>0&&num<=26){
			count++;
		}
		n/=10;
	}cout<<count;
	return 0;
}

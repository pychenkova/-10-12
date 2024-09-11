#include<iostream>
using namespace std;
int calc(int n){
	int a=1, b=0, c;
	if (n==0) return 1;
	if(n==1) return 0;
	for(int i=2;i<=n;i++){
		c=i*(a+b);
		b=a;
		a=c;
	}
	return c;	
}
int main(){
	int n;
	cout<<"enter n: ";
	cin>>n;
	cout<<"result: "<<calc(n)<<endl;
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int num,bs,as,f,l,i,j;
	cout<<"Enter any number :\n";
	cin>>num;
	bs=num;
	i=0;
	while(bs=!0){
		bs=bs/10;
		i++;
	}
	f=bs;
	l=num%10;
	j=i--;
	as=l*(pow(10,j))+num%(pow(10,j));
	as=as-l+f;
	cout<<"\nafter swapping of first and last digits of"<<num<<" is "<<as<<endl;
	return 0;
}

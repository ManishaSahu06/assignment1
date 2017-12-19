#include <iostream>
# include<cmath>
using namespace std;

int main() {
	int num,dec,bin,quo,rem;
	cout<<"Enter any decimal number : \n";
	cin>>dec;
	num=dec;
	int i=0;
	while(num=!0){
		num=num/10;
		i++;
	}
	cout<<"\nThe eqivalent binary number of decimal number"<<dec<<" is ";
	int j=i--;
	while(j>=0){
		quo=dec/(pow(2,j));
		cout<<quo;
		rem=dec%(pow(2,j));
		dec=rem;
		j--;
	}
	return 0;
}

#include<iostream>
using namespace std;
int main(){
	unsigned n;
	cin >> n;
	
	int k = (n%10)*100;
	n -= (n%10);
	k+= (n%100);
	n -= (n%100);
	n /=100;
	k+=n;
	cout << k; 
	
}
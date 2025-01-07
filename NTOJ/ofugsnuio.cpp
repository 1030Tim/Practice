#include<iostream>
using namespace std;
int main(){
	int a,i;
	cin >> a;
	const int N = a;
	int ary[N];
	
	for (i = 0; i<a ; i++){
		int d;
		cin >> d;
		ary[i] = d;
	}
	
	for (i = a-1 ; i>=0 ; i--){
		cout << ary[i] << "\n";
	}
	return 0;
}
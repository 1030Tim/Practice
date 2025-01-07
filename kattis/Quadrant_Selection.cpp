#include<iostream>
using namespace std;
int main(){
	int x,y,n;
	cin >> x >> y;
	
	
	if (x > 0){
		if (y<0) n = 4;
		else n = 1;
	}
	else{
		if (y<0) n = 3;
		else n = 2;
	}
	cout << n << endl;
	return 0;
}
#include<iostream>
using namespace std;
int main(){
	long long p,q,two = 0,three = 0;
	cin >> p >> q;
	
	if (p%2 == 0){
		if (q%2 == 0) two+=2;
		else two++;
	}
	else if (q%2 == 0){
		two++;
	}
	if (p%3 == 0){
		if (q%3 == 0) three+=2;
		else three++;
	}
	else if (q%3 == 0){
		three++;
	}
	cout << two << " " << three << endl;
	
	return 0;
	
}
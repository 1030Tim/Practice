#include<iostream>
using namespace std;
int main(){
	unsigned n,m,i,count = 0;
	cin >> n >> m;
	
	for (i = 0; i<m ;i++){
		int p;
		cin >> p;
		
		if (n<=0) count ++;
		else n-= p;
	}
	cout << count << endl;
	return 0;
}
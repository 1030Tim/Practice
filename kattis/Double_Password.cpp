#include<iostream>
#include<string>
using namespace std;
int main(){
	char a[5];
	char b[5];
	int count = 1;
	cin >> a >> b;
	if (a[0] == b[0]) count*=1;
	else count*=2;
	if (a[1] == b[1]) count*=1;
	else count*=2;
	if (a[2] == b[2]) count*=1;
	else count*=2;
	if (a[3] == b[3]) count*=1;
	else count*=2;
	
	cout << count << endl;
	
}
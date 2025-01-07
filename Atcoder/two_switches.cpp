#include<iostream>
using namespace std;
int main(){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	int count = 0;
	
	if (c>b ||d<a){
		count = 0;
	} 
	else{
		count = min(d,b) - max(c,a);
	}
	cout << count << endl;
	return 0;
}
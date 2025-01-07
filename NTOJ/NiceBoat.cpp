#include<iostream>
using namespace std;
int main(){
	unsigned x,y;
	cin >> x >> y;
	
	int k = ((max(x,y) - min(x,y))/2)+min(x,y);
	cout << k << endl;
	return 0;
}
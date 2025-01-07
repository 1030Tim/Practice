#include<iostream>
using namespace std;
int main(){
	int n,count = 1;
	cin >> n;
	int i = 1;
	while (1){
		int d = i*i;
		if (n-d >= 0){
			n-=d;
			i+=2;
			count ++;
		}
		else{
			count --;
			break;
		}
	}
	cout << count << endl;
	return 0;
}
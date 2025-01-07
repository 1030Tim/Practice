#include<iostream>
using namespace std;
int main(){
	unsigned a,b,c,ans;
	cin >> a >> b >> c;
	
	
	if (a >= max(b,c)){
		ans = a+max(b,c);
	}
	else if (b >= max(a,c)){
		ans = b+max(a,c);
	}
	else{
		ans = c+max(a,b); 
	}
	cout << ans << endl;
	return 0;
}
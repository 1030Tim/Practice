#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	
	if (n == 1 || n == 2 || n == 12){
		cout << "Winter!" << endl;
	}
	else if (n == 3 || n == 4 || n ==5){
		cout << "Spring!" << endl;
	}
	else if (n == 6 || n == 7 || n == 8){
		cout << "Summer!" << endl;
	}
	else{
		cout << "Autumn!" << endl;
	}
	return 0;
}
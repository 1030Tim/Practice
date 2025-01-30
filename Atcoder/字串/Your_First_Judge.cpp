#include<iostream>
using namespace std;
int main(){
    string point = "Hello,World!";
    string b;
    cin >> b;
    if (point == b){
        cout << "AC" <<endl;
    }
    else{
        cout << "WA" << endl;
    }
    return 0;
}
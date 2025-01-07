#include<iostream>
using namespace std;
int main(){
    string str;
    int count = 0;
    cin >> str;
    if (str[0] == 'o'){
        ++count; 
    }
    if (str[1] == 'o'){
        ++count;
    }
    if (str[2] == 'o'){
        ++count;
    }
    int answer = 700+(100*count);
    cout << answer << endl;
}
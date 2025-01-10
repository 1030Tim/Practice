// https://zerojudge.tw/ShowProblem?problemid=c290

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    int a = 0,b = 0;
    cin >> s;
    for (int i = 0; i<s.size(); i++){
        if (i%2 == 0 || i == 0){
            b += s[i]-'0';
        }
        else{
            a += s[i]-'0';
        }

    }
    cout << abs(a-b)<<endl;
    return 0;
 }
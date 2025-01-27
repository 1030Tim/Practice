#include<iostream>
using namespace std;
int main(){
    unsigned long long s;
    unsigned long long d;
    cin >> s;
    d = s;
    s %= 10;
    if (s*1111 == d){
        cout << "GREAT!!"<<endl;
    } 
    else{
        cout <<"QAQ" << endl;
    }
    
}
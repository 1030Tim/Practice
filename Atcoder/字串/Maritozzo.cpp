#include<iostream>
using namespace std;
int main(){
    string s1,s2,s3,t;
    cin >> s1 >> s2 >> s3;
    cin >> t;
    int g = t.size();
    for (int i = 0 ; i<g ;i++){
        if (t[i] == '1'){
            cout << s1 ;
        }
        else if (t[i] == '2'){
            cout << s2 ;
        }
        else if (t[i] == '3'){
            cout << s3 ;
        }
    }
    cout << endl;
    return 0;
}
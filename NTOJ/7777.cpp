#include<iostream>
using namespace std;
signed main(){
    string s;
    cin >> s;
    int count = 0;
    if (s.size() == 4){
        char c = s[0];
        for (int i = 1; i<4 ; i++){
            if (c == s[i]){
                ++count;}
        }
    }
    else{
        cout << "OAQ" << endl;
        return 0;
    }
    if (count == 4){
        cout << "GREAT!" << endl;
    }
    else cout << "OAQ" << endl;;
    return 0;
}
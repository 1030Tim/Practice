#include<iostream>
#include<string>
using namespace std;

int function(string x){
    int k = x.size();
    int count = 0;
    for (int i = 0 ; i<k ; i++){
        if (x[i] == ' '){
            ++count;
        }
    }
    return count;
}

signed main(){
    string theString;
    getline(cin,theString);
    int t = function(theString);
}
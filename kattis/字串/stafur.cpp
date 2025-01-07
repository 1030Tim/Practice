#include<iostream>
using namespace std;
int main(){
    char str;
    cin >> str;
    if (str == 'A'|| str == 'E'||str == 'I'|| str == 'O' || str  == 'U'){
        cout <<"Jebb";
    }
    else if (str == 'a'|| str == 'e'||str == 'i'|| str == 'o' || str  == 'u'){
        cout <<"Jebb";
    }
    else if (str != 'Y' && str!='y'){
        cout <<"Neibb";
    }
    else{
        cout << "Kannski";
    }
}
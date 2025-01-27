#include<iostream>
using namespace std;
int main(){
    long long a,b;
    cin >> a >> b;
    long long c = b%a;
   if (c>0){
        cout << a-c << endl;
   }
   else{
    cout << c << endl;
   }
    return 0;
}
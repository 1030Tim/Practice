#include<iostream>
using namespace std;
int main(){
    int n,d = 1,count = 0;
    cin >> n;
    if (n%2!=0){ 
        cout << "still running" << endl;
        d = 0; 
    }
    else{
        for (int i = 0; i<n; i+=2){
            int a,b;
            cin >> a >> b;
            count+= b-a;
        }
        if (d){
            cout << count << endl;
        }
    }
    return 0;
}
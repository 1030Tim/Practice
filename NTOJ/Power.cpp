#include<iostream>
using namespace std;
long long function(long long a,long long b ,long long answer){
    for (int i = 1; i<=b ;i++){
        answer*=a;
    }
    return answer;
}
int main(){
    int n;
    cin >> n;
    long long a,b,answer = 1;
    

    for (int i = 0 ;i<n ; i++){
        cin >> a >> b;
        long long  k = function(a,b,answer);
        cout << k << "\n";
    }
    
    return 0;
}
#include<iostream>
using namespace std;

int deck[100000000];

signed main(){
    int n;
    cin >> n;
    int top = 100000000/2;
    int down = 100000000/2;

    for (int i = 0 ; i<n ; i++){
        int t,x;
        cin >> t >> x;

        if (t == 1)
            deck[--top] = x;
        else if (t == 2)
            deck[down++] = x;
        else 
            cout << deck[top+x-1] << "\n";
    }
}
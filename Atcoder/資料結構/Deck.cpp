#include<iostream>
using namespace std;

int deck[100000000];

signed main(){
    int n;
    cin >> n;
    int left = 100000000/2;
    int right = 100000000/2;

    for (int i = 0 ; i<n ; i++){ // the otimetion is O(N)
        int t,x;
        cin >> t >> x;

        if (t == 1)
            deck[--left] = x;
        else if (t == 2)
            deck[right++] = x;
        else
            cout << deck[left+x-1] << "\n"; 
    }
    return 0;
}
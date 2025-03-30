#include<iostream>
using namespace std;

signed main(){
    int x,y ;
    cin >> x >> y;
    int money[3] = {10000,5000,1000};
    int ans_a = -1,ans_b = -1, ans_c = -1;
    for (int a = 0 ; a<=x ; a++){
        for (int b = 0 ; b<=x; b++){
            int c = (x-a-b);
            if (a*money[0]+b*money[1]+c*money[2] == y){
                ans_a = a;
                ans_b = b;
                ans_c = c;
                break;
            }
        }
    }

    if (ans_c<0){
        ans_a = -1;
        ans_b = -1;
        ans_c = -1;
    }
    cout << ans_a << " " << ans_b << " " << ans_c<<endl;
}
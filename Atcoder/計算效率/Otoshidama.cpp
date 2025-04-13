#include<iostream>
using namespace std;

signed main()
{
    int n,y;
    cin >> n >> y;

    int a = 10000,b = 5000, c = 1000; // 價格
    int a1 = -1,a2 = -1, a3 = -1; // 初始化答案
    for (int i = 0 ; i<=n ; i++){ // 最高執行總和次
        for (int j = 0 ; j<=n ; j++){
            int k = n-i-j;//枚舉前面兩個，最後一個 總和-(第一+第二)
            if (((i*a+b*j+k*c) == y) ){ // 如果剛好等於y
                a1 = i;
                a2 = j;
                a3 = k;
                break;
            }
        }
    }
    if (a3<0){
        a1 = -1;
        a2 = -1;
        a3 = -1;
    }
    cout << a1 << " " << a2 << " " << a3 << endl;
    

}
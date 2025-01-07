#include<iostream>
using namespace std;
int main(void)
{
    int n,count = 0;
    cin >> n;
    n+=2;
    int ary[n];

    for (int i = 1; i<n-1 ; i++)
    {
        int d;
        cin>>d;
        ary[i] = d;
    }
    //  守門員防止Error
    ary[0] = 99999; 
    ary[n-1] = 99999;

    for (int i = 1 ; i<n-1 ; i++)
    {
        if (min(ary[i-1],ary[i+1])!=0 && ary[i]==0)
        {
            ary[i] = min(ary[i-1],ary[i+1]);
            count+=ary[i];
        }
    }
    cout << count << endl;
    return 0;

}
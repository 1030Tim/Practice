#include<iostream>
using namespace std;
int main()
{
    int n,count,answer,maxs = -10000 ;
    cin >> n;
    for (int i = 1; i<=n ; i++)
    {
        count = 0;
        int k = i;
        while (k%2 == 0)
        {
            k/=2;
            ++count;
        }
        if (count > maxs)
        {
            maxs = count;
            answer = i;
        }
    }
    cout << answer << endl;
    return 0;
}
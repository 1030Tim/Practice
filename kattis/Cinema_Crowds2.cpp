#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int count = m;
    /*
    100 3
    50 100 50
    */
    for (int i = 0 ; i<m ; i++)
    {
        int d;cin >> d;
        if (n-d>=0)
        {
            n-=d;
            count--;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}
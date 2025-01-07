//https://zerojudge.tw/ShowProblem?problemid=c294
#include<iostream>
using namespace std;
void sorts(int &a,int &b , int &c){
    if (a>b && a>c){
        if (b > c) {
            int m = c;
            c = a;a = m;
        }
        else {
            int k = c,d = b;
            c = a;
            b = k;
            a = d;
        }
    }
    else if (b > a && b >c){
        if (a>c) {
            int k = c;
            c = b;
            b = a;
            a = k;
        }
        else {
            int k = c;
            c = b;
            b = k;
        }
    }
    else{
        if (a > b) {
            int g = b;
            b = a;a = g;
        }
    }
}
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    
    sorts(a,b,c);
    cout << a << " " << b << " " << c << "\n";
    if ((a+b) <= c){
        cout << "No" << endl;
    }
    else if ((a*a+b*b)<(c*c)){
        cout << "Obtuse" << endl;
    }
    else if ((a*a+b*b) == (c*c)){
        cout << "Right" << endl;
    }
    else if ((a*a+b*b) > (c*c)){
        cout << "Acute" << endl;
    }
    return 0;

}
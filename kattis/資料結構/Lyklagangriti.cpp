#include <iostream>
#include <string>
using namespace std;

void compute_n(string &s, int &all, int &n) {
    int count = 0;
    int g = s.size();
    for (int i = 0; i < g; i++) {
        if (s[i] != 'L' && s[i] != 'R') {
            ++count;
        }
    }
    all = g;
    n = count;
}



int main() {
    char stack[1000];
    string s;
    cin >> s;
    int all = 0, n = 0;
    compute_n(s, all, n);
    cout << all << "\n";
    int lift = 1000 / 2, right = (1000 / 2) + 1;


    for (int i = 0 ; i<all ; i++){
        if (s[i] == 'L'){
            stack[--lift] = s[i-1];
        }
        
    }
    if (s[all-2 == 'L']){
        stack[--lift] = s[all-1];
    }
    
    for (int i = lift ; i<right ; i++){
        cout << stack[i] << " ";
    }

}
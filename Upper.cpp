#include <iostream>

using namespace std;

string Upper(string n) {
    int siz = n.size();
    
    if (n[0] >= 97 and n[0] <= 123) {
        n[0] = n[0] - 32;
    }

    for (int i = 0; i <= siz-1; i = i+1) {
        if (n[i] == ' ' and (n[i+1] >= 97 and n[i+1] <= 123 )) {
            
            n[i+1] = n[i+1] - 32;
        }
    }
    return n;
}

int main () {
    string n ;
    cin >> n;
    cout << Upper(n);
}

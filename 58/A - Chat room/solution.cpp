#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    string target ="hello";
    int j=0;
 
    for(int i = 0; i<s.length(); i++) {
        if(s[i] == target[j]) {
            j++;
 
            if(j == 5) {
                cout<<"YES";
                return 0;
            }
        }
    }
 
    cout<<"NO";
 
    return 0;
}
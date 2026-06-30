#include <iostream>
#include<vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    while (n--) {
        string s;
        cin >> s;
        int count = 0;
 
        string t = "codeforces";
 
        for(int i = 0; i<s.size(); i++){
            if(s[i] != t[i]){
                count++;
            }
        }
 
        cout<<count<<endl;
 
    }
    return 0;
}
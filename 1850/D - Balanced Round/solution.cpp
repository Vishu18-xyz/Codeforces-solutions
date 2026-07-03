#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, k;
        cin >> n >> k;
 
        vector<int> a(n);
 
        for (int i = 0; i < n; i++)
            cin >> a[i];
 
        sort(a.begin(), a.end());
 
        int curr = 1;
        int longest = 1;
 
        for (int i = 1; i < n; i++) {
            if (a[i] - a[i - 1] <= k) {
                
                curr++;
                
            } 
            
            else {
                curr = 1;
            }
 
            longest = max(longest, curr);
        }
 
        cout << n - longest << endl;
    }
 
    return 0;
}
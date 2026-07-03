#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n, q;
        cin >> n >> q;
 
        vector<long long> a(n + 1);
        vector<long long> prefix(n + 1, 0);
 
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
            prefix[i] = prefix[i - 1] + a[i];
        }
 
        long long totalSum = prefix[n];
 
        while (q--) {
            long long l, r, k;
            cin >> l >> r >> k;
 
            // Sum of elements from l to r
            long long rangeSum = prefix[r] - prefix[l - 1];
 
            // New total sum after replacement
            long long newSum = totalSum - rangeSum + (r - l + 1) * k;
 
            if (newSum % 2 == 1)
                cout << "YES
";
            else
                cout << "NO
";
        }
    }
 
    return 0;
}
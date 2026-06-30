#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n,k;
        cin>>n;
        cin>>k;
        string s;
        cin>>s;
 
        int odd = 0;
        vector<int> freq(26,0);
        cout<<endl;
 
        for(int i = 0; i<n; i++){
            freq[s[i]-'a']++;
        }
 
        for(int i = 0; i<26; i++){
            if(freq[i]%2!=0){
                odd++;
            }
        }
        
        if(odd-k <= 1){
            cout<<"YES";
            cout<<endl;
        }
        else{
            cout<<"NO";
            cout<<endl;
        }
 
    }
}
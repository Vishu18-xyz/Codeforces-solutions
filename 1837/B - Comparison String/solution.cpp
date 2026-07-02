#include<iostream>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        string s;
        cin>>s;
        int maxc = 1;
        int count = 1;
 
        for(int i = 1; i<n; i++){
            if(s[i] == s[i-1]){
                count++;
            }
            else{
                count=1;
            }
            maxc = max(maxc,count);
        }
 
        cout<<maxc+1<<endl;
 
    }
}
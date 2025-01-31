#include<bits/stdc++.h>
using namespace std;
void solve() {
    string s, t; cin >> s >> t;
    int n = s.size(), m = t.size();
    vector<char>mi(n);
    mi[n-1]=s[n-1];
    for(int i=n-2;i>=0;i--){
        mi[i]=min(mi[i+1],s[i]);
    }
    for(int i=0;i<n;i++){
        if(s[i]!=mi[i]){
            int j=i;
            for(int k=i;k<n;k++){
                if(s[k]==mi[i])j=k;
            }
            swap(s[i],s[j]);
            break;
        }
    }
    if(s<t){
        cout<<s<<"\n";
    }
    else{
        cout<<"---\n";
    }
}
int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

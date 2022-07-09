#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    int ans=-1;
    for(int i=0;i<s.size()+1;i++){
        if(int(s[i]-'0')!=i){
            ans=i;
            break;
        }
    }
    cout << ans <<endl;
    return 0;
}
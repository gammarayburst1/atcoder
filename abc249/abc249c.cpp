#include <bits/stdc++.h>
using namespace std;

int max(int a,int b){
    if(a>b)return a;
    else return b;
}

int main(){
    int n,k;
    cin >> n >> k;
    vector<string>s(n);
    for(int i=0;i<n;i++)cin >> s[i];
    vector<int>counter(26);
    int result=0;
    for(int i=0;i<(1<<n);i++){
        for(int j=0;j<n;j++){
            if((i>>j)&1){
                for(int p=0;p<s[j].size();p++) counter[s[j][p]-'a']++;
            }
        }
        int num=0;
        for(int j=0;j<26;j++) if(counter[j]==k) num++;
        result=max(result,num);
    }
    cout << result <<endl;
    return 0;
}
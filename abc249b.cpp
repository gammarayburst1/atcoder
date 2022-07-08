#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    sort(s.begin(),s.end());
    int big=0,small=0,ok1=0,ng=0;
    
    for(int i=0;i<s.size();i++){
        char c=s[i];
        char c2=s[i+1];
        if(c==c2){
            ng=1;
            break;
        }
        if(islower(c))small=1;
        if(isupper(c))big=1;
        if(small==1 && big==1){
            ok1=1;
            continue;
        }
    }
    
    if(ng)cout << "No";
    else if(ng==0 && ok1==1)cout << "Yes";
    else cout << "No";

    return 0;
}
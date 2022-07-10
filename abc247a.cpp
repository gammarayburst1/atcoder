#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string s2(s.size(),'0');
    for(int i=0;i<s.size();i++)s2[i+1]=s[i];
    cout << s2 << endl;
}

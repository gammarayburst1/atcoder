#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, k;
    cin >> a >> b >> k;
    int ans=0;
    while(a<b){
        a*=k;
        ++ans;
    }
    cout << ans << endl;
}

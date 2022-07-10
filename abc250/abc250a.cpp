#include <bits/stdc++.h>
using namespace std;

int main() {
    int h,w;
    cin >> h >> w;
    int r,c;
    cin >> r >> c;
    int ans=0;
    for(int i=1;i<=h;i++){
        for(int j=1;j<=w;j++){
            if(abs(r-i)+abs(c-j)==1){
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
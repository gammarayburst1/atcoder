#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,q;
    cin >> n >> q;
    vector<int> x(q);
    for(int i=0;i<q;i++)cin >> x[i];
    vector<int> posi(n);
    for(int i=0;i<n;i++)posi[i]=i;
    vector<int> result(n);
    for(int i=0;i<n;i++)result[i]=i+1;
    int tmp,tmp_n;

    for(int i=0;i<q;i++){
        if(x[i]!=result[n-1]){
            tmp=result[posi[x[i]-1]];
            result[posi[x[i]-1]]=result[posi[x[i]-1]+1];
            result[posi[x[i]-1]+1]=tmp;
            posi[result[posi[x[i]-1]]-1]--;
            posi[x[i]-1]++;
        }else if(x[i]==result[n-1]){
            tmp_n=result[n-2];
            result[n-2]=result[n-1];
            result[n-1]=tmp_n;
            posi[result[n-2]-1]--;
            posi[result[n-1]-1]++;
        }
    }
    for(int j=0;j<n;j++)cout << result[j] << " ";
    return 0;
}
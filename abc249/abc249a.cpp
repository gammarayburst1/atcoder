#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e,f,x;
    cin >> a >> b >> c >> d >> e >> f >> x;

    int taka=x/(a+c);
    int taka_re=x%(a+c);
    int aoki=x/(d+f);
    int aoki_re=x%(d+f);
    int taka_dis,aoki_dis;

    if(taka_re>a)taka_dis=a*b*(taka+1);
    else taka_dis=a*b*taka+taka_re*b;
    if(aoki_re>d)aoki_dis=d*e*(aoki+1);
    else aoki_dis=d*e*aoki+aoki_re*e;

    if(taka_dis>aoki_dis)cout << "Takahashi";
    else if(taka_dis<aoki_dis)cout << "Aoki";
    else cout << "Draw";

    return 0;
}
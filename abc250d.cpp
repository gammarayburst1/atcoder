#include <bits/stdc++.h>
using namespace std;
long long binary(long long,vector<long long>&);
bool isok(long long,long long,vector<long long>&);

int main(){
    long long n;
    cin >> n;
    double n2=(double)n/(double)2;
    double one_third=0.333333333334;
    long long N=pow(n2,one_third)+1;//qの最大値
    vector<long long>all(N);
    all[0]=all[1]=0;
	for(long long i = 2; i < N; i++)all[i] = 1;
	for(long long i = 2; i < sqrt(N); i++){
		if(all[i]){
			for(long long j = 0; i * (j + 2) < N; j++)all[i *(j + 2)] = 0;
		}
	}
    vector<long long>prime;//qの最大値以下の素数リスト{2,3,5…}
	for(long long i = 0; i < N; i++){
		if(all[i])prime.push_back(i);
	}

    double one_four=0.250000000001;
    long long num_prime=0;
    long long max_p=(long long)pow(n,one_four);
    long long num_p=binary(max_p,prime);
    for(long long i = 0; i < num_p; i++){//pの最大値
        long long p=prime[i];
        long long max_q=(long long)pow((double(n)/double(p)),one_third);//pが固定されたときのqの最大値
        long long num_q=binary(max_q,prime)-i-1;
        num_prime+=num_q;
        //cout << max_q<< " " << i << " " << prime[i]<<" "<<num_q<<"  ";
	}
    cout << num_prime;

    return 0;
}

long long binary(long long key,vector<long long>&a){
    long long ng=-1;
    long long ok=(long long)a.size();
    while (abs(ok - ng) > 1) {
        long long mid = (ok + ng) / 2;
        if (isok(mid, key,a)) ok = mid;
        else ng = mid;
    }
    return ok;
}
bool isok(long long index,long long key,vector<long long>&a){
    if(a[index]>key)return true;
    else return false;
}

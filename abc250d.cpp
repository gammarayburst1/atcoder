#include <bits/stdc++.h>
using namespace std;
int binary(int,vector<int>&);
bool isok(int,int,vector<int>&);

int main(){
    int n;
    cin >> n;
    double n2=(double)n/(double)2;
    double one_third=0.333333333334;
    int N=pow(n2,one_third)+1;//qの最大値
    vector<int>all(N);
    all[0]=all[1]=0;
	for(int i = 2; i < N; i++)all[i] = 1;
	for(int i = 2; i < sqrt(N); i++){
		if(all[i]){
			for(int j = 0; i * (j + 2) < N; j++)all[i *(j + 2)] = 0;
		}
	}
    vector<int>prime;//qの最大値以下の素数リスト{2,3,5…}
	for(int i = 0; i < N; i++){
		if(all[i])prime.push_back(i);
	}

    double one_four=0.250000000001;
    int num_prime=0;
    int max_p=(int)pow(n,one_four);
    int num_p=binary(max_p,prime);
    for(int i = 0; i < num_p; i++){//pの最大値
        int p=prime[i];
        int max_q=(int)pow((double(n)/double(p)),one_third);//pが固定されたときのqの最大値
        int num_q=binary(max_q,prime)-i-1;
        num_prime+=num_q;
        //cout << max_q<< " " << i << " " << prime[i]<<" "<<num_q<<"  ";
	}
    cout << num_prime;

    return 0;
}

int binary(int key,vector<int>&a){
    int ng=-1;
    int ok=(int)a.size();
    while (abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;
        if (isok(mid, key,a)) ok = mid;
        else ng = mid;
    }
    return ok;
}
bool isok(int index,int key,vector<int>&a){
    if(a[index]>key)return true;
    else return false;
}

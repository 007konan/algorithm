//尺取り法
/*先に総和を求めることでO(1)で計算できる。あとは二分探索する方法もあるが、これはO(nlogn)であり効率がそんなに良くない。
なので、以下のO(n)になる効率が高いソースコードを以下に記載する。*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int n,S;
int a[INT_MAX];

void solve(){
    int res = n + 1;
    int s = 0, t = 0, sum = 0;
    while(1){
        while(t < n && sum < s){
            sum += a[t++];
        }
        
        if(sum < S) break;
        
        res = min(res, t-s);
        sum -= a[s++];
    }
    if(res > n){
        //解が存在しない
        res = 0;
    }

    printf("%d\n", res);
}



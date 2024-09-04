///DP for fibonacci series - Optimize
///f(n) = f(n-1) + f(n-2)
///(a+b)%m = ((a%m) + (b%m))%m
///TC = O(n)

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl '\n'
#define mem(a,b) memset(a, b, sizeof(a) )
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}
#define MOD 1000000007

const int mx=1e7+123;
ll dp[mx];
int cnt=0;

ll fib(int n){
    cnt++;
    if(n==1) return 0;
    if(n==2) return 1;
    if(dp[n]!=-1) return dp[n];

    ll res = ((fib(n-1) % MOD) + (fib(n-2) % MOD)) % MOD;
    dp[n]=res;

    return res;

}

int main(){

    optimize();

    mem(dp,-1);
    int lim=1e4;
    cout<<fib(lim)<<endl;
    dbg(cnt);

return 0;
}



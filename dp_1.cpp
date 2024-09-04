///DP for fibonacci series.
///f(n) = f(n-1) + f(n-2)
///TC = O(n)

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl '\n'
#define mem(a,b) memset(a, b, sizeof(a) )
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int dp[123];

int fib(int n){
    if(n==1) return 0;
    if(n==2) return 1;
    if(dp[n]!=-1) return dp[n];

    dp[n]=fib(n-1)+fib(n-2);

    return dp[n];

}

int main(){

    optimize();

    mem(dp,-1);
    cout<<fib(6)<<endl;

return 0;
}


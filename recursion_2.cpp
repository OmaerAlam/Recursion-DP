///Recursion for fibonacci series.
///f(n) = f(n-1) + f(n-2)
///TC = O(2^n) Huge time complexity so we will use dp

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int fib(int n){
    if(n==1) return 0;
    if(n==2) return 1;

    int res=fib(n-1)+fib(n-2);

    return res;

}

int main(){

    optimize();

    cout<<fib(6)<<endl;

return 0;
}


///Recursion for factorial
///f(n) = n * f(n-1)

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int factorial(int n){
    if(n==1) return 1;
    int res=n*factorial(n-1);

    return res;
}

int main(){

    optimize();

    cout<<factorial(5)<<endl;

return 0;
}

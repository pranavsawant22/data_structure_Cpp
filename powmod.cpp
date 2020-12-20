#include<bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b,long long m) {
if (b == 0)
return 1;

if (b % 2==0){
long long res = binpow(a, b / 2,m);
return (res * res)%m;}
else{
return (a%m*binpow(a,b-1,m))%m;
}
}
int main(){
    int n;
    cin>>n;
    cout<<binpow(n,13,7);
return 0;
}




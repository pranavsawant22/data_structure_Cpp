#include<bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b) {
if (b == 0)
return 1;

if (b % 2==0){
long long res = binpow(a, b / 2);
return res * res;}
else{
return a*binpow(a,b-1);
}
}
int main(){
    int n;
    cin>>n;
    cout<<binpow(n,13);
return 0;
}




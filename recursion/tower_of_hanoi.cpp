#include<iostream>
using namespace std;
void solve(int n,int s,int d,int h){
if (n==1){
    cout<<"The plate moves from pole ("<<s<<") to pole ("<<d<<")"<<endl;
    return;
}
solve(n-1,s,h,d);
cout<<"The "<<n<<"th plate moves from pole ("<<s<<") to pole ("<<d<<")"<<endl;
solve(n-1,h,d,s);
return;
}
int main(){
int n,s=1,h=2,d=3;
cin>>n;
solve(n,s,d,h);
cout<<endl;
}
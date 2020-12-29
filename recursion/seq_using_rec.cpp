#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void seq(int arr[],int n){
    
if (n<=0) return;
arr[n-1]=n;
seq(arr,n-1);


}
int main(){
    int n;
    cin>>n;
  int arr[n];

seq(arr,n);
for (int i=0;i<n;i++){

    cout<<arr[i]<<" ";
}
cout<<endl;
    return 0;
}
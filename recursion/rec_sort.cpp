#include<iostream>
using namespace std;
void print(int arr[],int n){
for (int i=0;i<n;i++){
    cout<<arr[i]<<' ';
}
cout<<endl;
return;
}
void sort_rec(int arr[],int n){

if (n<=1) return;
sort_rec(arr,n-1);
 int last = arr[n-1]; 
    int j = n-2; 
  
    while (j >= 0 && arr[j] > last) 
    { 
        arr[j+1] = arr[j]; 
        j--; 
        print(arr,n-1);
    } 
    arr[j+1] = last; 
    
}

int main(){
int n;
cout<<"Enter the length of array"<<endl;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
print(arr,n);
sort_rec(arr,n);
print(arr,n);

}
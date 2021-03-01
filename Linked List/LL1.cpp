#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
Node* head;
void print(){
    Node *temp = head;
    while(temp!=NULL){
        
        cout<<temp->data<<" ";
        temp = temp->next;
    }
cout<<endl;
}
void insert(int x){
Node* temp = new Node();
temp->next = head;
temp->data = x;
head= temp;

}

void insert_end(int x){
    Node* temp = new Node();
    Node* temp1 = head;
   temp->data = x;
  
     if (head == NULL){
         
   temp->next = NULL; 
head = temp;

    }
    else{
   temp1 = head;
   while(temp1->next != NULL){
       temp1 = temp1->next;
   } 
   temp1->next = temp;
   temp->next = NULL;}
}
int main(){
    head=NULL;
    
   int n;
   cout<<"Enter the no. of terms you want : "<<endl;
   cin>>n;
for (int _ =0;_<n;_++){
    int k;
    cin>>k;
    insert_end(k);//change to nsert function for insertion at start
    print();
}

print();
    return 0;
}

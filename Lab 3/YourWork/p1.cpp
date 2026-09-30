#include<iostream>
using namespace std;
struct node{
    int val;
    node*next;
};
struct singlyLinkedList{
    node *head, *tail;
    singlyLinkedList(){
     head=NULL;
     tail=NULL;
     cout<<"Simply Linked list initialized"<<endl;
    }
};


int main(){

singlyLinkedList s2;



return 0;


}

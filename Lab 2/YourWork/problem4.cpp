#include <iostream>
  using namespace std;
   struct node{
    int data;
   };
   int main(){
   node n1;
     n1.data=50;
      node *ptr=&n1;
       cout<<n1.data;
    


    return 0;
   }
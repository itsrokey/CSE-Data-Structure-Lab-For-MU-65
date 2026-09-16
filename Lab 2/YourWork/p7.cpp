#include <iostream>
using namespace std;
struct node{
    int data;
    void printData(){
        cout<<"The stored data is:"<<data<<endl;
    }
};
int main(){
    node n1;
    n1.data=30;
    n1.printData();



    return 0;
}
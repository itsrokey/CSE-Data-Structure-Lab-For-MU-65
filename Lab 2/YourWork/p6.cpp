#include <iostream>
using namespace std;
struct node{
    int data;
    node(){
        data =0;
        cout<<" Node created and initialized to 0!"<<endl;

    }
    ~node(){
        cout<<"Node destroyed and memory cleaned up!"<<endl;

    }
};
int main(){
    node n1;


    return 0;
}
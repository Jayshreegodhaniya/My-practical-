#include<iostream>
using namespace std;

int a=3;
int main(){

    int a=2;

    cout<<"local variable:"<<a<<endl;
    cout<<"Global variable:"<<::a<<endl;

    return 0;
    
}
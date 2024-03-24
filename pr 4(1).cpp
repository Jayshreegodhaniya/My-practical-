#include<iostream>
using namespace std;

void sort( int &a,int &b){

if(a>=b)
{
a = a+b;
b=a-b;
a= a-b;
cout << "your sorted number is : " << endl;
cout << "a :"<< a<< endl;
cout << "b :" <<b << endl;
}
else{
cout << "your num is already sorted" << endl;
}
};
int main()
{
  int x,y;
    cout << "enter two num"<<endl;
    cin >> x>>y;
    sort(x,y);
    
    return 0;
}
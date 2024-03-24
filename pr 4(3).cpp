#include<iostream>
using namespace std;
inline float area(float r,float pi=3.14){
return pi*r*r;
}
int main()
{
float r;
cout << "Enter value of r : " << endl;
cin >> r;
cout << "Area of circle is : " <<area(r)<<endl;
    return 0;
}
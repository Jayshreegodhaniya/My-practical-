#include<iostream>
using namespace std;

int max(int a, int b, int c){

if(a>b && a>>c){
return a;
}else if(b>a && b>c){
return b;
}else if(c>a && c>b){
return c;
}
}
int main()
{
int maximum;
int x=5,y=6,z=2;
maximum=max(x,y,z);
cout << "Maximum is : " << maximum << endl;
return 0;
}
#include<iostream>
#include<string>
using namespace std;
string max(string a, string b, string c){
int la=a.length();
int lb=b.length();
int lc=c.length();

if (la>lb && la>lc){
return a;
} else if (lb>lc && lb>la){
return b;
} else if (lc>la && lc>lb){
return c;
}
}
int main()
{
 string maxs;
 
 string f="Apple", g="Banana" , h="Pineapple";
 
 maxs= max(f,g,h);
 
 cout <<"Maximum is: "<<maxs;
    
    return 0;
}
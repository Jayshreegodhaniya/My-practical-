#include<iostream>
using namespace std;

struct college{
string college_name;
int college_code;
string college_dept;
int intake;
};
int main()
{
college c1={"GPJ",619,"computer",79};
    cout <<"College Name: "<<c1.college_name<< endl;
    cout << "College Code: " <<c1.college_code<< endl;
    cout << "College Department: " <<c1.college_dept<< endl;
    cout << "Intake:" <<c1.intake<< endl;
    return 0;
}
#include<iostream>
using namespace std;
class Employ {
public:
    int employe_num;
    string employe_name;
    int basic_salary;
    double DA;
    int IT;
    double net_salary;
};
int main()
{
    Employ e1;
    cout << "Enter Employee number: " << endl;
    cin >> e1.employe_num ;
    cout << "Enter Employee name: " << endl;
    cin >> e1.employe_name;
    cout << "Enter Basic salary: " << endl;
    cin >> e1.basic_salary;
    cout << "Enter DA: " << endl;
    cin >> e1.DA;
    cout << "Enter Icome tex: " << endl;
    cin >> e1.IT;
    cout << "Enter Net salary: " << endl;
    cin >> e1.net_salary;
    return 0;
}
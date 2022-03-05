#include <iostream>

using namespace std;

class Employee
{
    int salary, noh;

public:
    void get_info(int a, int b);
    void Add_Sallary();
    void AddWork();
    void display();
};

void Employee ::get_info(int a, int b)
{
    salary = a;
    noh = b;
}

void Employee ::Add_Sallary()
{
    if (salary < 500)
    {
        salary += 10;
    }
}

void Employee ::AddWork()
{
    if (noh > 6)
    {
        salary += 5;
    }
}

void Employee ::display()
{
    cout << "salary is :" << salary << endl;
    cout << "noh is :" << noh << endl;
}
int main()
{
    Employee emp1;
    int a, b;
    cout << "enter the salary in $: ";
    cin >> a;
    cout << endl
         << "enter the number of hours of work per day: ";
    cin >> b;
    emp1.get_info(a, b);
    emp1.display();
    emp1.Add_Sallary();
    emp1.AddWork();
    emp1.display();

    return 0;
}


#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;

class Employee {
protected:
    string firstName, initial, lastName;

public:
    Employee(string f, string i, string l)
        : firstName(f), initial(i), lastName(l) {}

    virtual double getSalary() = 0;
    virtual ~Employee() {}
};
#endif
SalaryEmployee.h
Copy code
Cpp
#include "Employee.h"

class SalaryEmployee : public Employee {
private:
   double monthlySalary;
public:
    SalaryEmployee(string f, string i, string l, double sal)
        : Employee(f, i, l), monthlySalary(sal) {}
    double getSalary() {
        return monthlySalary;
    }
};
HourlyEmployee.h
Copy code
Cpp
#include "Employee.h"
class HourlyEmployee : public Employee {
private:
    double hours, rate;
public:
    HourlyEmployee(string f, string i, string l, double h, double r)
        : Employee(f, i, l), hours(h), rate(r) {}
    double getSalary() {
        return hours * rate;
    }
};

#include <iostream>
#include "SalaryEmployee.h"
#include "HourlyEmployee.h"
using namespace std;
int main() {
    Employee* e1 = new SalaryEmployee("John", "A", "Doe", 50000);
    Employee* e2 = new HourlyEmployee("Jane", "B", "Smith", 160, 300);
    cout << "Salary Employee: " << e1->getSalary() << endl;
    cout << "Hourly Employee: " << e2->getSalary() << endl;
    delete e1;
    delete e2;
    return 0;
}

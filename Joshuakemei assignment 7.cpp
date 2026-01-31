// File: joshuakemei assignment 7.cpp
#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    int age;
    int serviceYear;
    double salary;

public:
    // Constructor
    Employee(string n, int a, int s, double sal) {
        name = n;
        age = a;
        serviceYear = s;
        salary = sal;
    }

    // Destructor
    ~Employee() {
        cout << "Employee object destroyed\n";
    }

    // Getter methods
    string getName() { return name; }
    int getAge() { return age; }
    int getServiceYear() { return serviceYear; }
    double getSalary() { return salary; }
};

int main() {
    Employee e("Joshua", 22, 3, 45000);
    cout << e.getName() << " " << e.getSalary() << endl;
    
    return 0;
}
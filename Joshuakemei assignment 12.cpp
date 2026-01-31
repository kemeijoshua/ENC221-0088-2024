#include <iostream>
#include <string>
using namespace std;
class Student {
public:
    string name, regNo;
};
class Course {
public:
    string courseName;
};
class Registration {
public:
    void registerStudent(Student s, Course c) {
        cout << s.name << " registered for " << c.courseName << endl;
    }
};
int main() {
    Student s;
    Course c;
    s.name = "Joshua";
    s.regNo = "CS101";
    c.courseName = "Object Oriented Programming";
    Registration r;
    r.registerStudent(s, c);

    return 0;
}#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name, regNo;
};

class Course {
public:
    string courseName;
};

class Registration {
public:
    void registerStudent(Student s, Course c) {
        cout << s.name << " registered for " << c.courseName << endl;
    }
};

int main() {
    Student s;
    Course c;

    s.name = "Joshua";
    s.regNo = "CS101";

    c.courseName = "Object Oriented Programming";
    Registration r;
    r.registerStudent(s, c);

    return 0;
}

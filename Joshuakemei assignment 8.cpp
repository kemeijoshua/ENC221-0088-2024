#include <iostream>
using namespace std;
class Square {
protected:
    double side;
public:
    Square(double s) : side(s) {}
    virtual ~Square() {}
    double getPeri() {
        return 4 * side;
    }
    double getArea() {
        return side * side;
    }
};
class Cube : public Square {
public:
    Cube(double s) : Square(s) {}
    double getArea() {
        return 6 * side * side;
    }
    double getVolume() {
        return side * side * side;
    }
};
int main() {
    Square sq(4);
    cout << "Square Area: " << sq.getArea() << endl;
    Cube cb(4);
    cout << "Cube Surface Area: " << cb.getArea() << endl;
    cout << "Cube Volume: " << cb.getVolume() << endl;

    return 0;
}

#include <iostream>
# include<string>
using namespace std;

class myneighbour {
public:
    string name;
    string colour;
    int age;
    string tribe;
    string course;
};
int main() {
    myneighbour neighbour;

    neighbour.name="dennis kimtai";
    neighbour.colour="black";
    neighbour.age=21;
    neighbour.tribe="luhya";
    neighbour.course="mechanical engineering";
    
    cout << neighbour.name << " is " << neighbour.colour << " in colour" << endl;
    cout <<  neighbour.name << " is " << neighbour.age << " years old" <<endl;
    cout << neighbour.name << " is " << neighbour.tribe << endl;
    cout << neighbour.name << " is " << neighbour.course << endl;

    return 0;
}
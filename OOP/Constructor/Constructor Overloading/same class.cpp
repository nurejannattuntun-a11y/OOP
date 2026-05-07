#include<bits/stdc++.h>
using namespace std;

class Students{
public:
    string name;
    int roll;
    string mob;
    string session;
    Students(string name, int roll) {
        this->roll = roll;
        this->name = name;
        cout << "1st constructor" << endl;
    }
    Students(string name, int roll, string mob) {
        this->roll = roll;
        this->name = name;
        this->mob = mob;
        cout << "2nd constructor" << endl;
    }
    Students(string name, string mob, int roll) {
        this->roll = roll;
        this->name = name;
        this->mob = mob;
        cout << "3rd constructor" << endl;
    }
};
int main() {
    Students obj1("Rahim", 500);
    cout << "Name: " << obj1.name << endl;
    cout << "Roll: " << obj1.roll << endl;

    Students obj2("Karim", 400, "01793434");
    cout << "Name: " << obj2.name << endl;
    cout << "Roll: " << obj2.roll << endl;
    cout << "Mob: " << obj2.roll << endl;

    Students obj3("Alice", "01823423", 300);
    cout << "Name: " << obj3.name << endl;
    cout << "Roll: " << obj3.roll << endl;
    cout << "Mob: " << obj3.roll << endl;



}

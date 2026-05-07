#include<bits/stdc++.h>
using namespace std;

class Students{
public:
    int roll;
    string name;
    Students() {
        cout << "Constructor" << endl;
    }
    ~Students() {
        cout << "Destructor" << endl;
    }
};

int main() {
    Students obj;
    obj.roll = 212;
    obj.name = "Tuntun";

    cout << obj.roll << ' ' << obj.name << endl;

    return 0;
}

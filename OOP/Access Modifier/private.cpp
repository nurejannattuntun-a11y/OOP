#include<bits/stdc++.h>
using namespace std;

class Students{
private:
    string name;
    int roll;
    void print() {
        cout << name << endl;
        cout << roll << endl;
    }

};
class Players:public Students{
    void print() {
//        cout << name << endl;
//        cout << roll << endl;
    }
};

int main(){
    Students s1;
//    s1.name = "Karim";
//    s1.roll = 5;
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

class Student{
public:
    string name;
    string roll;
};

class Scholar : public Student{
public:
    int scAmount;
};

int main() {
    Scholar s1;
    cin >> s1.name;
    cin >> s1.roll;
    cin >> s1.scAmount;

    cout << s1.name << endl;
    cout << s1.roll << endl;
    cout << s1.scAmount << endl;

    return 0;
}

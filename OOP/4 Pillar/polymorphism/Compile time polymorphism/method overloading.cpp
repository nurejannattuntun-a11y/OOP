#include<bits/stdc++.h>
using namespace std;

class vehicle{
public:
    int pri, wei, cap;
    void show(int pri) {
        cout << "first" << endl;
        cout << pri << endl;
    }
    void show(int pri, string name) {
        cout << "second" << endl;
        cout << pri << endl;
        cout << name << endl;
    }
    void show(string name, int pri) {
        cout << "third" << endl;
        cout << pri << endl;
        cout << name << endl;
    }
};

int main() {
    vehicle obj;
    obj.show(20);
    obj.show(20, "samsung");
    obj.show("oppo", 50);

    return 0;
}

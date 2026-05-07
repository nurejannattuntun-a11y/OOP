#include<bits/stdc++.h>
using namespace std;

class Car{
public:
    int pri, wei;

    Car operator + (Car tmp) {
        Car tmp2;
        tmp2.pri = this->pri - tmp.pri;
        tmp2.wei = this->wei - tmp.wei;
        return tmp2;
    }
};

int main() {
    Car obj1;
    obj1.pri = 100;
    obj1.wei = 200;


    Car obj2;
    obj2.pri = 300;
    obj2.wei = 250;

    Car obj3 = obj1 + obj2;

    cout << obj3.pri << ' ' << obj3.wei << endl;

    return 0;
}

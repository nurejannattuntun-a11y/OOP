#include<bits/stdc++.h>
using namespace std;

class Vehicle{
public:
    int price;
    int weight;
    string col;
    Vehicle(int price, string col) {
        this->price = price;
        this->col = col;
    }
    Vehicle(Vehicle& tmp) {
        *this = tmp;
    }
};

int main() {
    Vehicle car1(1500000, "red");
//    car1.price = 1500000;
//    car1.weight = 1000;
//    ca1.col = "black";

    Vehicle car2(2000000, "black");
//    car2.price = 2000000;
//    car2.weight = 2000;
//    ca2.col = "red";

    car2 = car1;

    cout << "For car1:" << endl;
    cout << car1.price << endl;
    cout << car1.weight << endl;
    cout << car1.col << endl << endl;

    cout << "For car2:" << endl;
    cout << car2.price << endl;
    cout << car2.weight << endl;
    cout << car2.col << endl;

    return 0;
}

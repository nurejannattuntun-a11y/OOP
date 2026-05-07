#include<bits/stdc++.h>
using namespace std;

class Vehicle{
public:
    int price;
    int weight;
    string col;
    Vehicle(int price, int weight, string col) {
        this->price = price;
        this->weight = weight;
        this->col = col;
    }
};

int main() {
    Vehicle car1(1500000, 1000, "black");
//    car1.price = 1500000;
//    car1.weight = 1000;
//    ca1.col = "black";

    Vehicle car2(2000000, 2000, "red");
//    car2.price = 2000000;
//    car2.weight = 2000;
//    ca2.col = "red";

    cout << "For car1:" << endl;
    cout << car1.price << endl;
    cout << car1.weight << endl;
    cout << car1.col << endl;

    cout << "For car2:" << endl;
    cout << car2.price << endl;
    cout << car2.weight << endl;
    cout << car2.col << endl;

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

class Users{
private:
    string email, pass;

public:
    void setter(string email, string pass) {
        this->email = email;
        this->pass = pass;
    }
    string getEmail() {
        return email;
    }
    string getPass() {
        return pass;
    }
};

int main() {
    Users obj;
    string email, pass;
    cin >> email >> pass;
    obj.setter(email, pass);


    cout << obj.getEmail() << endl;
    cout << obj.getPass() << endl;


    return 0;
}

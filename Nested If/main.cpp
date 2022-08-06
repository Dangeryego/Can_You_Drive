#include <iostream>

using namespace std;

int main()
{
    const int driving_age{16};
    cout << "Welcome to Car driving service" << endl;
    cout << "Please enter your age  ";
    int age {};
    cin >> age;
    if (age >= driving_age) {
        cout << "Do you own a car (1=yes, 0=no)  ";
        bool own_car{};
        cin >> own_car;
        if (own_car == true) {
            cout << "Yes - you can drive" << endl;
        }else {cout << "Sorry!! You need to buy a car before you can drive" << endl;}
    }else {int dif {driving_age - age};
        cout << "Sorry!!Come back in " << dif << " years and be sure you own a car when you come back " << endl;
    }


    return 0;
}

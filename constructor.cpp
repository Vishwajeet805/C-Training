#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
// class MyClass {
//     public:
//         MyClass()
//         {
//             printf("Hello World");
//         }
// };
// int main() {
//     MyClass myObj; // Create an object of MyClass
//     return 0;
// }

class Car{    //the class
    public:     //the access specifier

    string model;
    string brand;
    int year;
        Car(string x, string y, int z);
};
Car::Car(string x, string y, int z){//constructor with parameters
            model = x;
            brand = y;
            year = z;
}
int main() {
    Car carObj1("Mustang", "Ford", 1969);
    Car carObj2("Corolla", "Toyota", 2020);
    cout<<"Model= "<<carObj1.model<<" \nBrand= "<<carObj1.brand<<" \nYear= "<<carObj1.year<<endl;
    cout<<"Model= "<<carObj2.model<<" \nBrand= "<<carObj2.brand<<" \nYear= "<<carObj2.year;
    return 0;
}


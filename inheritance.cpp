#include<iostream>
using namespace std;
// class Animal{
//     public:
   
//     void eat(){
//         cout<<"Can Eat \n";
//     }
// };
// class Mammal:public Animal
// {
//     public:
//     void walk(){
//         cout<<"Can Walk \n";
//     }
// };
// class Dog:public Mammal
// {
//     public:
//     void bark(){
//         cout<<"Can bark \n";
//     }
// };
// int main(){
//     Dog daddaTyagi;
//     daddaTyagi.eat();
//     daddaTyagi.walk();
//     daddaTyagi.bark();
    
// }
// class Pa.pa{
//     public:
   
//     void height(){
//         cout<<"Height=5'12\n";
//     }
// };
// class Mummy
// {
//     public:
//     void hair(){
//         cout<<"Hair = Black \n";
//     }
// };
// class Beta:public Papa,public Mummy
// {
//     public:
//     void boy(){
//         cout<<"GOOD BOY \n";
//     }
// };
// int main(){
//     Beta daddaTyagi;
//     daddaTyagi.height();
//     daddaTyagi.hair();
//     daddaTyagi.boy();
//     return 0;
// }

// class Vehicle{
//     public:
   
//     Vehicle(){
//         cout<<"Vrum Vrum\n";
//     }
// };
// class Fare
// {
//     public:
//     Fare(){
//         cout<<"Fare of Vehicle \n";
//     }
// };
// class Car:public Vehicle
// {
//     public:
//     void drive(){
//         cout<<"can Vrum Vrum \n";
//     }
// };
// class Bus:public Vehicle,public Fare
// {
//     public:
//     void boy(){
//         cout<<"the vehicle is a bus with fare \n";
//     }
// };
// int main(){
//     Beta daddaTyagi;
//     daddaTyagi.height();
//     daddaTyagi.hair();
//     daddaTyagi.boy();
//     return 0;
// }
class Animal{
    public:
     void Eat(){
        cout<<"can eat\n";
    }
    
};
class Bird:public virtual Animal
{
    public:
    void Fly(){
        cout<<"Can Fly\n";
    }
};
class Mammal:public virtual Animal
{
    public:
    void birth(){
        cout<<"can give birth \n";
    }
};
class Bat:public Bird,public Mammal
{
    public:
    void boy(){
        cout<<"I am a bat\n";
    }
};
int main(){
    Bat daddaTyagi;
    daddaTyagi.Eat();
    daddaTyagi.Fly();
    daddaTyagi.birth();
    daddaTyagi.boy();
    return 0;
}








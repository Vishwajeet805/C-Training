#include <iostream>
using namespace std;

// class Appliance{
//     public:
//         virtual void start(){
//             cout<<"Generic Appliances\n";
//         }
// };
// class Oven :public Appliance{
//     public:
//     void start() override{
//         cout<<"Oven is starting\n";
//     }
// };
// class Toaster :public Appliance{
//     public:
//     void start() override{
//         cout<<"Toaster is starting\n";
//     }
// };
class Appliance{
    public:
        Appliance(){
            cout <<"Appliance Created\n";
        }
        ~Appliance(){
            cout<<"Appliance Destroyed\n";
        }
};
class Oven :public Appliance{
    public:
     Oven(){
            cout <<"Appliance Created\n";
        }
        ~Oven(){
            cout<<"Appliance Destroyed\n";
        }
};
class Toaster :public Appliance{
    public:
    Toaster(){
            cout <<"Appliance Created\n";
        }
        ~Toaster(){
            cout<<"Appliance Destroyed\n";
        }
};
int main(){
    Appliance *O = new Oven();
    Appliance *T = new Toaster();

    delete O;
    delete T;
    return 0;
}
/*
In C++ ther is a table of pointer called v table. This table is present in every generation on class to implement dynamic polymorphism.Each table for each class contains the pointers to the relevant function which should be called during dynamic Dispatch
*/
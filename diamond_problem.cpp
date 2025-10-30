#include <iostream>
using namespace std;
class Vehicle
{
public:
    float speed ;
    Vehicle(float s){
        speed = s;
    }
};
class Car : public Vehicle
{
public:
    int seats;
    Car(float s,int seatcount):Vehicle(s)
   {
    seats = seatcount;
   }
};
class ElectricCar : public Car
{
public:
    string battery;
    ElectricCar(float s , int seatcount,string a): Car(s,seatcount){
        battery=a;
    }
};
class Airplane
{
public:
    float maxspeed;
    Airplane(float x){
        maxspeed =x;
    }
};
class FlyingCar : public Car, public Airplane
{
public:
    FlyingCar(float s, int seatcount ,float x):Car(s,seatcount),Airplane(x){

    }
};

int main() {
    
    Vehicle vehicle(100.0);
    Car car(120.0, 4);
    ElectricCar electricCar(150.0, 4, "Lithium-ion");
    Airplane airplane(500.0);
    FlyingCar flyingCar(200.0, 2, 300.0);

    
    cout << "Vehicle speed: " << vehicle.speed << endl;
    cout << "Car speed: " << car.speed << ", Seats: " << car.seats << endl;
    cout << "Electric Car speed: " << electricCar.speed << ", Seats: " << electricCar.seats << ", Battery: " << electricCar.battery << endl;
    cout << "Airplane max speed: " << airplane.maxspeed << endl;
    cout << "Flying Car speed: " << flyingCar.speed << ", Seats: " << flyingCar.seats << ", Max flying speed: " << flyingCar.maxspeed << endl;

    return 0;
}
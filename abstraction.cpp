#include<iostream>
using namespace std; 

class Bike{
    public:
        string brand, model, engine_type;
        int year, price;

    void injectFuel(){
        cout << "Injected the Fuel - Petrol!";
    }

    void igniteFuel(){ // Internal data-hidden
        cout << "Ignite the Fuel!" << endl;
    }

    void start(string bikeMode1){
        injectFuel(); // Abstraction
        igniteFuel(); // Abstraction
        cout << model << " Started, Happy Journey!" << endl;
    }

    void stopAcceleration(){ // Internal data-hidden
        cout << "Acceleration stopped!" << endl;
    }

    void stopFuelFlow(){ //Internal data-hidden
        cout << "Stopping the Fuel" << endl;
    }

    void stop (){
        stopAcceleration(); // Abstraction
        stopFuelFlow(); // Abstraction
        cout << model << "stopped, lock the Vehicle!";
    }
};

int main(){
    Bike bike1;
    bike1.brand = "Bajaj";
    bike1.model = "Pulsar NS125";
    bike1.engine_type = "BS6";
    bike1.year = 2022;
    bike1.price = 150000;
    bike1.start(bike1.model);
    bike1.stop();
}
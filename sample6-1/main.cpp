#include "car.h"
#include "ambulance.h"

int main(){
    CCar car;
    car.supply( 10 );
    car.move();
    car.move();
    CAmbulance ambulance;
    ambulance.supply( 10 );
    ambulance.move();
    ambulance.sevePeaple();
    return 0;
};
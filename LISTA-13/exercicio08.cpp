#include <string.h>

#include <iostream>

using namespace std;

class Time {
   public:
    int day, hour, minutes;
};

class Parking : public Time {
   public:
    char licensePlate[15], carBrand[25];
    Time entryTime, departureTime;

   public:
    void printAmountCharged() {
        double amountCharged, totalHours;
        totalHours = ((departureTime.hour + (departureTime.minutes / 60.0)) - (entryTime.hour + (entryTime.minutes / 60.0)));
        amountCharged = totalHours * 8;
        cout << "\nAmount Charged: R$" << amountCharged;
    }

    void registerCar() {
        fflush(stdin);
        cout << "\n\nEnter the license plate number:";
        fgets(licensePlate, 15, stdin);
        fflush(stdin);
        cout << "Enter the brand of the car:";
        fgets(carBrand, 100, stdin);
        fflush(stdin);
        cout << "-Enter the entry time-";
        cout << "\nHour:";
        cin >> entryTime.hour;
        cout << "Minutes:";
        cin >> entryTime.minutes;
        cout << "-Enter the departure time-";
        cout << "\nHour:";
        cin >> departureTime.hour;
        cout << "Minutes:";
        cin >> departureTime.minutes;
    }

    void printCar() {
        cout << "\n\nCar License Plate: " << licensePlate;
        cout << "\nCar Brand: " << carBrand;
        cout << "\nEntry Time: " << entryTime.hour << ":" << entryTime.minutes;
        cout << "\nDeparture Time: " << departureTime.hour << ":" << departureTime.minutes;
        printAmountCharged();
    }
};

int main(void) {
    Parking car;
    car.registerCar();
    car.printCar();
    return 0;
}

#include <string.h>

#include <iostream>

using namespace std;

class Restaurant {
   public:
    char name[40], adress[100], typeFood[40];
    double averagePrice;

   public:
    Restaurant() {
        averagePrice = 0;
        memset(name, 0, sizeof(name));
        memset(adress, 0, sizeof(adress));
        memset(typeFood, 0, sizeof(typeFood));
    }

    Restaurant(char nameParameter[40], char adressParameter[100], char typeFoodParameter[40], double averagePriceParameter) {
        strcpy(name, nameParameter);
        strcpy(adress, adressParameter);
        strcpy(typeFood, typeFoodParameter);
        averagePrice = averagePriceParameter;
    }

    void registerRestaraunt() {
        fflush(stdin);
        cout << "\n\nEnter restaurant name:";
        fgets(name, 40, stdin);
        fflush(stdin);
        cout << "Enter restaurant adress:";
        fgets(adress, 100, stdin);
        fflush(stdin);
        cout << "Enter the type of restaurant food:";
        fgets(typeFood, 40, stdin);
        cout << "Enter the restaurant average price:";
        cin >> averagePrice;
    }

    void printRestaurant() {
        cout << "\n\nName: " << name;
        cout << "\nType of food: " << typeFood;
        cout << "\nAverage Price: R$" << averagePrice;
        cout << "\nAdress: " << adress;
    }
};

int main(void) {
    Restaurant restaurants[2];
    char userTypeFood[40];
    int i;

    for (i = 0; i < 2; i++) {
        restaurants[i].registerRestaraunt();
    }

    cout << "\n\nEnter your type Food:";
    cin >> userTypeFood;
    for (i = 0; i < 2; i++) {
        if (strcmp(userTypeFood, restaurants[i].typeFood) == 0) {
            restaurants[i].printRestaurant();
        }
    }

    return 0;
}

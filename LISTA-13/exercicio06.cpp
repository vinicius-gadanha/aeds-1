#include <string.h>
#include <time.h>

#include <iostream>

using namespace std;

class Person {
   private:
    char name[100], adress[100];
    int age, birthDay, birthMonth, birthYear;

   public:
    void personRegister() {
        fflush(stdin);
        cout << "\n\nEnter your name:";
        fgets(name, 100, stdin);
        fflush(stdin);
        cout << "Enter your adress:";
        fgets(adress, 100, stdin);
        cout << "-Enter your birthday-";
        cout << "\nDay:";
        cin >> birthDay;
        cout << "Month:";
        cin >> birthMonth;
        cout << "Year:";
        cin >> birthYear;
        age = calculateAge(birthDay, birthMonth, birthYear);
    }

    void printPerson() {
        cout << "\n\nName: " << name;
        cout << "\nBirthday: " << birthDay << "/" << birthMonth << "/" << birthYear;
        cout << "\nAge: " << age << " years";
        cout << "\nAdress: " << adress;
    }

    int calculateAge(int day, int month, int year) {
        time_t mytime = time(NULL);
        tm* currentTime = localtime(&mytime);
        int resultAge;
        resultAge = ((currentTime->tm_year + 1900) - year);
        if ((currentTime->tm_mon + 1) <= month) {
            if ((currentTime->tm_mday) <= day) {
                resultAge -= 1;
            }
        }
        return resultAge;
    }
};

int main(void) {
    Person person1, person2;

    cout << "\nPeople Register:";
    person1.personRegister();
    person2.personRegister();
    cout << "\n\nPeople Data:";
    person1.printPerson();
    person2.printPerson();
    return 0;
}

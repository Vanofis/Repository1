#include "iostream"
#include "LW13.h"

using namespace std;

void OutputPeople()
{
    const int length = 9;
    char cityName[30];
    int averageAge = 0;

    Member members[length]
    {
        {"Piotr", 14, "London"},
        {"Alexei", 23, "Amsterdam"},
        {"James", 67, "Washington"},
        {"Tessa", 16, "London"},
        {"Eliot", 20, "Washington"},
        {"Titus", 45, "Amsterdam"},
        {"Victor", 26, "London"},
        {"Mark", 21, "Kyiv"},
        {"Sophia", 22, "Kyiv"}
    };

    cout << "Enter city name:" << endl;
    cin >> cityName;

    for (int i = 0; i < length; i++)
    {
        Member currentMember = members[i];

        averageAge += currentMember.age;

        if (strcmp(currentMember.city, cityName) == 0)
        {
            cout << "Name: " << currentMember.name << " | ";
            cout << "Age: " << currentMember.age << " | " << endl;
        }
    }

    cout << "Average age: " << (averageAge / length) << endl;
    system("pause");
}
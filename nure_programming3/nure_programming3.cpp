#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");


 
    int apartment;

    cout << "Введіть номер квартири: ";
    if (!(cin >> apartment)) {
        cout << "Помилка! Ви ввели не номер квартири .\n";
        return 1;
    }

    string owner;

    // Власник
    switch (apartment) {
    case 1:  owner = "Єньшин";      break;
    case 2:  owner = "Петренко";    break;
    case 3:  owner = "Гольдінер";   break;
    case 4:  owner = "Ковальчук";   break;
    case 5:  owner = "Шевченко";    break;
    case 6:  owner = "Савченко";    break;
    case 7:  owner = "Мельник";     break;
    case 8:  owner = "Зоря";        break;
    case 9:  owner = "Борзенков";   break;
    case 10: owner = "Олійник";     break;
    default:
        cout << "Результат: Квартири з таким номером в домі немає!" << endl;
        return 0;
    }

    // Результат
    cout << "Результат: Власник квартири №" << apartment << " – " << owner << endl;

    return 0;
}

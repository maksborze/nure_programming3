#include <iostream>
#include <string>
using namespace std;
// Українська мова
#ifdef _WIN32
#include <windows.h>
#endif

int main()
{
    // Українська мова 
#ifdef _WIN32
    SetConsoleCP(1251);          // Ввід з консолі
    SetConsoleOutputCP(1251);    // Вивід у консоль
#endif

 
    int apartment;

    std::cout << "Введіть номер квартири: ";
    if (!(std::cin >> apartment)) {
        std::cout << "Помилка! Ви ввели не номер квартири .\n";
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
    case 6:  owner = "Савченко";       break;
    case 7:  owner = "Мельник";     break;
    case 8:  owner = "Зоря";    break;
    case 9:  owner = "Борзенков";   break;
    case 10: owner = "Олійник";     break;
    default:
        std::cout << "Результат: Квартири з таким номером в домі немає!" << std::endl;
        return 0;
    }

    // Результат
    std:cout << "Результат: Власник квартири №" << apartment << " – " << owner << std::endl;

    return 0;
}

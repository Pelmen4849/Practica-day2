﻿

#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    cout << "Выберите день недели" << endl;
    cout << "[1] Понедельник" << endl;
    cout << "[2] Вторник" << endl;
    cout << "[3] Среда" << endl;
    cout << "[4] Четверг" << endl;
    cout << "[5] Пятница" << endl;
    cout << "[6] Суббота" << endl;
    cout << "[7] Воскресенье" << endl;
    int vybor;
    cin >> vybor;
    if (vybor == 1) {
        cout << "9:00 - 10:30 Архитектура аппаратных средств" << endl;
        cout << "10:40 - 11:10 Вычислительная техника" << endl;
        cout << "11:30 - 13:00 Высшая математика" << endl;
        cout << "13:10 - 14:40 Базы данных" << endl;
    }
    else if (vybor == 2) {
        cout << "9:00 - 10:30 Разработка интерфейсной части базы данных" << endl;
        cout << "10:40 - 11:10 Архитектура аппаратных средств" << endl;
        cout << "11:30 - 13:00 Иностранный язык" << endl;
        cout << "13:10 - 14:40 Разработка программных модулей" << endl;
    }
    else if (vybor == 3) {
        cout << "9:00 - 10:30 Физическакя культура" << endl;
        cout << "10:40 - 11:10 Основы алгоритмизации" << endl;
        cout << "11:30 - 13:00 История" << endl;
        cout << "13:10 - 14:40 Системное программирование" << endl;
    }
    else if (vybor == 4) {
        cout << "9:00 - 10:30 Физическая культура" << endl;
        cout << "10:40 - 11:10 Системное программирование" << endl;
        cout << "11:30 - 13:00 История" << endl;
        cout << "13:10 - 14:40 Базы данных" << endl;
    }
    else if (vybor == 5) {
        cout << "9:00 - 10:30 Архитектура аппаратных средств" << endl;
        cout << "10:40 - 11:10 Иностранный язык" << endl;
        
        
    }
    else if (vybor == 6 || vybor == 7) {
        cout << "Выходной" << endl;
    }
    else {
        cout << "Ошибка! Выберите число от 1 до 7 включительно" << endl;
    }
}


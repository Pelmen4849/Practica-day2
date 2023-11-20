
#include <iostream>
using namespace std;
int main()
{
    setlocale(0, "");
    int mas[11];
    mas[0] = 0;
    mas[1] = 1;
    mas[2] = 2;
    mas[3] = 3;
    mas[4] = 4;
    mas[5] = 5;
    mas[6] = 6;
    mas[7] = 7;
    mas[8] = 8;
    mas[9] = 9;
    mas[10] = 10;
    int sum = 0;
    for (int i = 0; i <= 10; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
        else {
            // я хочу пельмени
        }
    }
    cout << "Сумма нечётных чисел равна: " << sum << endl;
}




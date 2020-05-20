#include <iostream> 
#include <cmath> 

using namespace std;
int main() {
    setlocale(LC_ALL, "RUS");

    int a, b;
    cout << "Введите два натуральных числа: \n";
    cin >> a >> b;

    while (a > 0 && b > 0) {
        if (a > b) {
            a %= b;
        }
        else {
            b %= a;
        }
    }
    cout << "Наибольший общий делитель: " << a + b <<"\n" ;
    system("pause");
}
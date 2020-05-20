#include <iostream> 
#include <cmath> 

using namespace std;
int main(){
    setlocale(LC_ALL, "RUS");

    double a, b, c, D, x1, x2; 

    cout << "Введите корни уравнения: \n"; 
    cin >> a >> b >> c;

    D = pow(b,2) - 4 * a * c; 
    if (D > 0) {
        x1 = ((-b) + sqrt(D)) / (2 * a);
        x2 = ((-b) - sqrt(D)) / (2 * a);
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    }
    if (D == 0){
        x1 = -(b / (2 * a));
        cout << "x1 = x2 = " << x1 << "\n";
    }
    if (D < 0) 
        cout << "D < 0, Действительных корней уравнения не существует\n";

    system("pause");
}
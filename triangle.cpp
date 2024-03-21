#include <iostream> 
#include <math.h>
using namespace std; 
int main() 
{ 
    setlocale(LC_ALL, "Russian"); 
 
    /// Периметр треугольника 
    cout << "Введите стороны треугольника:\n"; 
 
    cout << "Сторона А = "; 
    int sideA = 0; 
    cin >> sideA;// Ввод переменной 
 
    cout << "Сторона B = "; 
    int sideB = 0; 
    cin >> sideB;// Ввод переменной 
 
    cout << "Сторона C = "; 
    int sideC = 0; 
    cin >> sideC;// Ввод переменной 
 
    cout << "Периметр треугольника = " << sideA + sideB + sideC; 
 
    ///   площадь по формуле Герона 
 
     // по формуле SQRT(P*(P-A)*(P-B)*(P-C)) 
    float T = (sideA + sideB + sideC) / 2; 
    cout << "\nПлощадь по формуле Герона = " << (sqrt(T * (T - sideA) * (T - sideB) * (T - sideC))); 
   
    ///   Равнобедренный треугольник ли 
    // цикл с нахождением двух одинаковых переменных если есть одинаковые то true 
    if (sideA == sideC || sideB == sideC || sideA == sideB) 
    { 
 
        cout << "\nТреугольник равнобедренный"; 
    } 
    else { 
 
        cout << "\nТреугольник неравнобедренный "; //2213
    } 
 
}
#include <iostream>
#include <math.h>
using namespace std;


int main(){
    setlocale(LC_ALL, "ru");
    int ploshad;
    
    // Площадь прямоугольника
    cout << "Длина: " << endl;
    int numStornOne;
    cin >> numStornOne;
    cout << "Ширина: " << endl;
    int numStornTwo;
    cin >> numStornTwo;
    ploshad = numStornOne * numStornTwo;
    cout << "Площадь = " << ploshad << endl;
    
    // Пермиетр прямоугольника
    int perimetr;
    perimetr = 2 * (numStornOne + numStornTwo);
    cout << "Периметр = " << perimetr << endl;
    
    //  Диагональ прямоугольника
    double diagonal;
    diagonal = sqrt(numStornOne * numStornOne + numStornTwo * numStornTwo);
    cout << "Диагональ = " << diagonal << endl;
    return 0;
}
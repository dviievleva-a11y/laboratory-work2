#include <iostream>
using namespace std;

int main() 
{
    //Integer6
    int n;
    cout << "Введіть двозначне число: ";
    cin >> n;

    int tens = n / 10;    
    int ones = n % 10;    

    cout << "Ліва цифра (десятки): " << tens << endl;
    cout << "Права цифра (одиниці): " << ones << endl;

  
    //Integer38

    int N;
    cout << "Введіть кількість пасажирів: ";
    cin >> N;

    int fullBuses = N / 45;   
    int extraPassengers = N % 45; 

    cout << "Кількість повних автобусів: " << fullBuses << endl;
    cout << "Пасажирів у 'зайвому' автобусі: " << extraPassengers << endl;


     //Integer37

    double A, B, C;
    cout << "Введіть довжину прямокутника A: ";
    cin >> A;
    cout << "Введіть ширину прямокутника B: ";
    cin >> B;
    cout << "Введіть сторону квадратної плитки C: ";
    cin >> C;

    int nA = A / C; 
    int nB = B / C; 
    int N = nA * nB; 

    double S1 = A * B;          
    double S2 = N * (C * C);    
    double S_empty = S1 - S2;  

    cout << "Кількість плиток, що помістяться: " << N << endl;
    cout << "Незаповнена площа: " << S_empty << endl;

    return 0;
}


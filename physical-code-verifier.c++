#include <iostream>
using namespace std;
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int fullNumber, sum1, sum2, dig1, dig2;
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    int firstMult1, firstMult2, firstMult3, firstMult4, firstMult5, firstMult6, firstMult7, firstMult8, firstMult9;
    int secondMult1, secondMult2, secondMult3, secondMult4, secondMult5, secondMult6, secondMult7, secondMult8, secondMult9, secondMult10;

    cout << "Digite um número de 9 dígitos: ";
    cin >> fullNumber;

    num9 = fullNumber % 10;
    firstMult9 = num9 * 2;
    fullNumber /= 10;

    num8 = fullNumber % 10;
    firstMult8 = num8 * 3;
    fullNumber /= 10;

    num7 = fullNumber % 10;
    firstMult7 = num7 * 4;
    fullNumber /= 10;

    num6 = fullNumber % 10;
    firstMult6 = num6 * 5;
    fullNumber /= 10;

    num5 = fullNumber % 10;
    firstMult5 = num5 * 6;
    fullNumber /= 10;

    num4 = fullNumber % 10;
    firstMult4 = num4 * 7;
    fullNumber /= 10;

    num3 = fullNumber % 10;
    firstMult3 = num3 * 8;
    fullNumber /= 10;

    num2 = fullNumber % 10;
    firstMult2 = num2 * 9;
    fullNumber /= 10;

    num1 = fullNumber;
    firstMult1 = num1 * 10;

    sum1 = firstMult1 + firstMult2 + firstMult3 + firstMult4 + firstMult5 + firstMult6 + firstMult7 + firstMult8 + firstMult9;

    dig1 = sum1 % 11;
    
    if(dig1 < 2) {
        dig1 = 0;
    } else {
        dig1 = 11 - dig1;
    }

    secondMult10 = dig1 * 2; 
    secondMult9 = num9 * 3;
    secondMult8 = num8 * 4;
    secondMult7 = num7 * 5;
    secondMult6 = num6 * 6;
    secondMult5 = num5 * 7;
    secondMult4 = num4 * 8;
    secondMult3 = num3 * 9;
    secondMult2 = num2 * 10;
    secondMult1 = num1 * 11;

    sum2 = secondMult1 + secondMult2 + secondMult3 + secondMult4 + secondMult5 + secondMult6 + secondMult7 + secondMult8 + secondMult9 + secondMult10;

    dig2 = sum2 % 11;

    if(dig2 < 2) {
        dig1 = 0;
    } else {
        dig2 = 11 - dig2;
    }

    cout << num1 << num2 << num3 << "." << num4 << num5 << num6 << "." << num7 << num8 << num9 << "-" << dig1 << dig2;

    return 0;
}
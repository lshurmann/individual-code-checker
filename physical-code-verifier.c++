#include <iostream> // Biblioteca padrão para entrada e saída de dados.
using namespace std;
#include <locale.h> // Biblioteca para configurar o idioma.

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configura o idioma para português (acentos e caracteres).

    // Declaração das variáveis.
    int fullNumber, sum1, sum2, dig1, dig2;
    int num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
    int firstMult1, firstMult2, firstMult3, firstMult4, firstMult5, firstMult6, firstMult7, firstMult8, firstMult9;
    int secondMult1, secondMult2, secondMult3, secondMult4, secondMult5, secondMult6, secondMult7, secondMult8, secondMult9, secondMult10;

    // Entrada de dados dos 9 dígitos
    cout << "Digite um número de 9 dígitos: ";
    cin >> fullNumber;

    // Separação dos 9 dígitos do número digitado e cálculo das multiplicações do primeiro dígito verificador.

    // Pega o último número (9º) e multiplica por 2.
    num9 = fullNumber % 10;
    firstMult9 = num9 * 2;
    fullNumber /= 10; // Remove o último dígito.

    // Pega o 8º número e multiplica por 3.
    num8 = fullNumber % 10;
    firstMult8 = num8 * 3;
    fullNumber /= 10; // Remove o último dígito.
    
    // Pega o 7º número e multiplica por 4.
    num7 = fullNumber % 10;
    firstMult7 = num7 * 4;
    fullNumber /= 10; // Remove o último dígito.

    // Pega o 6º número e multiplica por 5.
    num6 = fullNumber % 10;
    firstMult6 = num6 * 5;
    fullNumber /= 10; // Remove o último dígito.

    // Pega o 5º número e multiplica por 6.
    num5 = fullNumber % 10;
    firstMult5 = num5 * 6;
    fullNumber /= 10; // Remove o último dígito.

    // Pega o 4º número e multiplica por 7.
    num4 = fullNumber % 10;
    firstMult4 = num4 * 7;
    fullNumber /= 10; // Remove o último dígito.

    // Pega o 3º número e multiplica por 8.
    num3 = fullNumber % 10;
    firstMult3 = num3 * 8;
    fullNumber /= 10; // Remove o último dígito.

    // Pega o 2º número e multiplica por 9.
    num2 = fullNumber % 10;
    firstMult2 = num2 * 9;
    fullNumber /= 10; // Remove o último dígito.

    // Pega o 1º número e multiplica por 10.
    num1 = fullNumber;
    firstMult1 = num1 * 10;

    // Soma total das multiplicações do primeiro dígito verificador.
    sum1 = firstMult1 + firstMult2 + firstMult3 + firstMult4 + firstMult5 + firstMult6 + firstMult7 + firstMult8 + firstMult9;

    // Cálculo do primeiro dígito verificador.
    dig1 = sum1 % 11;
    
    // Regra do CPF: se o resto for menor que 2, o dígito é 0, senão é 11 menos o resto.
    if(dig1 < 2) {
        dig1 = 0;
    } else {
        dig1 = 11 - dig1;
    }

    // Multiplicando os 9 números mais o primeiro dígito encontrado, por valores de 11 a 2.
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

    // Soma total das multiplicações do segundo dígito verificador.
    sum2 = secondMult1 + secondMult2 + secondMult3 + secondMult4 + secondMult5 + secondMult6 + secondMult7 + secondMult8 + secondMult9 + secondMult10;

    // Cálculo do segundo dígito verificador.
    dig2 = sum2 % 11;

    // Regra do CPF novamente.
    if(dig2 < 2) {
        dig2 = 0;
    } else {
        dig2 = 11 - dig2;
    }

    // Saída dos números formatados no padrão de CPF: xxx.xxx.xxx-xx.
    cout << num1 << num2 << num3 << "." << num4 << num5 << num6 << "." << num7 << num8 << num9 << "-" << dig1 << dig2;

    return 0; // Fim do programa.
}
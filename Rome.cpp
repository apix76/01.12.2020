#include <iostream>
#include <string>

int main()
{
    setlocale(LC_ALL, "rus");

    std::string str = "";
    int n;
    std::cout << "Введите число арабскими цифрами: ";
    std::cin >> n;
    int a = n;
    int M = a / 1000;
    a %= 1000;
    int D = a / 500;
    a %= 500;
    int C = a / 100;
    a %= 100;
    int L = a / 50;
    a %= 50;
    int X = a / 10;
    a %= 10;
    int V = a / 5;
    a %= 5;
    int I = a;
    for (int i = 0; i < M; ++i) {
        str += "M";
    }
    if ((D == 1) && (C == 4)) {
        str += "CM";
    }
    else {
        for (int i = 0; i < D; ++i) {
            str += "D";
        }
    }
    if ((D == 1) && (C == 4)) {
        C = 0;
    }
    else if (C == 4) {
        str += "CD";
    }
    else {
        for (int i = 0; i < C; ++i) {
            str += "C";
        }
    }
    if ((L == 1) && (X == 4)) {
        str += "XC";
    }
    else {
        for (int i = 0; i < L; ++i) {
            str += "L";
        }
    }
    if ((L == 1) && (X == 4)) {
        X = 0;
    }
    else if (X == 4) {
        str += "XL";
    }
    else {
        for (int i = 0; i < X; ++i) {
            str += "X";
        }
    }
    if ((V == 1) && (I == 4)) {
        str += "IX";
    }
    else {
        for (int i = 0; i < V; ++i) {
            str += "V";
        }
    }
    if ((V == 1) && (I == 4)) {
        I = 0;
    }
    else if (I == 4) {
        str += "IV";
    }
    else {
        for (int i = 0; i < I; ++i) {
            str += "I";
        }
    }
    std::cout << "Число римскими цифрами: " << str;
}

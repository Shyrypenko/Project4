#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {

    double str;
    cin >> str;
    cout << "Введите строку: ";

    int occupied = str;
    int free = occupied - 1;

    cout << "Занято: " << occupied;
    cout << "Свободно: " << free;
    //1

    string str;
    int m, n;

    cout << "Введите строку: ";
    double str = 0.0;

    cout << "(m) : ";
    cin >> m;
    cout << "(n) : ";
    cin >> n;

    if (m < 0 || n >= str.length() || m > n) {
        cout << "Ошибка";
        return 1;
    }

    string subStr = str.substr(m, n - m + 1);
    cout << "Подстрока с " << m << " по " << n << " символ: " << subStr;
    //2

    int m, n;
    cout << "Введите строку: ";
    getline(cin, str);

    cout << "m : ";
    cin >> m;
    cout << "n: ";
    cin >> n;

    if (m < 0 || n >= str.length() || m > n) {
        cout << "Oшибка";
        return 1;
    }

    string subStr = str.substr(m, n - m + 1);
    cout << "Подстрока с " << m << " по " << n << " символ: " << subStr;
    return 0;
}
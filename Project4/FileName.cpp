#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {

    double str;
    cin >> str;
    cout << "������� ������: ";

    int occupied = str;
    int free = occupied - 1;

    cout << "������: " << occupied;
    cout << "��������: " << free;
    //1

    string str;
    int m, n;

    cout << "������� ������: ";
    double str = 0.0;

    cout << "(m) : ";
    cin >> m;
    cout << "(n) : ";
    cin >> n;

    if (m < 0 || n >= str.length() || m > n) {
        cout << "������";
        return 1;
    }

    string subStr = str.substr(m, n - m + 1);
    cout << "��������� � " << m << " �� " << n << " ������: " << subStr;
    //2

    int m, n;
    cout << "������� ������: ";
    getline(cin, str);

    cout << "m : ";
    cin >> m;
    cout << "n: ";
    cin >> n;

    if (m < 0 || n >= str.length() || m > n) {
        cout << "O�����";
        return 1;
    }

    string subStr = str.substr(m, n - m + 1);
    cout << "��������� � " << m << " �� " << n << " ������: " << subStr;
    return 0;
}
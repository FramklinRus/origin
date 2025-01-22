#include <iostream>
using namespace std;

enum class Month {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

Month get_month(int M) {
    if (M >= 1 && M <= 12) {
        return static_cast<Month>(M);
    }
    return Month::January; 
}

int main() {
    setlocale(LC_ALL, "Russian");

    int x = -1; 

    while (x != 0) {
        cout << "Введите номер месяца: ";
        cin >> x;

        if (x == 0) {
            cout << "До свидания" << endl;
            break;
        }

        if (x < 1 || x > 12) {
            cout << "Ошибка: такого месяца не существует!" << endl;
            continue;
        }

        switch (get_month(x)) {
        case Month::January: cout << "Январь" << endl; break;
        case Month::February: cout << "Февраль" << endl; break;
        case Month::March: cout << "Март" << endl; break;
        case Month::April: cout << "Апрель" << endl; break;
        case Month::May: cout << "Май" << endl; break;
        case Month::June: cout << "Июнь" << endl; break;
        case Month::July: cout << "Июль" << endl; break;
        case Month::August: cout << "Август" << endl; break;
        case Month::September: cout << "Сентябрь" << endl; break;
        case Month::October: cout << "Октябрь" << endl; break;
        case Month::November: cout << "Ноябрь" << endl; break;
        case Month::December: cout << "Декабрь" << endl; break;
        default: cout << "Ошибка!" << endl; break;
        }
    }

    return 0;
}
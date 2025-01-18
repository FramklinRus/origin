// zadanie_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

enum class Month
{
    январь=1,
    февраль,
    март,
    апрель,
    май,
    июнь,
    июль,
    август,
    сентябрь,
    октябрь,
    ноябрь,
    декабрь,
    ошибка

};
Month get_month(int M)
{
    
    if (M == 1)
    {
        return Month::январь;
    }
    else   if (M == 2)
    {
        return Month::февраль;
    }
    else    if (M == 3)
    {
        return Month::март;
    }
    else  if (M == 4)
    {
        return Month::апрель;
    }
    else   if (M == 5)
    {
        return Month::май;
    }
    else  if (M == 6)
    {
        return Month::июнь;
    }
    else   if (M == 7)
    {
        return Month::июль;
    }
    else if (M == 8)
    {
        return Month::август;
    }
    else  if (M == 9)
    {
        return Month::сентябрь;
    }
    else if (M == 10)
    {
        return Month::октябрь;
    }
    else if (M == 11)
    {
        return Month::ноябрь;
    }
    else if (M == 12)
    {
        return Month::декабрь;
    }
    else 
    {
        return Month::ошибка;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int x=1;
while (x != 0)
    {
        cout << "Введите номер месяца:";
        cin >> x;


        switch (get_month(x))
        {
        case Month::январь: cout << "Январь" << endl;break;
        case Month::февраль: cout << "февраль" << endl;break;
        case Month::март: cout << "март" << endl;break;
        case Month::апрель: cout << "апрель" << endl;break;
        case Month::май: cout << "май" << endl;break;
        case Month::июнь: cout << "июнь" << endl;break;
        case Month::июль: cout << "июль" << endl;break;
        case Month::август: cout << "август" << endl;break;
        case Month::сентябрь: cout << "сентябрь" << endl;break;
        case Month::октябрь: cout << "октябрь" << endl;break;
        case Month::ноябрь: cout << "ноябрь" << endl;break;
        case Month::декабрь: cout << "декабрь" << endl;break;
        case Month::ошибка: cout << "ошибка" << endl;break;


        }
    

}
    
    
        cout << "До свидания" << endl;
    
    
}

#include <iostream>
using namespace std;

struct Address {
    string city;
    string street;
    int houseNumber;
    int apartment;
    int zipCode;
};
void print(Address* p)
{
    cout << "Город: " << p->city << endl;
    cout << "Улица: " << p->street << endl;
    cout << "Номер дома: " << p->houseNumber << endl;
    cout << "Номер квартиры: " << p->apartment << endl;
    cout << "Индекс: " << p->zipCode << endl;

}


int main()
{
    setlocale(LC_ALL, "Russian");
    Address address1 = { "Москва", "Арбат", 12, 8, 123456 };
    Address address2 = { "Ижевск", "Пушкина", 59, 143, 953769 };
    print(&address1);
    cout << " "  << endl;
    print(&address2);

}
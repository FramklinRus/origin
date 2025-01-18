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
    cout << "Город: " << addr->city << endl;
    cout << "Улица: " << addr->street << endl;
    cout << "Номер дома: " << addr->houseNumber << endl;
    cout << "Номер квартиры: " << addr->apartment << endl;
    cout << "Индекс: " << addr->zipCode << endl;

}


int main()
{
    setlocale(LC_ALL, "Russian");
    Address address1 = { "Москва", "Арбат", 12, 8, 123456 };
    Address address2 = { "Ижевск", "Пушкина", 59, 143, 953769 };
    print(address1);
    print(address2);

}
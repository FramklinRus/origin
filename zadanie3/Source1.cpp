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
    cout << "�����: " << addr->city << endl;
    cout << "�����: " << addr->street << endl;
    cout << "����� ����: " << addr->houseNumber << endl;
    cout << "����� ��������: " << addr->apartment << endl;
    cout << "������: " << addr->zipCode << endl;

}


int main()
{
    setlocale(LC_ALL, "Russian");
    Address address1 = { "������", "�����", 12, 8, 123456 };
    Address address2 = { "������", "�������", 59, 143, 953769 };
    print(address1);
    print(address2);

}
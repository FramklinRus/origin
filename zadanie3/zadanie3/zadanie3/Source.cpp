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
    cout << "�����: " << p->city << endl;
    cout << "�����: " << p->street << endl;
    cout << "����� ����: " << p->houseNumber << endl;
    cout << "����� ��������: " << p->apartment << endl;
    cout << "������: " << p->zipCode << endl;

}


int main()
{
    setlocale(LC_ALL, "Russian");
    Address address1 = { "������", "�����", 12, 8, 123456 };
    Address address2 = { "������", "�������", 59, 143, 953769 };
    print(&address1);
    cout << " "  << endl;
    print(&address2);

}
#include <iostream>
using namespace std;

struct Bank
{
    int number;
    string name;
    float money;

};
void change_money(Bank* p, float x)
{
    p->money =  x;

}


int main()
{
    setlocale(LC_ALL, "Russian");
    int x;
    string m;
    float y;

    Bank human;
    cout << "������� ����� �����:";
    cin >> x;
    human.number = x;
    cout << "������� ���:";
    cin >> m;
    cout << "������� ������:";
    human.name = m;
    cin >> y;
    human.money = y;
    cout << "��� ����: " << human.number << ", " << human.name << ", " << human.money << endl;
    cout << "������� ����� ������:";
    cin >> y;
    change_money(&human, y);
    cout << "��� ����� ����: " << human.number << ", " << human.name << ", " << human.money << endl;

}
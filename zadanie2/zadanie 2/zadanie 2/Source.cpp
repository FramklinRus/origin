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
    cout << "¬ведите номер счета:";
    cin >> x;
    human.number = x;
    cout << "¬ведите им€:";
    cin >> m;
    cout << "¬ведите баланс:";
    human.name = m;
    cin >> y;
    human.money = y;
    cout << "¬аш счет: " << human.number << ", " << human.name << ", " << human.money << endl;
    cout << "¬ведите новый баланс:";
    cin >> y;
    change_money(&human, y);
    cout << "¬аш новый счет: " << human.number << ", " << human.name << ", " << human.money << endl;

}
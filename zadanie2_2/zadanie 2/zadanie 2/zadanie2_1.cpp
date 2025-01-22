#include <iostream>
#include <string>
#include <locale>
using namespace std;

class Counter{
private:
	int num;
public: 
	Counter(int init=1) : num(init) {}
	void add()
	{
	num ++;
	}
	void div()
	{
		num --;
	}

	int get_value() 
	{
		return num;
	}
};

int main ()
{
	setlocale(LC_ALL, "Russian");

	Counter count;
	string b;
	char a='a';
	int z;
	cout << "Вы хотите указать начальное значение счётчика? Введите yes или no:";
		cin >> b;
		if (b == "yes")
		{
			cout << "Введите начальное значение счётчика:";
			cin >> z;
			count=Counter(z);
	    }
		while (a != 'x')
		{
			std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
			cin >> a;
			if (a == '+')
			{
				count.add();

			}
			else if (a == '-')
			{
				count.div();
			}
			else if (a == '=')
			{
				cout << count.get_value() << endl;
			}
			
		}
		
		

}
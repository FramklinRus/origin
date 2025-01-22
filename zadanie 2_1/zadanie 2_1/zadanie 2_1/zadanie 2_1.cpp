// zadanie 2_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
class Calculator

{
private:
    double num1, num2;
public:
    Calculator():num1(0),num2(0){}
    double add()
    {
     
        return num1 + num2;
    }
    double subtract_1_2()
    {
       
        return num1 - num2;
    }
    double subtract_2_1()
    {
        
        return num2 - num1;
    }
    double multiply()
    {

       
        return num2 * num1;
    }
    double divide_1_2()
    {
      
        return num1 / num2;
    }
    double divide_2_1()
    {
        
        return num2 / num1;
    }
    bool set_num1(double n) {
        if (n != 0) {
            num1 = n;
            return true;
        }
        return false;
    }
    bool set_num2(double n) {
        if (n != 0) {
            num2 = n;
            return true;
        }
        return false;
    }


};


int main()
{
    Calculator calc;
    double n1, n2;

    while (true)
    {
        cout << "Введите первое число: ";
        cin >> n1;
        if (!calc.set_num1(n1))
        {
            cout << "Первое число не должно быть равно 0. Попробуйте снова.\n";
            continue;
        }
        cout << "Введите второе число: ";
        cin >> n2;
        if (!calc.set_num2(n2))
        {
            cout << "Второе число не должно быть равно 0. Попробуйте снова.\n";
            continue;
        }
    
        cout << "num1 + num2 = " << calc.add() << endl;
       
        cout << "num1 - num2 = " << calc.subtract_1_2() << endl;
    
        cout << "num2 - num1 = " << calc.subtract_2_1() << endl;
    
        cout << "num1 * num2 = " << calc.multiply() << endl;
      
        cout << "num1 / num2 = " << calc.divide_1_2() << endl;
       
        cout << "num2 / num1 = " << calc.divide_2_1() << endl;
  
    
    
    }

  

}


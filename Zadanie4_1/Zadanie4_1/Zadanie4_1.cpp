#include <iostream>
#include <fstream>
#include <string>
#include <locale>

using namespace std;
class Figure
{
protected:
    string Name;
    int Number_side;
public:
     
    Figure(string Name, int Number_side): Name(Name), Number_side(Number_side) {}
    Figure() {
        Name = "Figure";
        Number_side = 0;
    }
    void get_sides_count()
    {

        cout << Name << " : " << Number_side<<endl;
   }
};

class Triangle :public Figure
{
public:
    Triangle() : Figure("Triangle", 3){}
    

};
class Quadrilateral :public Figure
{
public:
    Quadrilateral() : Figure("Quadrilateral", 4) {}
    

};


int main()
{
    locale::global(locale(""));
    Figure f;
    Triangle t;
    Quadrilateral q;
    cout << "Количество сторон:" << endl;
    f.get_sides_count();
    t.get_sides_count();
    q.get_sides_count();

}



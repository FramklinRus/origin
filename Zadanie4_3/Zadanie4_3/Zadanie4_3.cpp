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

    Figure(string Name, int Number_side) : Name(Name), Number_side(Number_side) {}
    Figure() {}
  
    virtual bool check()
    {
        if (Number_side != 0)
        {
            return false;

        }
        else
        {
            return true;
        }
    }
    virtual void Print_Info()
    {

        cout << Name << endl;
        cout <<boolalpha<< check() << endl;
        cout << "Количество сторон: " << Number_side << endl;
        cout << endl;

    }

};

class Triangle :public Figure
{
protected:
    int a, b, c;
    int A, B, C;
public:

    Triangle(int a, int b, int c, int A, int B, int C) :Figure("Triangle", 3), a(a), b(b), c(c), A(A), B(B), C(C) {}
    Triangle() {}
    void Print_Info() {

        cout << Name << endl;
        cout << boolalpha << check() << endl;
        cout << "Количество сторон: " << Number_side << endl;
        cout << "Стороноы: " << "a=" << a << " " << "b=" << b << " " << "c=" << c << " " << endl;

        cout << "Углы: " << "A=" << A << " " << "B=" << B << " " << "C=" << C << " " << endl;
        cout << endl;
    }
    bool check()
    {
        if (Number_side == 3 && (A + B + C) == 180)
        {
            return 1;

        }
        else
        {
            return 0;
        }
    }
};
class PryamTriangle :public Triangle
{
public:
    PryamTriangle( int a, int b, int c, int A, int B, int C) : Triangle( a, b, c, A, B,C) {
        Name = "PryamTriangle";
    }
    bool check()
    {
        if (Triangle::check() == 1 && C == 90)
        {

            return 1;
        }
        else
        {
            return 0;
        }
  
    }



};
class RavnBTriangle :public Triangle
{
public:
    RavnBTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) { Name = "RavnBTriangle"; }
    bool check()
    {
        if (Triangle::check() == 1 && a == c && A==C)
        {

            return 1;
        }
        else
        {
            return 0;
        }

    }
};
class RavnSTriangle :public Triangle
{
public:
    RavnSTriangle( int a, int b, int c, int A, int B, int C) : Triangle( a, b, c, A, B, C) {

        Name = "RavnSTriangle";

    }
    bool check()
    {
        if (Triangle::check() == 1 && a == b==c && A==B==C)
        {

            return 1;
        }
        else
        {
            return 0;
        }

    }


};


class Quadrilateral :public Figure
{
protected:
    int a, b, c, d;
    int A, B, C, D;
public:

    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) :Figure("Quadrilateral", 4), a(a), b(b), c(c), d(d), A(A), B(B), C(C), D(D) {}
    Quadrilateral() {}


    void Print_Info() {

        cout << Name << endl;
        cout << boolalpha << check() << endl;
        cout << "Стороноы: " << "a=" << a << " " << "b=" << b << " " << "c=" << c << " " << "d=" << d << endl;

        cout << "Углы: " << "A=" << A << " " << "B=" << B << " " << "C=" << C << " " << "D=" << D << endl;
        cout << endl;
    }
    bool check()
    {
        if (Number_side == 4 && (A + B + C+ D) == 360)
        {
            return 1;

        }
        else
        {
            return 0;
        }
    }


};
class Pryamougolnik :public Quadrilateral
{
public:
    Pryamougolnik(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {

        Name = "Pryamougolnik";
    }
    bool check()
    {
        if (Quadrilateral::check() == 1 && a == c && b==d && A ==90 && B ==90 && C ==90 && D == 90)
        {

            return 1;
        }
        else
        {
            return 0;
        }

    }
};
class Kvadrat :public Quadrilateral
{
public:
    Kvadrat(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {


        Name = "Kvadrat";

    }
    bool check()
    {
        if (Quadrilateral::check() == 1 && a == b && b == c &&c == d && A ==90 && B ==90 && C ==90 && D == 90)
        {

            return 1;
        }
        else
        {
            return 0;
        }

    }
};
class Paralel :public Quadrilateral
{
public:
    Paralel(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
        Name = "Paralel";
    }
    bool check()
    {
        if (Quadrilateral::check() == 1 && a == c && b == d && A==C && B==D)
        {

            return 1;
        }
        else
        {
            return 0;
        }

    }



};
class Romb :public Quadrilateral
{
public:
    Romb(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrilateral(a, b, c, d, A, B, C, D) {
        Name = "Romb";
    }
    bool check()
    {
        if (Quadrilateral::check() == 1 && a == c &&c == b && b== d && A == C && B == D)
        {

            return 1;
        }
        else
        {
            return 0;
        }

    }
};
void Print_Info(Figure* figure) {
    figure->Print_Info();
}

int main()
{
    locale::global(locale(""));
    Figure a("Figure", 0);
    Triangle t( 10, 20, 30, 50, 60, 70);
    Quadrilateral q(10, 20, 30, 40, 50, 60, 70, 80);
    
    PryamTriangle p(10,20,30,50,40,90),z(10,20,10,50,60,90);
    RavnBTriangle b(10,20,10,50,60,50);
  
    Pryamougolnik u(10,20,10,20,90,90,90,90);
    Kvadrat k(20,20,20,20,90,90,90,90);
    Paralel l(20,30,20,30,30,40,30,40);
  Romb r(30,30,30,30,30,40,30,40);
    Print_Info(&a);
    Print_Info(&t);
    Print_Info(&z);
    Print_Info(&p);
    Print_Info(&b);
    Print_Info(&q);
    Print_Info(&u);
    Print_Info(&k);
    Print_Info(&l);
    Print_Info(&r);



}





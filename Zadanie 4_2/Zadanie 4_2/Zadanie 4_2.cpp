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
    Figure() {
        Name = "Figure";
        Number_side = 0;
    }
    virtual void Print_Info()
    {

        cout << Name << " : " << Number_side << endl;
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
        
        cout << "Стороноы: " << "a=" << a << " " << "b=" << b << " " << "c=" << c << " " << endl;
        
        cout << "Углы: " << "A=" << A << " " << "B=" << B << " " << "C=" << C << " " << endl;   
        cout << endl;
    }

};
class PryamTriangle :public Triangle
{
public:
    PryamTriangle() : Triangle(10,20,30,50,60,90){
        Name = "PryamTriangle";
    }
    
};
class RavnBTriangle :public Triangle
{
public:
    RavnBTriangle() : Triangle(10, 20, 10, 50, 60, 50) { Name = "RavnBTriangle"; }

};
class RavnSTriangle :public Triangle
{
public:
    RavnSTriangle() : Triangle(30, 30, 30, 60, 60, 60) {
       
            Name = "RavnSTriangle";
        
    }
    


};


class Quadrilateral :public Figure
{
protected:
    int a, b, c, d;
        int A, B, C, D;
public:
    
    Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D) :Figure("Quadrilateral", 4), a(a), b(b), c(c),d(d), A(A), B(B), C(C), D(D) {}
    Quadrilateral() {}
   
    
    void Print_Info() {

        cout << Name << endl;
        
        cout << "Стороноы: " << "a=" << a << " " << "b=" << b << " " << "c=" << c << " "<< "d=" << d << endl;
        
    cout << "Углы: " << "A=" << A << " " << "B=" << B << " " << "C=" << C << " "<< "D="<< D << endl;
    cout << endl;
    }
};
class Pryamougolnik :public Quadrilateral
{
public:
    Pryamougolnik() : Quadrilateral(10, 20, 10, 20, 90, 90,90,90) {
        
        Name = "Pryamougolnik";
    }

};
class Kvadrat :public Quadrilateral
{
public:
    Kvadrat() : Quadrilateral(20, 20, 20, 20, 90, 90, 90, 90) {
        
            
            Name = "Kvadrat";
       
    }

};
class Paralel :public Quadrilateral
{
public:
    Paralel() : Quadrilateral( 20, 30, 20, 30, 30, 40, 30, 40) {
        Name = "Paralel";
    }

};
class Romb :public Quadrilateral
{
public:
    Romb() : Quadrilateral(30, 30, 30, 30, 30, 40, 30, 40) {
        Name = "Romb";
    }

};
void Print_Info(Figure* figure) {
    figure->Print_Info();
}

int main()
{
    locale::global(locale(""));
    Figure a;
    Triangle t(10,20,30,50,60,70);
    Quadrilateral q(10,20,30,40,50,60,70,80);
    Romb r;
    PryamTriangle p;
    RavnBTriangle b;
    RavnSTriangle s;
    Pryamougolnik u;
    Kvadrat k;
    Paralel l;
    Print_Info(&t);
    Print_Info(&p);
    Print_Info(&b);
    Print_Info(&s);
    Print_Info(&q);
    Print_Info(&u);
    Print_Info(&k);
    Print_Info(&l);
    Print_Info(&r);
    

}





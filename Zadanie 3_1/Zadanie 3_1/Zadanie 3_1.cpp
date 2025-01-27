
#include <iostream>
#include <fstream>
#include <string>
#include <locale>
#include <codecvt>
using namespace std;
class Adresses
{
private:
    wstring city;
    wstring street;
    int house_number;
    int apartament;
public:
    Adresses(const wstring city, wstring street, int house_number, int apartament){
        this->city = city;
        this->street = street;
        this->house_number = house_number;
        this->apartament = apartament;
    }
 
    wstring get_output_address()
    {
        return city + L", " + street + L", " + std::to_wstring(house_number) + L", " + std::to_wstring(apartament);

    }



};


int main()
{
  
    std::locale::global(std::locale(""));
    std::wifstream file("data.txt");
    wofstream out("out.txt");
    file.imbue(std::locale(file.getloc(), new std::codecvt_utf8<wchar_t>));
    wifstream in("In.txt");
    in.imbue(std::locale(in.getloc(),
        new std::codecvt_utf8<wchar_t>)); // Кодировка UTF-8
  
    
    //все что вверху - нужно для того чтобы в коносли у меня были русский буквы.
    
    int x;
       
       in >> x;
       in.ignore();
      
       Adresses** adr = new Adresses * [x];
       for (int i = 0; i < x; ++i) {
           wstring city, street;
           int house, apartment;

           std::getline(in, city);
           std::getline(in, street);
           in >> house >> apartment;
           in.ignore(); 
           adr[i] = new Adresses(city, street, house, apartment);
       }
       out << x << endl;
       for (int i = 2; i >= 0; --i) {
          out<< adr[i]->get_output_address()<<endl;
       }
}


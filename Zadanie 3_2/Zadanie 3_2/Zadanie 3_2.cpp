
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
    Adresses() : city(L""), street(L""), house_number(0), apartament(0) {}
    Adresses(const std::wstring& city, const std::wstring& street, int house_number, int apartament)
        : city(city), street(street), house_number(house_number), apartament(apartament) {}

    const wstring getCity() const {
        return city;
    }
    wstring get_output_address()
    {
        return city + L", " + street + L", " + std::to_wstring(house_number) + L", " + std::to_wstring(apartament);

    }
  


};
void sort(Adresses* addresses, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (addresses[j].getCity() > addresses[j + 1].getCity()) {
                std::swap(addresses[j], addresses[j + 1]);
            }
        }
    }
}

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

    Adresses* adr = new Adresses  [x];
    for (int i = 0; i < x; ++i) {
        wstring city, street;
        int house, apartment;

        std::getline(in, city);
        std::getline(in, street);
        in >> house >> apartment;
        in.ignore();
        adr[i] =  Adresses(city, street, house, apartment);
    }
    
    out << x << endl;
    sort(adr, x);
    for (int i = 0; i < x; ++i) {
        out << adr[i].get_output_address() << endl;
    }
}


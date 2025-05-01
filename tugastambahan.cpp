#include <iostream>
using namespace std;

class Segitiga{
    private :
    int alas, tinggi, a, b, c;

    float hitungLuas()
    {
        return 0.5 * alas * tinggi;
    }

    float hitungKeliling()
    {
        return (a + b + c);
    }
        
    public :
    void inputDataLuas()
    {
        do
        {
            cout << "Masukkan alas segitiga (1 - 50) : ";
            cin >> alas;

            cout << "Masukkan tinggi segitiga (1 - 50 ): ";
            cin >> tinggi;

            if (alas < 1 || tinggi < 1 || alas > 50 || tinggi > 50)
            {
                cout << "Input tidak valid. Silahkan masukkan bilangan 1 - 50." << endl;
            }
            else if (alas% 2 != 0 || tinggi % 2 != 0)
            {
                cout << "Angka tersebut adalah bilangan ganjil, luas tidak dapat dihitung." << endl;
            }
            else
            {
                hitungLuas();
                break;
            }  

        } while (true);
        cout << endl;
        cout << endl;  
    }

    void inputDataKeliling()
    {
        do
        {
            cout << "Masukkan sisi a (1 - 50) : ";
            cin >> a;

            cout << "Masukkan sisi b (1 - 50 ): ";
            cin >> b;

            cout << "Masukkan sisi c (1 - 50) : ";
            cin >> c;

            if (a < 1 || b < 1 || c < 1 || a > 50 || b > 50 || c > 50)
            {
            cout << "Input tidak valid. Silahkan masukkan bilangan 1 - 50." << endl;
            }
            else if (a % 2 != 0 || b % 2 != 0 || c % 2 != 0)
            {
                cout << "Angka tersebut adalah bilangan ganjil. Keliling tidak dapat dihitung." << endl;
            }
            else
            {
                hitungKeliling();
                break;
            }  
        } while (true);
        cout << endl;
        cout << endl;  

    }

    void outputData(int pilihan)
    {
        if (pilihan == 1)
        {
            cout << "Luas segitiga : " << hitungLuas() << endl;
        }
        else if (pilihan == 2)
        {
            cout << "Keliling segitiga : " << hitungKeliling() << endl;
        }   
    }
};

int main(){
    Segitiga shape;

}
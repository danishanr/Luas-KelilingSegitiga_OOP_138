#include <iostream>
using namespace std;

class Segitiga{
    private :
    int alas, tinggi, a, b, c;

    float hitungLuas(){
        return 0.5 * alas * tinggi;
    }

    float hitungKeliling(){
        return (a + b + c);
    }

};
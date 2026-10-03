#include <iostream>
using namespace std;

int main(){
    float farenheit;
    cout << "masukkan suhu dalam bentuk farenheit :";
    cin >> farenheit;
    float celcius = (farenheit - 32.0f) * 5.0f / 9.0f;
    cout << "hasil konversi dari farenheit ke celcius : " << celcius << " derajat celcius";
    return 0;
}
#include <iostream>
using namespace std;
using std::cout;
using std::endl;
using std::string;

string Binario(int n)
{
    string r;
    while (n != 0){
        r += ( n % 2 == 0 ? "0" : "1" );
        n /= 2;
    }
    return r;
}

int main(){
    int numero=0;
cout<<"Ingresa un numero"<<endl;
cin>>numero;
    cout<<"Decimal: "<<numero<<endl;
    cout<<"Binario: "<<Binario(numero)<<endl;

    return 0;
}

#include <iostream>
using namespace std; 

int main(){
 int numero, numero2, unidades, decenas, centenas, resultado;
 
 cout<<"Ingrese un numero: "<<endl;
 cin>>numero;
 cout<<"Ingresa un segundo numero: "<<endl;
 cin>>numero2;
 resultado=numero*numero2;
 
 
cout<<"\n\n\n"<<endl;
cout<<"       "<<numero<<endl;
cout<<"     x "<<numero2<<endl;
cout<<"     "<<"--------"<<endl;

unidades=numero2%10;numero2/=10;
decenas=numero2%10;numero2/=10;
centenas=numero2%10;numero2/=10;


switch(unidades){
	
case 0: cout<<"       "<<0*numero<<endl; break;
case 1: cout<<"       "<<1*numero<<endl; break;
case 2: cout<<"       "<<2*numero<<endl; break;
case 3: cout<<"       "<<3*numero<<endl; break;
case 4: cout<<"       "<<4*numero<<endl; break;
case 5: cout<<"       "<<5*numero<<endl; break;
case 6: cout<<"       "<<6*numero<<endl; break;
case 7: cout<<"       "<<7*numero<<endl; break;
case 8: cout<<"       "<<8*numero<<endl; break;
case 9: cout<<"       "<<9*numero<<endl; break;}

 
 
switch(decenas){
 
case 0: cout<<"      "<<0*numero<<endl; break;
case 1: cout<<"      "<<1*numero<<endl; break;
case 2: cout<<"      "<<2*numero<<endl; break;
case 3: cout<<"      "<<3*numero<<endl; break;
case 4: cout<<"      "<<4*numero<<endl; break;
case 5: cout<<"      "<<5*numero<<endl; break;
case 6: cout<<"      "<<6*numero<<endl; break;
case 7: cout<<"      "<<7*numero<<endl; break;
case 8: cout<<"      "<<8*numero<<endl; break;
case 9: cout<<"      "<<9*numero<<endl; break; }
  
  
switch(centenas){

case 0: cout<<"   + "<<0*numero<<endl; break;
case 1: cout<<"   + "<<1*numero<<endl; break;
case 2: cout<<"   + "<<2*numero<<endl; break;
case 3: cout<<"   + "<<3*numero<<endl; break;
case 4: cout<<"   + "<<4*numero<<endl; break;
case 5: cout<<"   + "<<5*numero<<endl; break;
case 6: cout<<"   + "<<6*numero<<endl; break;
case 7: cout<<"   + "<<7*numero<<endl; break;
case 8: cout<<"   + "<<8*numero<<endl; break;
case 9: cout<<"   + "<<9*numero<<endl; break; }
  
  
  cout<<"    "<<"---------"<<endl;
  cout<<"     "<<resultado<<endl;
 
 system("pause");
 return 0;
}

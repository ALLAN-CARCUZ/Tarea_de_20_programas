#include <iostream>
using namespace std;
main(){

int inicio=0,fin=0,multiplicar=0;
cout<<"Ingrese Tabla Inicio:";
cin>>inicio;
cout<<"Ingrese Tabla Fin:";
cin>>fin;


for(int i=inicio;i<=fin;i++){
	
for(int ii=1;ii<=10;ii++){
	multiplicar = i * ii;
	cout<<i<< " X "<<ii<<" = "<<multiplicar<<endl;}
			
	cout<<endl;}
	
		system("pause");}

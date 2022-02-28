#include <iostream>
using namespace std;
main(){

char letra=0;
	cout<<"Presione 'a' para dibujar un cuadrado, 'b' para un rectangulo, 'c' para un circulo y 'd' para un triangulo: ";
	cin>>letra;
	switch(letra){
		case 'a' : 
		cout<<"\n \n \n \n"<<endl;
		cout<<"                 __________"<<endl;
		cout<<"                |          |"<<endl;
		cout<<"                |          |"<<endl;
		cout<<"                |          |"<<endl;
		cout<<"                |          |"<<endl;
		cout<<"                |__________|"<<endl;
		cout<<"\n \n \n \n"<<endl;
		break;
		case 'b' :
		cout<<"\n \n \n \n"<<endl;
		cout<<"               ______________________"<<endl;
		cout<<"              |                      |"<<endl;
		cout<<"              |                      |"<<endl;
		cout<<"              |                      |"<<endl;
		cout<<"              |                      |"<<endl;
		cout<<"              |______________________|"<<endl;
		cout<<"\n \n \n \n"<<endl;
		break;
		case 'c' :
		cout<<"\n \n \n \n"<<endl;
		cout<<"                 OOOO"<<endl;
		cout<<"               OOOOOOOO"<<endl;
		cout<<"              OOOOOOOOOO"<<endl;
		cout<<"               OOOOOOOO"<<endl;
		cout<<"                 OOOO"<<endl;
		cout<<"\n \n \n \n"<<endl;
		break;
		case 'd' : 
		cout<<"\n \n \n \n"<<endl;
		cout<<"                   /\'"<<endl;
		cout<<"                  /  \'"<<endl;
		cout<<"                 /    \'"<<endl;
		cout<<"                /      \'"<<endl;
		cout<<"               /        \'"<<endl;
		cout<<"              /__________\'"<<endl;
		cout<<"\n \n \n \n"<<endl;
		break;

	}
		system("pause");
}

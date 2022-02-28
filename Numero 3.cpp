#include <iostream>

using namespace std;

main(){
	char letra=0;
	int km=0, m=0, plg=0, lib=0;
	float mill=0, kg=0;

	cout<<"Cuantos kilometros desea convertir ";
	cin>>km;
	mill=km*0.62;
	m=km*1000;
	plg=km*39370;
	cout<<"En millas es: "<<mill<<" En metros es: "<<m<<" En pulgadas es: "<<plg<<endl;
	
	cout<<"\n Cuantas libras desea convertir ";
	cin>>lib;
	kg=lib*0.45;
	cout<<"Su cantidad en kilos es: "<<kg<<endl;
	
	system("pause");
}


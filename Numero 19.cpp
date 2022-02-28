#include <iostream>
using namespace std;

int main(){
	char hermano;
	int edad, edh;
	cout<<"Tienes un hermano? "<<endl;
	cin>>hermano;
	if(hermano=='n'){
	cout<<"Entonces eres hijo unico \n"<<endl;
	}if(hermano=='s'){cout<<"Cual es tu edad? "<<endl;
	cin>>edad;
	cout<<"Cual es la edad de tu hermano? "<<endl;
	cin>>edh;
	if(edad>edh){cout<<"\nEntonces eres mayor"<<endl;
	}else{cout<<"\nEntonces eres menor\n\n"<<endl;
	}
		
	}

	
	system("pause");
}

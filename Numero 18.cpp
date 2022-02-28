#include <iostream>
using namespace std;

int main(){
	char animal[10], vivir;
	cout<<"Ingresa un animal: ";
	cin>>animal;
	cout<<"El "<<animal<<" puede vivir en la casa si o no? ";
	cin>>vivir;
	
	if(vivir=='s'){cout<<"El "<<animal<<" es domestico\n\n";
	}else{
	cout<<"El "<<animal<<" es salvaje \n\n";	
	}
	
	system("pause");
}

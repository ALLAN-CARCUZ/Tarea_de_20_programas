#include<iostream>
using namespace std;
int main()
{
    float x;
    cout<<"ingrese un numero"<<endl;
    cin>>x;
if((x<0)||(x>999)) cout<<"ingresa un numero\n";
else{
if(x>=900)   {cout<<"Novecientos ";x=x-900;}
    else if(x>=800){cout<<"Ochocientos ";x=x-800;}
    else if(x>=700){cout<<"Setecientos ";x=x-700;}
    else if(x>=600){cout<<"Seiscientos ";x=x-600;}
    else if(x>=500){cout<<"Quinientos ";x=x-500;}
    else if(x>=400){cout<<"Cuatrocientos ";x=x-400;}
    else if(x>=300){cout<<"Trescientos ";x=x-300;}
    else if(x>=200){cout<<"Doscientos ";x=x-200;}
    else if(x>100){cout<<"Ciento ";x=x-100;}
    else if(x==100){cout<<"Cien";x=x-100;}
if(x>90) {cout<<"Noventa Y ";x=x-90;}
	if(x==90){cout<<"Noventa";x=x-90;}  
    if(x>80){cout<<"Ochenta Y ";x=x-80;}
    if(x==80){cout<<"Ochenta";x=x-80;}
    if(x>70){cout<<"Setenta Y ";x=x-70;}
    if(x==70){cout<<"Setenta";x=x-70;}
    if(x>60){cout<<"Sesenta Y ";x=x-60;}
    if(x==60){cout<<"Sesenta";x=x-60;}
    if(x>50){cout<<"Cincuenta Y ";x=x-50;}
    if(x==50){cout<<"Cincuenta";x=x-50;}
    if(x>40){cout<<"Cuarenta Y ";x=x-40;}
    if(x==40){cout<<"Cuarenta";x=x-40;}
    if(x>30){cout<<"Treinta Y ";x=x-30;}
    if(x==30){cout<<"Treinta";x=x-30;}
    if(x>20){cout<<"Veinti";x=x-20;}
    if(x==20){cout<<"Veinte";x=x-20;}
    if(x>=16){cout<<"Dieci";x=x-10;}
    else if(x==15){cout<<"Quince";x=x-15;}
    else if(x==14){cout<<"Catorce";x=x-14;}
    else if(x==13){cout<<"Trece";x=x-13;} 
    else if(x==12){cout<<"Doce";x=x-12;}
    else if(x==11){cout<<"Once";x=x-11;}
    else if(x==10){cout<<"Diez";x=x-10;}      
    if(x==9){cout<<"nueve";x=x-9;}
    if(x==8){cout<<"ocho";x=x-8;}
    if(x==7){cout<<"siete";x=x-7;}
    if(x==6){cout<<"seis";x=x-6;}
    else if(x==5){cout<<"cinco";x=x-5;}
    else if(x==4){cout<<"cuatro";x=x-4;}
    else if(x==3){cout<<"tres";x=x-3;}
    else if(x==2){cout<<"dos";x=x-2;}
    else if(x==1){cout<<"uno";x=x-1;}
    cout<<" "<<endl;
	x=x*100;
	if(x>90){cout<<"Punto Noventa Y ";x=x-90;}
	else if(x==90){cout<<"Punto Nueve";x=x-90;}

	
	
	
	}
    cout<<endl;
cin.ignore();return 0;
}

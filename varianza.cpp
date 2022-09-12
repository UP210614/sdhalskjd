#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main(){
	float n, va = 0, prom = 0, suma = 0, s = 0, dv = 0;
	
	cout<<"Ingrese su numero de datos: ";cin>>n;
	
	float datos[100];
	
	for(int i = 0; i < n; i++){
		
		cout<<"Ingrese sus datos: ";cin>>datos[i];
        cout<<endl;
	}


	for (int i = 0; i < n; i++)
	{
		s = s + datos[i];
	}
	
	prom = s/n;
	for (int i = 0; i < n; i++)
	{
		 suma = suma + (pow((datos[i] - prom),2));
		 
	}
	
	
	va = suma/(n-1);
	dv = sqrt(va);
	
	cout<<"\nSu varianza es: "<<va;
	cout<<"\nDesviación estándar: "<<dv;
	cout<<"\n"<<prom;
	
	

	
	
	getch();
	return 0;
}

#include "Persona.cpp"
#include<iostream>
using namespace std;
class Empleado : Persona{
	// atributos
	private  : string cod_empl, puesto;
	
	
	// construcor
	public : 
	Empleado(){
	}
	Empleado(string nom,string ape,string dir,int t,string f,string cod, string pue) : Persona(nom,ape,dir,t,f){
		cod_empl = cod;
		puesto = pue;
	}
	
	// metodos
	void agregar(){
		cout<<"______"<<endl;
		cout<<"Codigo de Empleado: "<<cod_empl<<endl;
		cout<<"Puesto: "<<puesto<<endl;
		cout<<"Nombres: "<<nombres<<endl;
		cout<<"Apellidos: "<<apellidos<<endl;
		cout<<"Direccion: "<<direccion<<endl;
		cout<<"Telefono: "<<telefono<<endl;
		cout<<"Fecha Nacimiento: "<<fn<<endl;
	}
	
};

#include "Empleado.cpp"
#include<iostream>
using namespace std;
main(){

string e_cod,e_puesto,e_nombres,e_apellidos,e_direccion,e_fn;
	int e_telefono;
	cout<<"Ingrese Codigo de Empleado: ";
	cin>>e_cod;
	cout<<"Ingrese Puesto: ";
	cin>>e_puesto;
	cout<<"Ingrese Nombres: ";
	cin>>e_nombres;
	cout<<"Ingrese Apellidos:";
	cin>>e_apellidos;
	cout<<"Ingrese Direccion:";
	cin>>e_direccion;
	cout<<"Ingrese Telefono:";
	cin>>e_telefono;
	cout<<"Ingrese Fecha Nacimiento:";
	cin>>e_fn;
	
	
	Empleado obj_c = Empleado(e_nombres,e_apellidos,e_direccion,e_telefono,e_fn,e_cod,e_puesto);
	obj_c.agregar();

}

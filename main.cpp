#include "Empleado.cpp"
#include <iostream>
using namespace std;
main(){
	string nit,nombre,apellido,direccion,puesto;
	int telefono,codigo_empleado,sueldo;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombre: ";
	cin>>nombre;
	cout<<"Ingrese Apellido: ";
	cin>>apellido;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese Codigo_empleado: ";
	cin>>codigo_empleado;
	cout<<"Ingrese Sueldo: ";
	cin>>sueldo;
	cout<<"Ingrese Puesto: ";
	cin>>puesto;
	
  Empleado emp = Empleado(nombre, apellido, direccion, telefono, codigo_empleado, puesto, sueldo);
  emp.mostrardatos();
}

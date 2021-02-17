#include "Empleado.cpp"
#include <iostream>
using namespace std;
class Persona : Empleado {
	private : string nombre,apellido,direccion;
				int telefono, nit;
	
	public:
	Persona (){
	}	
	
	Persona (int codig,int suel,string puest,string nom,string apel,string dir,int tel,int n) : Empleado( puest, codig, suel,){ 
	     nombre = nom;
		 apellido = apel;
		 direccion = dir;
		 telefono = tel;
		 nit= n;
	} 
	
	void setNit(int n){nit = n;}
  void setNombre(string nom){nombre = nom;}
  void setApellido(string ape){apellido = ape;}
  void setDireccion(string dir){direccion = dir;}
  void setTelefono(int tel){telefono = tel;}
  void setCodigo_empleado(int codigo_empleado){codigo_empleado = codig;}
  void setSueldo(int sueldo){sueldo = suel;}
  void setPuesto(string puesto){puesto = puest;}
  
  
  
  int getNit(){	return nit;}
  string getNombre(){	return nombre;}
  string getApellido(){	return apellido;}
  string getDireccion(){	return direccion;}
  int getTelefono(){	return telefono;}
  int getCodigo_empleado(){	return codigo_empleado;}
  int getSueldo(){	return sueldo;}
  string getPuesto(){	return puesto;}
    

void mostrar(){
	cout<<"______________________"<<endl;
	cout<<nit<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<endl;
}
};

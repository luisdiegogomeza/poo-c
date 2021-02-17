#include <iostream>
using namespace std;
class Empleado{
	private: int codigo_empleado,sueldo;
	        string puesto;
	
	public:
		Empleado(){
		}
		Empleado(string puest,int codig,int suel ){
			codigo_empleado = codig;
			sueldo = suel;
			puesto = puest;	
		}
		
		
		
	void mostrar ();
	
};

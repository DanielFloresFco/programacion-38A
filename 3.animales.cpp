#include <iostream>
#include <string>

using namespace std;

class Animal{
	public:
		string raza, color, animal;
		
		void ImprimirDatos(){
			cout << endl << "La raza del " << animal << " es: " << raza << endl;
			cout << "El color del " << animal << " es: " << color << endl;
		}
};

class Mamifero : public Animal{
	public: 
		void crianza(){
			cout << "El " << animal << " tiene a sus crias en el vientre" << endl;
		}
};                   

class Oviparo : public Animal{
	public:
			void crianza(){
			cout << "La " << animal << " tiene a sus crias mediante huevos" << endl;
		}
};

main(){
	Mamifero perro;
	Oviparo tortuga;
	
	perro.animal = "perro", perro.raza = "pitbull", perro.color = "gris";
	perro.ImprimirDatos();
	perro.crianza();
	
	tortuga.animal = "tortuga";
	tortuga.raza = "Acuatica";
	tortuga.color = "Verde";
	tortuga.ImprimirDatos();
	tortuga.crianza();
}

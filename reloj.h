/*
Proyecto Exhibición
Aarón Gonzalo Ramírez Tafolla
A01351621
21/11/2019
*/

#ifndef RELOJ_H
#define RELOJ_H

#include <iostream>

using namespace std;

/*
Se define la clase "Reloj", la cual tiene el atributo entero "tam" y float "precio_r" protegido,
para que las clases heredadas puedan acceder a ellos, pero el usuario no.
*/

class Reloj {
	protected:
		int tam;
		float precio_r;
	
	public:
	//Constructor default
		Reloj(){
			tam = 1;
			precio_r = 2499.99;
		}
	//Constructor con valores establecidos
		Reloj(int t, float p_r){
			tam = t;
			precio_r = p_r;
		}
	//Getter	
		int get_tam(){
			return tam;
		}
	//Setter
		void set_tam(int new_tam){
			tam = new_tam;
		}
		
		float get_precio_r(){
			return precio_r;
		}
};

/*
Clase "Reloj_oro" es una clase heredada de "Reloj". Además de los atributos y métodos de "Reloj",
recibe el atributo entero "quilates", además de sus respectivo getter y setter.
*/
class Reloj_oro: public Reloj {
	private:
		int quilates;
		
	public:
	//Constructor default
		Reloj_oro(){
			quilates = 18;
			precio_r = 5699.99;
		}
	//Prototipo de constructor con valores establecidos
		Reloj_oro(int tam, int quil, float precio_r);
	//Getter
		int get_quilates(){
			return quilates;
		}
		
	//Setter	
		void set_quilates(int new_quil){
			quilates = new_quil;
		}
};

//Constructor con valores establecidos. Toma los atributos "tam" y "precio_r" de la clase base "Reloj".
Reloj_oro::Reloj_oro(int s, int quil, float p_r){
	tam = s;
	quilates = quil;
	precio_r = p_r;
}


/*
Clase "Reloj_piel" es una clase heredada de "Reloj". Además de los atributos y métodos de "Reloj",
recibe el atributo "animal", además de sus respectivo getter.
*/
class Reloj_piel: public Reloj {
	private:
		string animal;
		
	public:
	//Constructor default
		Reloj_piel(){
			animal = "Vaca";
			precio_r = 2299.99;
		}
	//Prototipo de constructor con valores establecidos	
		Reloj_piel(int tam, string an, float precio_r);
	//Getter
		string get_animal(){
			return animal;
		}
		
};

//Constructor con valores establecidos. Toma los atributos "tam" y "precio_r" de la clase base "Reloj".
Reloj_piel::Reloj_piel(int s, string an, float p_r){
tam = s;
animal = an;
precio_r = p_r;
}

/*
Clase "Mecanismo", la cual es un atributo de la clase "Reloj_caucho" declarada posteriormente.
*/
class Mecanismo {
	
	private:
	
		bool digital;
		string tipo_display;
		
	public:
	
	//Constructor default
		Mecanismo(){
			digital = false;
			tipo_display = "LCD";
		}
	//Constructor con valores establecidos	
		Mecanismo (bool dig, string t_d){
			digital = dig;
			tipo_display = t_d;
		}
	//Getters	
		bool get_digital(){
			return digital;
		}
		
		string get_tipo_display(){
			return tipo_display;
		}
	//Setters	
		void set_digital(bool new_dig){
			digital = new_dig;
		}
		
		void set_tipo_display(string new_t_d){
			//Si el reloj es digital, asigna el valor de "new_t_d" a "tipo_display", si no, recibe "N.A."
			if (digital==true){
				tipo_display = new_t_d;
			}
			else {
				tipo_display = "Analogo";
			}
		}
};

/*Clase "Reloj_caucho" es una clase heredada de "Reloj". Además de los atributos y métodos de "Reloj",
recibe "meca", un atributo de composición definido en la clase "Mecanismo".
Además, sus respectivo getter. No tiene setter porque se espera que el usuario no pueda cambiar los atributos.
*/	
class Reloj_caucho: public Reloj {
	private:
		Mecanismo meca;
		
	public:
	
	//Constructor default
		Reloj_caucho(){
			tam = 7;
			precio_r = 999.99;
		}
	//Prototipo de constructor con valores establecidos	
		Reloj_caucho(int tam, float precio_r, Mecanismo m);
		
	//Getters	
		
		Mecanismo get_meca(){
			return meca;
		}

};

//Constructor con valores establecidos. Toma el atributo "tam" de la clase base "Reloj".
Reloj_caucho::Reloj_caucho(int s, float p_r, Mecanismo m){
	tam = s;
	precio_r = p_r;
	meca = m;
}

#endif
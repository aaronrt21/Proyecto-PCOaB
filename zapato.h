/*
Proyecto Exhibición
Aarón Gonzalo Ramírez Tafolla
A01351621
21/11/2019
*/

#ifndef ZAPATO_H
#define ZAPATO_H

#include <iostream>

using namespace std;


/*
Se define la clase "Zapato", la cual tiene el atributo entero "talla", float "precio_z" y
los strings "material" y "color" protegidos, para que las clases heredadas puedan acceder a
ella, pero el usuario no.
*/
class Zapato {
	
	protected:
		int talla;
		string material;
		string color;
		float precio_z;
		
	public:
	//Constructor default
		Zapato(){
			talla = 1;
			material = "piel";
			color = "negro";
		}
		
	//Constructor con valores establecidos	
		Zapato(int t, string mat, string c, float precio_z){
			talla = t;
			material = mat;
			color = c;
			precio_z = 1499.99;
		}
		
	//Getters		
		int get_talla(){
			return talla;
		}
		
		string get_material(){
			return material;
		 }
		
		string get_color(){
			return color;
		}
		
		float get_precio_z(){
			return precio_z;
		}
		
	//No hay setters porque se espera que el usuario nunca modifique los atributos.
};

/*
Clase "Tacones" es una clase heredada de "Zapato". Además de los atributos y métodos de "Zapato",
recibe el atributo entero "altura", además de sus respectivos getter.
*/
class Tacones: public Zapato {
	
	private:
		int altura;
		
	public:
	
	//Constructor default
		Tacones(){
			altura = 1;
			precio_z = 999.99;
		}
	//Prototipo de constructor con valores establecidos	
		Tacones(int talla, string material, string color, int alt, float precio_z);
		
	//Getters	
		int get_altura(){
			return altura;
		}

	//No hay setters porque se espera que el usuario nunca modifique los atributos.
};

//Constructor con valores establecidos. Toma los atributos "talla", "material" y color de la clase base "Zapato".
Tacones::Tacones(int tal, string mate, string co, int alt, float p_z){
	talla = tal;
	material = mate;
	color = co;
	altura = alt;
	precio_z = p_z;
}

/*
Clase "Tenis" es una clase heredada de "Zapato". Además de los atributos y métodos de "Zapato",
recibe el string "tipo", además de sus respectivo getter.
*/
class Tenis: public Zapato {
	
	private:
		string tipo;

	public:
	
	//Constructor default
		Tenis(){
			tipo = "correr";
			precio_z = 1199.99;
		}
	//Prototipo de constructor con valores establecidos	
		Tenis(int talla, string material, string color, string tip, float precio_z);
		
	//Getters	
		string get_tipo(){
			return tipo;
		}

	//No hay setters porque se espera que el usuario nunca modifique los atributos.
};

//Constructor con valores establecidos. Toma los atributos "talla", "material", "precio_z" y "color" de la clase base "Zapato".
Tenis::Tenis(int tal, string mate, string co, string tip, float p_z){
	talla = tal;
	material = mate;
	color = co;
	tipo = tip;
	precio_z = p_z;
}
#endif
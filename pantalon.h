/*
Proyecto Exhibición
Aarón Gonzalo Ramírez Tafolla
A01351621
21/11/2019
*/

#ifndef PANTALON_H
#define PANTALON_H

#include <iostream>

using namespace std;


/*
Se define la clase "Pantalon", la cual tiene los atributos enteros "cintura" y "largo",
el float "precio_p" y el string "color" protegidos, para que las clases heredadas puedan
acceder a ella, pero el usuario no.
*/
class Pantalon {
	
	protected:
		int cintura;
		int largo;
		string color;
		float precio_p;
		
	public:
	//Constructor default
		Pantalon(){
			cintura = 30;
			largo = 34;
			color = "azul";
			precio_p = 1199.99;
		}
		
	//Constructor con valores establecidos	
		Pantalon(int cint, int lar, string col, float p_p){
			cintura = cint;
			largo = lar;
			color = col;
			precio_p = p_p;
		}
	//Getters	
		int get_cintura(){
			return cintura;
		}
		
		int get_largo(){
			return largo;
		}
		
		string get_color(){
			return color;
		}
		
		float get_precio_p(){
			return precio_p;
		}
		
	//No hay setters porque se espera que el usuario nunca modifique los atributos.
};

/*
Clase "Jeans" es una clase heredada de "Pantalon". Además de los atributos y métodos de "Pantalon",
recibe el atributo "corte" y el entero "precio_jeans", además de sus respectivos getters y setters.
*/
class Jeans: public Pantalon {
	
	private:
		string corte;
		
	public:
	
	//Constructor default
		Jeans(){
			cintura = 24;
			largo = 29;
			color = "Negro";
			corte = "regular";
			precio_p = 1099.99;
		}
		
	//Prototipo de constructor con valores establecidos		
		Jeans (int cintura, int largo, string color, string cor, float precio_p);
		
	//Getters	
		string get_corte(){
			return corte;
		}
		
	//No hay setters porque se espera que el usuario nunca modifique los atributos.	
};

//Constructor con valores establecidos. Toma "cintura", "talla", "precio_p" y "color" de la clase "Pantalon".
Jeans::Jeans (int ci, int la, string co, string cor, float p_p){
	cintura = ci;
	largo = la;
	color = co;
	corte = cor;
	precio_p = p_p;
}

/*
Clase "Cargo" es una clase heredada de "Pantalon". Además de los atributos y métodos de "Pantalon",
recibe el atributo entero "num_bolsas", además de su respectivo getter.
*/
class Cargo: public Pantalon {
	
	private:
		int num_bolsas;
		
	public:
	
	//Constructor default
		Cargo(){
			cintura = 33;
			largo = 36;
			color = "Azul";
			num_bolsas = 6;
			precio_p = 799.99;
		}
		
	//Prototipo de constructor con valores establecidos		
		Cargo (int cintura, int largo, string color, int n_bolsas, float precio_p);
		
	//Getters	
		int get_num_bolsas(){
			return num_bolsas;
		}

};

//Constructor con valores establecidos. Toma "cintura", "talla" y "color" de la clase "Pantalon".
Cargo::Cargo (int ci, int la, string co, int n_bolsas, float p_p){
	cintura = ci;
	largo = la;
	color = co;
	num_bolsas = n_bolsas;
	precio_p = p_p;
}
#endif
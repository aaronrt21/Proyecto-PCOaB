/*
Proyecto Exhibición
Aarón Gonzalo Ramírez Tafolla
A01351621
27/11/2019
*/

#include <iostream>

//Se incluyen las librerías a usar.
#ifndef CUENTA_H
#define CUENTA_H

#include "reloj.h"
#include "zapato.h"
#include "pantalon.h"

using namespace std;

/*
Se define la clase "Cuenta", la cual no tiene herencia, composición ni agregación con las clases
"Reloj", "Zapato" y "Pantalon", pero manda a llamar funciones de ellas para realizar cambios
en la cuenta del usuario.
*/

class Cuenta {
	private:
		float saldo;
		string nombre;
	public:
		Cuenta(){
			saldo = 15000;
			nombre = "Maria";
		}
		
		Cuenta(float sal, string nom){
			saldo = sal;
			nombre = nom;
		}
		
		float get_saldo(){
			return saldo;
		}
		
		void cobrar_rel(Reloj r){
			saldo = saldo - r.get_precio_r();
			cout << endl << "**********" << endl;
			cout << "Su nuevo saldo es de:" << endl;
			cout << "$" << saldo << endl;
			cout << "**********" << endl;
		}
		
		void cobrar_zap(Zapato z){
			saldo = saldo - z.get_precio_z();
			cout << endl << "**********" << endl;
			cout << "Su nuevo saldo es de:" << endl;
			cout << saldo << endl;
			cout << "**********" << endl;
		}
		
		void cobrar_pan(Pantalon p){
			saldo = saldo - p.get_precio_p();
			cout << endl << "**********" << endl;
			cout << "Su nuevo saldo es de:" << endl;
			cout <<  "$" << saldo << endl;
			cout << "**********" << endl;
		}
		
		void depositar(float d){
			saldo = saldo + d;
			cout << endl << "**********" << endl;
			cout << "Su nuevo saldo es de:" << endl;
			cout << "$" << saldo << endl;
			cout << "**********" << endl;
		}
};

#endif
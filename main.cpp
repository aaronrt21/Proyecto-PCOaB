/*
Proyecto Exhibición
Aarón Gonzalo Ramírez Tafolla
A01351621
21/11/2019
*/

/*
Descripción

Este es un proyecto para la clase de Pensamiento Computacional Orientado a Objetos.
El programa captura variables de 3 tipos de productos en una exhibición
y los imprime: 
Relojes, Pantalones, y Zapatos.

Se crean 3 objetos de Reloj y 2 de Pantalones y Zapatos.

La clase Reloj cuenta con 3 clases heredadas y 1 de composición.
La clase Pantalon cuenta con 2 clases heredadas.
La clase Zapato cuenta con 2 clases heredadas. 
La clase Cuenta cuenta con metodos de las 3 clases anteriores, pero no es heredada, de
composición, ni agregación.
*/

#include <iostream>
//Incluir mis librerías en el main script.
#include "reloj.h"
#include "zapato.h"
#include "pantalon.h"
#include "cuenta.h"


using namespace std;


int main (){
	/*
	Declara una variable para elegir la categoria y otra para elegir el tipo
	de producto dentro de esa categoria.
	*/
	int opcion1 = 0, opcion2 = 0, compra = 0;
	string n="";
	cout << endl <<"Introduce tu nombre: " << endl;
	cin >> n;
	Cuenta cuenta1(20000, n);
	cout << endl << "Buen dia, " << n << "." <<endl;
	cout << "Tu saldo es de: $" << cuenta1.get_saldo() << endl;
	cout << endl << "Bienvenido al bazar." << endl;
	//Imprime un menu para elegir la categoria
	cout << endl << "\nSeleccione una categoria:" << endl;
	cout << endl << "[1] Relojes" << endl;
	cout << "[2] Zapatos" << endl;
	cout << "[3] Pantalones" << endl;
	cout << "[4] Salir" << endl;
	
	//Pide al usuario que escoja.
	cin >> opcion1;
	
	/*
	Impide que el usuario introduzca valores menores a 1 y mayores a 3. Introducir
	un float hará que el programa entre en un ciclo infinito. Se requerirá reiniciar el
	script.
	*/
	while ((opcion1 < 1) or (opcion1 > 4)){
		cout << endl << "Respuesta no valida." <<endl << endl;
		cout << "Seleccione una categoria:" << endl;
		cout << "[1] Relojes" << endl;
		cout << "[2] Zapatos" << endl;
		cout << "[3] Pantalones" << endl;
		cout << "[4] Salir" << endl;
		cin >> opcion1;
	}
	
	//****************RELOJES***************
	//Si el usuario introduce 1, se imprime otro menu dando a escoger 3 relojes.
	if (opcion1 == 1){
		cout << endl << "*****Relojes*****" << endl;
		cout << "Seleccione un producto:" << endl;
		cout << "[1] Reloj de Oro" << endl;
		cout << "[2] Reloj de Piel" << endl;
		cout << "[3] Reloj de Caucho" << endl;
		cout << "[4] Salir" << endl;
		cin >> opcion2;
		
		//Restringe al usuario a valores entre 1 y 3. Introducir un float creará un loop infinito.
		while ((opcion2 < 1) or (opcion2 > 4)){
			cout << endl << "Respuesta no valida." <<endl << endl;
			cout << endl << "Seleccione un producto:" << endl;
			cout << "[1] Reloj de Oro" << endl;
			cout << "[2] Reloj de Piel" << endl;
			cout << "[3] Reloj de Caucho" << endl;
			cout << "[4] Salir" << endl;
			cin >> opcion2;
		}
		
		//Llama los métodos de "Reloj_oro" y su clase base "Reloj".
		/*
		Caso prueba:
		tam = 10;
		quilates = 24;
		precio_r = 5299.99;
		*/
		if (opcion2 == 1) {
			Reloj_oro reloj1(10, 24, 5299.99);
			cout << endl << "*****Reloj de Oro*****" << endl;
			cout << "Area de la correa: " << reloj1.get_tam() << "cm^2" << endl;
			cout << "Quilates del oro: " << reloj1.get_quilates() << "K" << endl;
			cout << "Precio: $" << reloj1.get_precio_r() << endl;
			cout << endl << "Desea comprar este producto?" << endl;
			cout << "[0] No  [1] Si" << endl;
			cin >> compra;
			while ((compra<0) or (compra > 1)){
				cout << endl << "Opción no válida." << endl;
				cout << endl << "Desea comprar este producto?" << endl;
				cout << "[0] No  [1] Si" << endl;
				cin >> compra;
			}
			if (compra == 1){
				cout << "Saldo anterior: $" << cuenta1.get_saldo() << endl;
				cuenta1.cobrar_rel(reloj1);
			}
			
		}
		//Llama los métodos de "Reloj_piel" y su clase base "Reloj".
		/*
		Caso prueba:
		tam = 20;
		animal = "Cabra";
		precio_r = 2399.99;
		*/
		if (opcion2 == 2) {
			Reloj_piel reloj2(20, "Cabra", 2399.99);
			cout << endl << "*****Reloj de Piel*****" << endl;
			cout << "Area de la correa: " << reloj2.get_tam() << "cm^2" << endl;
			cout << "Procedencia de la piel: " << reloj2.get_animal() << endl;
			cout << "Precio: $" << reloj2.get_precio_r() << endl;
			cout << endl << "Desea comprar este producto?" << endl;
			cout << "[0] No  [1] Si" << endl;
			cin >> compra;
			while ((compra<0) or (compra > 1)){
				cout << endl << "Opción no válida." << endl;
				cout << endl << "Desea comprar este producto?" << endl;
				cout << "[0] No  [1] Si" << endl;
				cin >> compra;
			}
			if (compra == 1){
				cout << "Saldo anterior: $" << cuenta1.get_saldo() << endl;
				cuenta1.cobrar_rel(reloj2);
			}
		}
		
		//Llama los métodos de "Reloj_caucho" y su clase base "Reloj".
		
		/*
		Caso prueba:
		***Objeto de composición 1***
		
		tam = 15;
		precio_r = 1899.99;
		mecanismo1
			digital = true;
			tipo_display = "LCD";
			
		***Objeto de composición 2***
		
		tam = 19;
		precio_r = 1239.99;
		mecanismo2
			digital = false;
			tipo_display = "Analogo";
		*/
		if (opcion2 == 3) {
			//Atributo de composición, el cual manda llamar funciones de la clase de composición "Mecanismo".
			Mecanismo mecanismo1(true, "LCD");
			Reloj_caucho reloj3(15, 1899.99, mecanismo1);
			cout << endl << "*****Reloj de Caucho*****" << endl;
			cout << "Area de la correa: " << reloj3.get_tam() << "cm^2" << endl;
			cout << "Reloj digital ([1]True [0] False): " << mecanismo1.get_digital() << endl;
			cout << "Tipo de display: " << mecanismo1.get_tipo_display() << endl;
			cout << "Precio: $" << reloj3.get_precio_r() << endl;
			cout << "**********" << endl;
			cout << endl << "Desea comprar este producto?" << endl;
			cout << "[0] No  [1] Si" << endl;
			cin >> compra;
			while ((compra<0) or (compra > 1)){
				cout << endl << "Opción no válida." << endl;
				cout << endl << "Desea comprar este producto?" << endl;
				cout << "[0] No  [1] Si" << endl;
				cin >> compra;
			}
			if (compra == 1){
				cout << "Saldo anterior: $" << cuenta1.get_saldo() << endl;
				cuenta1.cobrar_rel(reloj3);
			}
			
			//Atributo de composición, el cual manda llamar funciones de la clase de composición "Mecanismo".
			Mecanismo mecanismo2(false, "Analogo");
			Reloj_caucho reloj4(19, 1239.99, mecanismo2);
			cout << endl <<"Area de la correa: " << reloj4.get_tam() << "cm^2" << endl;
			cout << "Reloj digital ([1]True [0] False): " << mecanismo2.get_digital() << endl;
			cout << "Tipo de display: " << mecanismo2.get_tipo_display() << endl;
			cout << "Precio: $" << reloj4.get_precio_r() << endl;
			cout << "**********" << endl;
			cout << endl << "Desea comprar este producto?" << endl;
			cout << "[0] No  [1] Si" << endl;
			cin >> compra;
			while ((compra<0) or (compra > 1)){
				cout << endl << "Opción no válida." << endl;
				cout << endl << "Desea comprar este producto?" << endl;
				cout << "[0] No  [1] Si" << endl;
				cin >> compra;
			}
			if (compra == 1){
				cout << "Saldo anterior: $" << cuenta1.get_saldo() << endl;
				cuenta1.cobrar_rel(reloj4);
			}
		}
	}
	
	//***************ZAPATOS*****************
	//Si el usuario introduce 2, se imprime otro menu dando a escoger 2 modelos de calzado.
	if (opcion1 == 2) {
		cout << endl << "*****Zapatos*****" << endl;
		cout << "Seleccione un producto:" << endl;
		cout << "[1] Tacones" << endl;
		cout << "[2] Tenis" << endl;
		cout << "[3] Salir" << endl;
		
		cin >> opcion2;
		
	//Restringe al usuario a valores entre 1 y 2. Introducir un float creará un loop infinito.
		while ((opcion2 < 1) or (opcion2 > 3)){
			cout << endl << "Respuesta no valida." <<endl << endl;
			cout << endl << "Seleccione un producto:" << endl;
			cout << "[1] Tacones" << endl;
			cout << "[2] Tenis" << endl;
			cout << "[3] Salir" << endl;
			cin >> opcion2;
		}
	
		//Llama los métodos de "Tacones" y su clase base "Zapato".
		/*
		Caso prueba:
		talla = 23;
		material = "Gamuza";
		color = "Negro";
		altura = 15;
		precio_z = 1499.99;
		*/
		if (opcion2 == 1) {
			Tacones calzado1(23, "Gamuza", "Negro", 15, 1499.99);
			cout << endl << "*****Tacones*****" << endl;
			cout << "Talla del calzado: " << calzado1.get_talla() << "cm" << endl;
			cout << "Material exterior: " << calzado1.get_material() << endl;
			cout << "Color: " << calzado1.get_color() << endl;
			cout << "Altura del tacon: " << calzado1.get_altura() << "cm" << endl;
			cout << "Precio: $" << calzado1.get_precio_z() << endl;
			cout << endl << "Desea comprar este producto?" << endl;
			cout << "[0] No  [1] Si" << endl;
			cin >> compra;
			while ((compra<0) or (compra > 1)){
				cout << endl << "Opción no válida." << endl;
				cout << endl << "Desea comprar este producto?" << endl;
				cout << "[0] No  [1] Si" << endl;
				cin >> compra;
			}
			if (compra == 1){
				cout << "Saldo anterior: $" << cuenta1.get_saldo() << endl;
				cuenta1.cobrar_zap(calzado1);
			}
		}
		
		
		//Llama los métodos de "Tenis" y su clase base "Zapato".
		/*
		Caso prueba:
		talla = 23;
		material = "Tela sintetica";
		color = "Azul c/Blanco";
		tipo = "Indoor";
		precio_tenis = 1899.99;
		*/
		if (opcion2 == 2) {
			Tenis calzado2 ( 28, "Tela sintetica", "Azul c/Blanco", "Indoor", 1899.99);
			cout << endl << "*****Tenis*****" << endl;
			cout << "Talla del calzado: " << calzado2.get_talla() << "cm" << endl;
			cout << "Material exterior: " << calzado2.get_material() << endl;
			cout << "Color: " << calzado2.get_color() << endl;
			cout << "Tipo de Zapatillas: " << calzado2.get_tipo() << endl;
			cout << "Precio: $" << calzado2.get_precio_z() << endl;
			cout << endl << "Desea comprar este producto?" << endl;
			cout << "[0] No  [1] Si" << endl;
			cin >> compra;
			while ((compra<0) or (compra > 1)){
				cout << endl << "Opción no válida." << endl;
				cout << endl << "Desea comprar este producto?" << endl;
				cout << "[0] No  [1] Si" << endl;
				cin >> compra;
			}
			if (compra == 1){
				cout << "Saldo anterior: $" << cuenta1.get_saldo() << endl;
				cuenta1.cobrar_zap(calzado2);
			}
		}
	}
	
	//************PANTALONES****************
	//Si el usuario introduce 3, se imprime otro menu dando a escoger 2 modelos de pantalones.
	if (opcion1 == 3) {
		cout << endl << "Seleccione un producto:" << endl;
		cout << "[1] Jeans" << endl;
		cout << "[2] Cargo" << endl;
		cout << "[3] Salir" << endl;
		cin >> opcion2;
		
		//Restringe al usuario a valores entre 1 y 2. Introducir un float creará un loop infinito.
		while ((opcion2 < 1) or (opcion2 > 3)){
			cout << endl << "Respuesta no valida." <<endl << endl;
			cout << endl << "Seleccione un producto:" << endl;
			cout << "[1] Jeans" << endl;
			cout << "[2] Cargo" << endl;
			cout << "[3] Salir" << endl;
			cin >> opcion2;
		}
		
		//Llama los métodos de "Jeans" y su clase base "Pantalon".
		/*
		Caso prueba:
		cintura = 28;
		largo = 32;
		color = "Gris";
		corte = "Relajado";
		precio_jeans = 1299.99;
		*/
		if (opcion2 == 1){
			Jeans pantalon1(28,32,"Gris","Relajado",1299.99);
			cout << endl << "Talla: " << pantalon1.get_cintura() << "x" << pantalon1.get_largo() << endl;
			cout << "Color: " << pantalon1.get_color() << endl;
			cout << "Corte: " << pantalon1.get_corte() << endl;
			cout << "Precio: $" << pantalon1.get_precio_p() << endl;
			cout << endl << "¿Desea comprar este producto?" << endl;
			cout << "[0] No  [1] Si" << endl;
			cin >> compra;
			while ((compra<0) or (compra > 1)){
				cout << endl << "Opción no válida." << endl;
				cout << endl << "¿Desea comprar este producto?" << endl;
				cout << "[0] No  [1] Si" << endl;
				cin >> compra;
			}
			if (compra == 1){
				cout << "Saldo anterior: $" << cuenta1.get_saldo() << endl;
				cuenta1.cobrar_pan(pantalon1);
			}
		}
		
		//Llama los métodos de "Cargo" y su clase base "Pantalon".
		/*
		Caso prueba:
		cintura = 34;
		largo = 32;
		color = "Verde";
		num_bolsas = 6;
		precio_cargo = 799.99;
		*/
		if (opcion2 == 2){
			Cargo pantalon2(34,32,"Verde", 6, 799.99);
			cout << endl << "Talla: " << pantalon2.get_cintura() << "x" << pantalon2.get_largo() << endl;
			cout << "Color: " << pantalon2.get_color() << endl;
			cout << "Numero de bolsas: " << pantalon2.get_num_bolsas() << endl;
			cout << "Precio: $" << pantalon2.get_precio_p() << endl;
			cout << endl << "Desea comprar este producto?" << endl;
			cout << "[0] No  [1] Si" << endl;
			cin >> compra;
			while ((compra<0) or (compra > 1)){
				cout << endl << "Opción no válida." << endl;
				cout << endl << "Desea comprar este producto?" << endl;
				cout << "[0] No  [1] Si" << endl;
				cin >> compra;
			}
			if (compra == 1){
				cout << "Saldo anterior: $" << cuenta1.get_saldo() << endl;
				cuenta1.cobrar_pan(pantalon2);
			}
		}
	}
	return 0;
}
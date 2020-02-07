

#include <iostream>
#include <conio.h>
#include <stdio.h>

#include "Lista.h";

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	Lista lista;
	int a;
	int carnet=0;
	string nombre;
	bool continuar = true;

	do
	{
		system("cls");
		cout << "***** Ingrese Numero de Opcion Requerida*****\n";
		cout << "Insertar..............1 \n";
		cout << "Eliminar............2 \n";
		cout << "Buscar....3 \n";
		cout << "Salir..........................4 \n";
		cin >> a;
		switch (a)
		{
		case 1:
			system("cls");
			cout << "***** Ingrese Numero de Carnet*****\n";
			
			cin >> carnet;
			
			cout << "\n";
			cout << "Escriba nombre \n";
			cin >> nombre;
			lista.insertar(carnet, nombre);
			_getch();
			break;
		case 2: 
			system("cls");
			cout << "***** Ingrese Numero de Carnet a eliminar*****\n";
			cin >> carnet;
			//lista.eliminar(carnet);
			_getch();
			break;
		case 3:
			system("cls");
			cout << "\n***** Ingrese carnet a Buscar*****\n";
			
			cin >> carnet;
			//lista.buscar(carnet);
			_getch();
			break;
		default:
			continuar = false;
			break;
		}
	} while (continuar);

}

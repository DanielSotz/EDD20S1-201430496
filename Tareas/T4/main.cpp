
#include <iostream>
#include <conio.h>
#include <stdio.h>

#include "ListaDoble..h"


using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	ListaDoble listadoble;
	
	int a;
	char caracter;
	string ingreso;
	bool continuar = true;

	do
	{
		system("cls");
		cout << "****************** LISTA DOBLE *******************\n";
		cout << "***** Ingrese Numero de Opcion Requerida*****\n";
		cout << "Insertar Primero............1 \n";
		cout << "Eliminar Ultimo.............2 \n";
		cout << "Buscar string...............3 \n";
		cout << "Salir...............4 \n";
		cin >> a;
		switch (a)
		{
		case 1:
			system("cls");
			cout << "***** Ingrese Caracter a insertar*****\n";
			
			cin >> caracter;
			
			cout << "\n";
			
			listadoble.insertarInicio(caracter);
			_getch();
			break;
		case 2: 
			system("cls");
			listadoble.eliminarFinal();
			_getch();
			break;
		case 3:
			system("cls");
			cout << "\n***** Ingrese String a Buscar*****\n";
			
			cin >> ingreso;
			listadoble.buscar(ingreso);
			_getch();
			break;
		default:
			continuar = false;
			break;
		}
	} while (continuar);

}

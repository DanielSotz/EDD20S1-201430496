#include "ListaDoble.h"

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

ListaDoble::ListaDoble()
{
	cabeza = NULL;
	tamanio=0;
}

bool ListaDoble::isVacia()
{
	return cabeza==NULL;
}


void ListaDoble::insertarInicio(char ca)
{
	class Nodo *nuevo =new Nodo();
	
	nuevo->c = ca;
	
	if( isVacia() ){
		
		cabeza= nuevo;
		cout<< "Caracter: " << cabeza->c<< " ingresado";
	}
	else{
		
		
		nuevo->sig = cabeza;
		cabeza->ant = nuevo;
		cabeza = nuevo;
		
		cout<< "Caracter: " << cabeza->c<< " ingresado";
	}
	
}

void ListaDoble::eliminarFinal()
{
	if( isVacia() ){
		
		
		cout<< "Lista doble vacia ";
	}
	else{
		
		Nodo *temp= cabeza;
		
		while(temp->sig !=NULL)
		{
			Nodo *aux = temp;
			
			temp = temp->sig;
		}
		
		aux->sig = NULL;
		temp->ant = NULL;
		
		cout<< "Nodo final eliminado";
	
	}
	
}

void Lista::buscar(string buscado)
{
	
	cout<< "Me falto implementar esto jeje";
	
}


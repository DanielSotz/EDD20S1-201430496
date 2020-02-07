#include "Lista.h"

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

Lista::Lista()
{
	cabeza = NULL;
	tamanio=0;
}

bool Lista::isVacia()
{
	return cabeza==NULL;
}


void Lista::insertar(int car, string nom)
{
	struct Nodo *nuevo =new Nodo();
	
	nuevo->carnet= car;
	nuevo->nombre = nom;
	
	
	if( isVacia() ){
		
		cabeza= nuevo;
		cout<< "Estudiante: " << cabeza->nombre<< " ingresado";
	}
	else{
		
		
		nuevo->sig = cabeza;
		cabeza = nuevo;
		
		cout<< "Estudiante: " << cabeza->nombre<< " ingresado";
	}
	
}

void Lista::eliminar(int car)
{
	if( isVacia() ){
		
		
		cout<< "Lista vacia ";
	}
	else{
		
		
	Nodo *temp= cabeza;
			
	
	while(temp!=NULL)
	{
		if(temp->carnet==car)
		{
			cout<< "Estudiante: " << temp->nombre<< " eliminado";
			
			temp->sig = NULL;
			return;
		}
		temp =temp->sig;
	}
	}
	
}

void Lista::buscar(int car)
{
	Nodo *temp= cabeza;
	
	while(temp!=NULL)
	{
		if(temp->carnet==car)
		{
			cout<< "Estudiante: " << temp->nombre<< " encontrado";
			return;
		}
		temp =temp->sig;
	}
	
	
}



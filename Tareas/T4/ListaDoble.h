#ifndef LISTADOBLE_H
#define LISTADOBLE_H

#include <iostream>
#include <stdlib.h>
#include <string>


using namespace std;

class ListaDoble
{
		public:
		ListaDoble();
		
		bool isVacia();
		void insertarInicio(char);
		void eliminarFinal();
		void buscar(string);
		
	private:
		class Nodo
		{
			char c;
			
			Nodo *sig = NULL;
			Nodo *ant = NULL;
			
		};
		
		Nodo *cabeza;
};

#endif

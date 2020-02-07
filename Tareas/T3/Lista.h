#ifndef LISTA_H
#define LISTA_H

#include <iostream>
#include <stdlib.h>
#include <string>


using namespace std;

class Lista
{
		public:
		Lista();
		
		bool isVacia();
		void insertar(int,string);
		void eliminar(int);
		void buscar(int);
		
	private:
		struct Nodo
		{
			int carnet;
			string nombre;
			
			Nodo *sig = NULL;
			
		};
		
		Nodo *cabeza;
		int tamanio;
};

#endif

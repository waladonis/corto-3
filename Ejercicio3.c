#include <stdio.h>
#include <stdlib.h>

struct nodo{
	int info;
	struct nodo *sig;
};

struct nodo	*raiz = NULL;



void ingresar(int x){ //funcion para ingresar datos a la pila
struct nodo *nuevo;
	nuevo = malloc(sizeof(struct nodo));
	nuevo->info = x;
	if(raiz	== NULL){
		raiz = nuevo;
		nuevo->sig = NULL;
	}
	else{
		nuevo->sig = raiz;
		raiz = nuevo;
	}
}

void reemplazar(struct nodo *pila, int viejo, int nuevo){ //funcion que reemplazara un valor existente en la pila
	if(pila!= NULL){   //si la pila no esta vacia se efectuara el reemplazo
		if(pila->info == viejo){ 
			pila->info = nuevo; 
		}
		else{
			reemplazar(pila->sig,viejo,nuevo); 
		}
	}
	else{
		printf("No se encontraron valores iguales\n");
	}
}

void imprimir(){  //imprimir los valores contenidos dentro de la pila
	struct nodo *reco=raiz;
	printf("Lista :\n");
	while(reco!=NULL){
		printf("%i ",reco->info);
		reco=reco->sig;
	}
	printf("\n");
}
//funcion que permitira verificar si la pila se encuentra vacia o no
void estaVacia(){
	if(raiz == NULL){
		printf("La pila se encuentra vacia\n");
	}else{
		printf("La pila no esta vacia\n");
	}
}
    
int main(){
	ingresar(1);
	ingresar(2);
	ingresar(3);
	imprimir();
	printf("Reemplazando dato contenido en la pila.\n");
	reemplazar(raiz,2,5);
	imprimir();
	return 0;
}



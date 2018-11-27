#include <stdio.h>
#include <stdlib.h>
#include <math.h>


struct nodo{
      int dato;
      struct nodo *sig;
};


struct nodo	*raiz = NULL; 

void insertar(int x){  //insertar un nuevo elemento en la pila
struct nodo *nuevo;
	nuevo = malloc(sizeof(struct nodo));
	nuevo->dato = x;
	if(raiz	== NULL){
		raiz = nuevo;
		nuevo->sig = NULL;
	}
	else{
		nuevo->sig = raiz;
		raiz = nuevo;
	}
}

void imprimir(){   //imprimir el numero ya invertido 
	struct nodo *reco=raiz;
	printf("Numero invertido: \n");
	while(reco!=NULL){
		printf("%i",reco->dato);
		reco=reco->sig;
	}
	printf("\n");
}




void invertir(){
	int num,cont;
	char * dato = malloc(12 * sizeof(char));
	printf("Digite un numero :\n");  //pedir numero a invertir
	scanf("%d", &num);
	sprintf(dato, "%i", num); 
		for(cont=0;dato[cont]!='\0';cont++){
			int x = (dato[cont] - '0');
			insertar(x);
		}

}

void main(){
	    invertir(); //llamando a la funcion para invertir numero
		imprimir();	//imprimir el numero que se ha invertido
}


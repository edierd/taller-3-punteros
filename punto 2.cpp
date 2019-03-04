/*Crear un programa con punteros que permita leer la cantidad 
de vocales ingresados en una cadena 
y luego imprima el total discriminado por vocales.

*/
#include<stdio.h>

int vocalA(char *);
int vocalE(char *);
int vocalI(char *);
int vocalO(char *);
int vocalU(char *);

int main(){
	char palabra[50];
	
	printf("Digite una palabra: ");
	gets(palabra);
	
	printf("\nLa vocal a aparece: %i veces",vocalA(palabra));
	printf("\nLa vocal e aparece: %i veces",vocalE(palabra));
	printf("\nLa vocal i aparece: %i veces",vocalI(palabra));
	printf("\nLa vocal o aparece: %i veces",vocalO(palabra));
	printf("\nLa vocal u aparece: %i veces",vocalU(palabra));

	return 0;
}

int vocalA(char *s){
	int cont=0;
	while(*s){ //mientras s no sea nulo: \0
		switch(*s){
			case 'a': cont++;
		}
		s++;	
	}
	return cont;
}

int vocalE(char *s){
	int cont=0;
	while(*s){ //mientras s no sea nulo: \0
		switch(*s){
			case 'e': cont++;
		}
		s++;	
	}
	return cont;
}

int vocalI(char *s){
	int cont=0;
	while(*s){ //mientras s no sea nulo: \0
		switch(*s){
			case 'i': cont++;
		}
		s++;	
	}
	return cont;
}

int vocalO(char *s){
	int cont=0;
	while(*s){ //mientras s no sea nulo: \0
		switch(*s){
			case 'o': cont++;
		}
		s++;	
	}
	return cont;
}

int vocalU(char *s){
	int cont=0;
	while(*s){ //mientras s no sea nulo: \0
		switch(*s){
			case 'u': cont++;
		}
		s++;	
	}
	return cont;
}

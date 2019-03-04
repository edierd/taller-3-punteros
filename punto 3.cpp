/*Diseñe un programa, que sume dos variables de tipo entero, 
por medio de apuntadores, debe mostrar el resultado 
y la dirección de memoria de 
cada uno de los valores incluido el resultado.
*/

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int a,b, suma;//declaramos las variables tipo entero
	int *p_a, *p_b, *p_suma;//declaramos los punteros
	
	printf("ingrese un numero entero variable a: \n");
	scanf("%d",&a);
	
	printf("ingrese un numero entero variable b: \n");
	scanf("%d",&b);
	
	suma= a+b;
	
	printf("a+b=%d \n",suma);
	//se asigna el valor de los punteros.
	p_a=&a;
	p_b=&b;
	
	printf("*p_a+*p_b=%d\n",*p_a+*p_b);
	
	p_suma =&suma;
	
	printf("direccion de a es%p\n direccion de b es%p\n y de suma es%p\n\n",p_a,p_b,p_suma);
	
	
	
	
	
	
	return 0;
}

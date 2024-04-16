#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

void ejer1(){
	char tipo;
	int tamano;
	int precio;
	puts("Decime el tipo con la letra A o B");
	scanf("%c",&tipo);
	puts("Ahora decime el tamaño con los numeros 1 y 2");
	scanf("%d",&tamano);
	if(tipo == 'a' || tipo == 'A'){ //comprueba la letra
	   if(tamano == 1){ //asigna el precio
		precio = 200; 
	}  else{
		precio = 300;
	} 
	}
	else if(tipo == 'b' || tipo == 'B'){ //lo mismo
	   if(tamano == 1){
		precio = 300;
	}  else{
		precio = 500;
	}
	}
    printf("El productor recibira:%d",precio);
}

void ejer2(){
double num;
double potencia;
int resultado;
puts("escribi un numero");
scanf("%lf",&num);
resultado = num;
puts("ahora una potencia");
scanf("%lf",&potencia);
if((int)num != num ||(int)potencia != potencia || num < 0 || potencia < 0){
	//comprueba que no sea decimal o negativo la potencia o el num con el if
	printf("Solo recibo numeros enteros y positivos");
	return 0;
}
for(int i = 1 ; i < potencia ; i++){
	resultado = resultado * num; 
	 //calcula la potencia pero usando el metodo de multiplicaciones sucesivas
}
printf("El resultado es:%d",resultado);
}


void ejer3(){
	double radio;
	puts("Escribi el radio");
	scanf("%lf",&radio);
    double longitud = 2 * pi * radio;
    double area = pi * (radio * radio);
    double volumen = (4 / 3) * pi *(radio*radio*radio);
    printf("Tu radio es %.2f y la longitud = %.2f , area = %.2f y volumen %.2f",radio,longitud,area,volumen);
	//se calcula lo pedido con unas simples formulas y despues se imprime 
}

void ejer4(){
	char genero;
	int edad;
	int aporte;
	puts("Escrbi el genero con la letra F o M");
	scanf("%c",&genero);
	puts("Escribi la edad");
	scanf("%d",&edad);
	puts("Y por ultimo escribi los anios de aporte");
	scanf("%d",&aporte);
	if(aporte < 20){ //se comprueba que tenga mas de 20 anios de aporte
		printf("necesita haber realizado mas de 20 anios para jubilarse");
	}else if(genero == 'm' || genero == 'M'){ //se comprueba el genero
		if(edad < 65){ //se comprueba la edad
			printf("necesita tener mas de 65 anios para jubilarse");
		}else{
			printf("Si puede jubilarse");
		}
	} else if(genero == 'f' || genero == 'F'){ // se hace lo mismo que recien
        if(edad < 65){
			printf("necesita tener mas de 65 anios para jubilarse");
		}else{
			printf("Si puede jubilarse");
		}	
}
}

void ejer5(){
	int hijos;
	int total;
	puts("Escribir la cantidad de hijos");
	scanf("%d",&hijos);	
	for(int i = 1; i <= hijos; i++){
		int edad;
		printf("escribir edad de %d hijo\n",i);
		scanf("%d",&edad);
		if(edad  >= 6 && edad <= 18){
			total = total + 1000;
		} // se calcula la suma de plata por hijos que tengan edad escolar
	}
	if(hijos <= 2){
		total = total + 700 * hijos;
	}else if(hijos >= 3 && hijos <= 5){
		total = total + 800 * hijos;
	}else if(hijos > 5){
		total = total + 1200 * hijos;
	}
	printf("La familia recibira un total de: %d",total);
	//se calcula toda la plata que ingresara por los hijos y la edad escolar
}
int main(int argc, char *argv[]) {
	int eleccion;
	puts("Pone el numero del ejercicio que quieras ver");
	scanf("%d",&eleccion);
	switch(eleccion){   //sirve para elegir cada ejercicio que esta hecho en una funcion diferente
		case 1:ejer1();
		case 2:ejer2();
		case 3:ejer3();
		case 4:ejer4();
		case 5:ejer5();
	}
	return 0;
}

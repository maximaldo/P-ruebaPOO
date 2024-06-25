// compilado en Online GDB
#include <stdio.h>

int comprobar(int clase,int horario){
char *clases[]= { "Top ride","Zumba","Entrenamiento","Abdominales"};     
int asistencia[4][5];
int cupos[] = {3,4,5,6};
int recuento = 0;
  asistencia[clase][horario] = asistencia[clase][horario] + 1;
  for(int i = 0; i < 4; i++){
  	for(int j = 0; j < 5;j++){
      recuento = recuento + asistencia[i][j];
  	}
  }
    if(recuento >= cupos[clase]){
  	printf("\033[0;31mNo hay mas cupos para la clase: %s\033[0m\n",clases[clase]);
}
return recuento;
}

void prueba(){
char *clases[]= { "Top ride","Zumba","Entrenamiento","Abdominales"};     
int clase = 2;
int horario = 2;
    while(clase != 4 && horario != 5){
    if(clase < 0 || clase > 4 || horario < 1 || horario > 5){
    	printf("\033[0;32mEl numero que ingreso no corresponde con ninguna de las opciones\033[0m\n");
    	break;
	}else{
    printf("A que clase se unio el alumno? Indicar con el numero o con 5 en caso de que no quiera ingresar mas alumnos\n");
    printf("0-Top ride \n1-Zumba \n2-Entrenamiento \n3-Abdominales \n4-No quiero ingresar mas alumnos\n");
    scanf("%d",&clase);
    printf("Ahora indique el horario al que se unio el alumno, estos son solo del 0 al 4\n");
    scanf("%d",&horario);
    comprobar(clase,horario);
}
}
}


int main()
{
    prueba();
    printf("Hello World");

    return 0;
}

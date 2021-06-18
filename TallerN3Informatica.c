/*
  integrante: Jesus Medina         
  Compilador: clang version 7.0.0-3~ubuntu0.18.04.1 linux
  seccion: 413
  Profesor: Igor Caracci Maraboli
*/ 

#include <stdio.h>
#include <stdlib.h>

void interfaz();
void system_pause();
void ingreso_de_datos();


int personas_registradas;
int hombres;
int mujeres;
int promedio_edad;
int maxima_edad;
int peso_menor=1000;

int main()
{ int opcion;
  
  interfaz();

  ingreso_de_datos();

  do
  { 
    system("clear");
    printf("\n     seleccione una opcion\n");
    printf("(1) Cantidad de personas registradas\n");
    printf("(2) Cantidad de hombres y mujeres registrados\n");
    printf("(3) Promedio de edad de las mujeres\n");
    printf("(4) Edad mayor entre las personas que miden más de 165 cm\n");
    printf("(5) Peso menor de la persona que tiene edad entre 22 y 25 años\n");
    printf("(6) Para salir del programa\n");
    printf("seleccion: ");
    scanf("%i", &opcion);

      switch(opcion)
      {
          case 1: system("clear");
                  printf("la cantidad de personas registradas es: %i\n\n",personas_registradas);
                  system_pause();
                  break;
          case 2: system("clear");
                  printf("la cantidad de hombres y mujeres\nregistrados es la siguiente:\nHombres: %i\nMujeres: %i\n\n",hombres,mujeres);
                  system_pause();
                  break;
          case 3: system("clear");
                  printf("el promedio de edad de las mujeres es: \npromedio: %i \n", promedio_edad);
                  system_pause();
                  break;
          case 4: system("clear");
                  printf("la edad de la persona mas alta es: %i\n\n",maxima_edad);
                  system_pause();
                  break;
          case 5: system("clear");
                  printf("el peso menor de la persona \nque tiene una edad entre 22 y 25 años es: %i\n\n",peso_menor);
                  system_pause();
                  break;
      }

  }while(opcion!=6);
    printf("has salido");
}



void ingreso_de_datos()
{ int edad,genero,promedio,peso;
  float estatura;


do{
  system("clear");
  printf("\n----------------ingreso de datos------------------\n");
  printf("ingrese una edad negativa o 0 para salir del ciclo\n");
  printf("--------------------------------------------------");
  
  printf("\ningrese su edad: ");
  scanf("%i", &edad);
    if(edad<=0)
      break;
  
  printf("ingrese su genero: \n");
  printf("(1) Hombre  (2) Mujer\n");
  scanf("%i", &genero);
    if(genero == 1)
      hombres++;
        else{
          mujeres++;
            promedio = promedio + edad;
              promedio_edad = promedio/mujeres;
      }
  printf("ingrese su estatura: \n");
  scanf("%f", &estatura);
    if(estatura>=1.65){
        if(edad > maxima_edad)
          maxima_edad = edad;
      }
  printf("ingrese su peso: \n");
  scanf("%i", &peso);
    if(edad>=22 && edad<=25){
      if(peso <= peso_menor)
        peso_menor = peso;
      }


  personas_registradas++;

  }while(edad!=0);
}


void system_pause()
{ char pausa;
    printf("presione ENTER para continuar\n");
      scanf("%c",&pausa);
        scanf("%c",&pausa);
}

void interfaz()
{   
  printf("\n \n \n \n \n \n \n \n \n \n \n \n");
    printf("<----- porfavor deslice la consola hacia\n\t   la izquierda al ejecutar\n \n \n \n \n \n \n \n \n \n \n \n");
      system_pause();

}
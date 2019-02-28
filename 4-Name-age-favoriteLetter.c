/*
* Instrucciones: Completa el código para que pida nombre, 
* edad y letra favorita del usuario y regrese la información en una sola línea. 
*/

// Nota: En C, un STRING (cadena) de caracteres, se representa poniendo el tipo de variable char <nombre_variable> y entre corchetes [] 
// el numero de caracteres que contendrá el STRING. Observa el código. 


#include<stdio.h>

int main() {
  // Pregunta: Cómo se le llama al hecho de colocar el tipo de variable y el nombre de la variable.
  // Respuesta: 
  char name[50]; //Será un string que puede almacenar un máximo de 50 caracteres. 
  int age; 
  char favoriteLetter; 
  
  printf("Please enter your name: \n"); /* Comentario: \n coloca un salto de línea*/
  scanf("%s", name);
  printf("Please enter you age: \n"); 
  scanf("%f", age);
  printf("Please enter your favorite letter:");
  scanf(" %c", favoriteLeter); 
  
  printf("All the variables input are: %s %f %c", name, age, favoritLetter); 
  
  return 0;
}

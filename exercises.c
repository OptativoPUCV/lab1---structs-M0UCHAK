#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Ejercicio 1: Encuentra el Elemento Mayor
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y devuelva el valor más grande del arreglo.
*/
int findMax(const int arr[], int size){ 
  
  int elementoMayor = arr[0];
  for(size_t i = 1; i < size; i++){
    if(arr[i] > elementoMayor) elementoMayor = arr[i];
  }
  return elementoMayor; //return 0 
}
//////////////////////////////////////////////////////////////////////////////////////////
/*
Ejercicio 2: Invertir un Arreglo
Descripción: Escribe una función que tome un arreglo y su tamaño, y luego
invierta el orden de sus elementos.
*/
void reverseArray(int arr[], int size){

  size_t right = size - 1;
  size_t left = 0;
  int aux = 0;

  while(left > right){

    int aux = arr[left];
    arr[left] = arr[right];
    arr[right] = arr[left];

    left++;
    right--;
  } 
}
//////////////////////////////////////////////////////////////////////////////////////////
/*
Ejercicio 3: Filtrar Números Pares
Descripción: Escribe una función que tome un arreglo de enteros
y su tamaño, y luego devuelva un nuevo arreglo que contenga solo
los números pares del arreglo original.
*/

int esPar(int numero){
  return numero % 2 == 0;
}

int *filterEvenNumbers(int arr[], int size, int *newSize){ 

  int *newSize = 0;

  for(size_t i = 0; i < size; i++){
    if(esPar(arr[i])) newSize++;
  }
  return newSize;; 
}
//////////////////////////////////////////////////////////////////////////////////////////
/*
Ejercicio 4: Fusión de dos Arreglos Ordenados
Descripción: Escribe una función que tome dos arreglos
ordenados y sus tamaños, y luego fusione estos dos
arreglos en un tercer arreglo también ordenado.
*/
void mergeSortedArrays(int arr1[], int size1, int arr2[], int size2,int result[]){

  size_t i = 0, r = 0, k = 0;
  
  while((i < size1) && (r < size2)){
    
    if(arr1[i] <= arr2[r]){
      result[k] = arr1[i];
      i++;
    } 
    else{  
      result[k] = arr2[r];
      r++; 
    }
    k++;
  }

  while (i < size1) {
        result[k] = arr1[i];
        i++;
        k++;
  }

  while (r < size2){
        result[k] = arr2[r];
        r++;
        k++;
  }  
}

/*
Ejercicio 5: Comprobación de Ordenación
Descripción: Escribe una función que tome un arreglo y su tamaño,
y luego devuelva 1 si el arreglo está ordenado en orden ascendente,
  0 si no está ordenado, y -1 si está ordenado en orden descendente.
*/
int checkSorted(int arr[], int size){ 
  
  int orden = 0;
    
    for (size_t i = 1; i < size; i++){
        if (arr[i] > arr[i - 1]){
            if (orden == 0) orden = 1;
            else if (orden == -1) return 0;
            
        } else if (arr[i] < arr[i - 1]){
            if (orden == 0) orden = -1;
            else if (orden == 1) return 0;
        }
    }
    return orden;
}

/*
Ejercicio 6: Información de una Biblioteca
Descripción: Vamos a representar la información de una biblioteca. En la
biblioteca, hay libros, y cada libro tiene un autor. Queremos organizar esta
información utilizando estructuras anidadas en C. Escribe la función para
inicializar la información de un libro.
*/

typedef struct {
  char nombre[50];
  int anioNacimiento;
} Autor;

typedef struct {
  char titulo[100];
  Autor autor;
  int anioPublicacion;
} Libro;

void inicializarLibro(Libro *libro, const char *titulo, const char *nombreAutor,
                      int anioNacimiento, int anioPublicacion){
  
  strncpy(libro -> titulo, titulo, sizeof(libro -> titulo));
  strncpy(libro -> autor.nombre, nombreAutor, sizeof(libro -> autor.nombre));

  libro -> autor.anioNacimiento = anioNacimiento;
  libro -> anioPublicacion = anioPublicacion;
}

/*
Ejercicio 7: Lista enlazada de números
Descripción: Escribe una función que tome un arreglo de enteros y su tamaño, y
luego cree una lista enlazada usando la estructura Nodo. Cada nodo de la lista
debe contener un número del arreglo, y los nodos deben estar enlazados en el
mismo orden que los números aparecen en el arreglo. El último nodo de la lista
debe apuntar a NULL. La función debe devolver un puntero al primer nodo de la
lista enlazada.
Recuerda reservar memoria dinámica para cada nodo usando malloc.
*/

typedef struct nodo {
  int numero;
  struct nodo *siguiente; // puntero al siguiente nodo
} Nodo;

Nodo *crearListaEnlazada(int arr[], int size){ 

  
  
  return NULL; 
}

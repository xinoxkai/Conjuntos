/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: oscar
 *
 * Created on 29 de septiembre de 2017, 12:50 AM
 */

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef int Conjunto;

void Union(Conjunto *, Conjunto *, Conjunto *,int ,int);

//using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int i;
    Conjunto miConjunto[]={1,2,3,4,5,23,12,88};
    Conjunto otroConjunto[]={6,7,8,9,0};
    Conjunto nuevo[100];
    int tamanioMiConjunto=sizeof(miConjunto)/sizeof(miConjunto[0]);
    int tamanioOtroConjunto=sizeof(otroConjunto)/sizeof(otroConjunto[0]);
    
    printf("Se unira miConjunto=");
    for(i=0;i<tamanioMiConjunto;i++)
        printf("%d", miConjunto[i]);
    puts("");
    puts("Con");
    printf("otroConjunto=");
    for(i=0;i<tamanioOtroConjunto;i++)
        printf("%d", otroConjunto[i]);
    puts("");
    puts("Solo si ambos tienen contenido\n");
    
    if(miConjunto!=NULL && otroConjunto!=NULL){
        Union(miConjunto, otroConjunto, nuevo, tamanioMiConjunto, tamanioOtroConjunto);
        printf("El nuevo conjunto es:");
        for(i=0;i<tamanioOtroConjunto+tamanioMiConjunto;i++){
            printf("%d,", nuevo[i]);
        }
    }
    getch();
    return 0;
}

void Union(Conjunto *miConjunto, Conjunto *otroConjunto, Conjunto *nuevo, int tamanioMiConjunto, int tamanioOtroConjunto){
	int i;
        
	for(i=0;i<tamanioMiConjunto;i++){
            nuevo[i]=miConjunto[i];
	}
        for(i=tamanioMiConjunto;i<tamanioOtroConjunto+tamanioMiConjunto;i++){
            nuevo[i]=otroConjunto[i-tamanioMiConjunto];
        }
           
}
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

void Union(Conjunto *, Conjunto *, Conjunto *);

//using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int i, j[]={1,2,3,4,5}, k=0;
    Conjunto miConjunto[]={1,2,3,4,5};
    Conjunto otroConjunto[]={6,7,8,9,0};
    Conjunto nuevo[10]={0};
    
    printf("Se unira miConjunto=");
    for(i=0;i<sizeof(miConjunto)/sizeof(miConjunto[0]);i++)
        printf("%d", miConjunto[i]);
    puts("");
    puts("Con");
    printf("otroConjunto=");
    for(i=0;i<sizeof(otroConjunto)/sizeof(otroConjunto[0]);i++)
        printf("%d", otroConjunto[i]);
    puts("");
    puts("Solo si ambos tienen contenido\n");
    
    if(miConjunto!=NULL && otroConjunto!=NULL){
        Union(miConjunto, otroConjunto, nuevo);
        //puts("El nuevo conjunto es:");
        /*for(i=0;i<10;i++){
            //printf("%d", nuevo[i]);
        }*/
    }
    getch();
    return 0;
}

void Union(Conjunto *miConjunto, Conjunto *otroConjunto, Conjunto *nuevo){
	int i=0, j=0, k=0;
        
	for(i=0;i<5;i++ ){
            nuevo[i]=miConjunto[i];
	}
        for(j=5;j<10;j++){
            nuevo[j]=otroConjunto[j];
        }
        
	for(k=0;k<10;k++){
            printf("%d", nuevo[i]);
        }
           
}
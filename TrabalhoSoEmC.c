#include<stdio.h>
#include<stdlib.h>

int vetor1 [100];
int vetor2 [100];
int vetor3 [100];
int vetor4 [100];
int Processo=1;


//Adiciona Processo - FIRST FIT
void AddProcessoFF(int resp){

 int tamanho=resp;
 int contador= 0;
 int inicio=0, final=1;
 
 printf("\n%d\n", tamanho);
 printf("\n%d\n", resp);

 for(int i=0; i<100; i++){
  
  if (vetor1[i] == 0){
  
  if (inicio==0){
  inicio=i;
  }
  
  contador++;
 
    if (contador == tamanho){
    final = i;
    printf("%d\n", contador);
    break;
    }
 
  } else {
 inicio=0;
 contador=0;
   }
   
 }
 
 /*Remendo
  if (Processo == 1){
  vetor1[inicio]=Processo;
  return;
  }
  */ // Consertar situação do vetor casa 0
 
  if (final == 0){
  printf ("\n Nao foi possivel adicionar o Processo. Memoria insuficiente\n");
  }
 
  for (int j=inicio; j<=final; j++){
  vetor1[j]=Processo;
  }
}



void AddProcessoBF(int resp){









}


void AddProcessoWF(int resp){


}


void AddProcessoNF(int resp){



}







//Remove Processo
void RemoveProcesso(int resp){

}



//Imprime Memória
void ImprimeMemoria(){
 int i,j;
 
  printf ("Memoria First Fit:\n");
  for(j=0; j<100; j++){
    printf("%d", vetor1[j]); 
  }
  printf("\n\n");
  
  printf ("Memoria Best Fit:\n");
    for(j=0; j<100; j++){
    printf("%d", vetor2[j]); 
  }
  printf("\n\n");
  
  printf ("Memoria Worst Fit:\n");
    for(j=0; j<100; j++){
    printf("%d", vetor3[j]); 
  }
  printf("\n\n");
  
  printf ("Memoria Circular Fit:\n");
    for(j=0; j<100; j++){
    printf("%d", vetor4[j]); 
  }
  printf("\n\n");


}






int main(){

 vetor1[17]= -1;

 int option = 1, tamanho;

 while (option != 5){
 
 printf("\nOpção 1 - Inserir Novo Processos na memória\n");
 printf("Opção 2 - Remover um processo da memória\n");
 printf("Opção 3 - Estado da memória\n");
 printf("Opção 4 - Terminar Programa\n");
 
 printf("O que gostaria de fazer?\n");
 scanf ("%d", &option);
 

 
   switch (option){
    case 1 :
    
     printf("\n Qual será o tamanho da memoria?\n");
     scanf("%d", &tamanho);
    
     AddProcessoFF(tamanho);
     AddProcessoBF(tamanho);
     AddProcessoWF(tamanho);
     AddProcessoNF(tamanho);
     
     Processo++;
    break;
     
    case 2 :
      
     
    break; 
   
   case 3 :
   
     ImprimeMemoria();
    
   break;
   
   case 4 :
    exit(-1);
   break;
   
   }
   
 	
 }

}







#include<stdio.h>
#include<stdlib.h>

int vetor [20];
int vetorCoordenada[20];
int num=0;
int menor=100, atual=-1;
int gordura=0;


int main(){

 vetor[5]=-1;
 vetor[10]=-1;

 int contador= 0;
 int inicio=-1, final=-1, processo=2;
 int resposta;
 int gatilho=0;
 
  for (int p=0; p<20; p++){
   vetorCoordenada[p]=-1;
  }
 
 // Imprime memoria
 for(int j=0; j<20; j++){
 printf("%d ", vetor[j]);
 }
 
 //
 
  printf("\nDigite o tamanho: \n");
  scanf ("%d", &resposta);
 
 //
 
 
 
 for(int i=0; i<20; i++){
  
  if (vetor[i] == 0){
  
  if(inicio==-1){
  inicio=i;
  }
  
  contador++;
  
  //Código muda a partir daqui
 
    if (contador >= resposta || i==19){
    
    final = i;
    
    //numero maximo
     if (i==19){
     
    vetorCoordenada[num]=inicio;
    vetorCoordenada[num+1]=final;    
         
     }
    //numero maximo - final 
     
    }
 
  } else {
  
      if(final !=-1){
      
    vetorCoordenada[num]=inicio;
    vetorCoordenada[num+1]=final;
    
    num=num+2;
    }
    
    
 //Zera o inicio e final
 contador=0;
 inicio=-1;
 final=-1;
    
   }
   
  }
  
  
  
  for(int g=0; g<20; g=g+2){
  
  atual= vetorCoordenada[g+1] - vetorCoordenada[g];
  printf ("\nPasso: %d", g);
  printf ("\nAtual: %d\n", atual);
  
  //nao ta entrando no if
  if (atual < menor && atual != 0){
  menor= atual;
  inicio= vetorCoordenada[g];
  final= vetorCoordenada[g+1];
  printf ("Menor: %d", menor);
  }
  
  
  
  }
  
  //Memoria não é grande o suficiente
  if(resposta > menor+gordura){
  printf("\nNao foi possivel adicionar o Processo. Memoria Insuficiente");
  return 0;
  }
  //
  
  
  //Aloca Processo na memoria
  printf("\nInicio: %d", inicio);
  printf("\nFinal: %d", final);
  
  
  //Definir o espaço além do necessário
  gordura= menor-resposta;
  
  
  
  for (int d=inicio; d<final-gordura; d++){
   vetor[d]=processo;
  }
  
  
  
  
  
  
  
  
  //imprime Vetor Coordenada
  for (int p=0; p<20; p=p+2){
   printf("\n%d ", vetorCoordenada[p]);
   printf("%d", vetorCoordenada[p+1]);
  }
  
  printf("\nInicio: %d\n", inicio);
  printf("Final: %d\n", final);
  printf("Menor: %d\n\n", menor);
  
  // Imprime memoria
 for(int j=0; j<20; j++){
 printf("%d ", vetor[j]);
 }
 
 }
  
  


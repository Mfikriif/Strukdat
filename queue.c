#include "boolean.h"
#include "queue.h"

/* Program   : tqueue.h */
/* Deskripsi : File BODY modul Queue 1 */
/* NIM/Nama  : 2406012140115/Muhammad Fikri Firdaus */
/* Tanggal   : 22/09/2023 */
/***********************************/

void createQueue(tqueue *Q){
    /*Kamus lokal*/
    int i;

    /*Algoritma*/
    for(i = 1; i <= 5; i++){
        (*Q).wadah[i]= '$';
    }
    (*Q).head = 0;
    (*Q).tail = 0;
}

char infoHead(tqueue Q){
  /*Kamus lokal*/

  /*Algoritma*/
  if(isEmptyQueue(Q)){
    return isEmptyQueue(Q);
  }else{
    return (Q).wadah[(Q).head];
  }
}

char infoTail(tqueue Q){
  /*Kamus lokal*/

  /*Algoritma*/
  if(isEmptyQueue(Q)){
    return isEmptyQueue(Q);
  }else{
    return (Q).wadah[(Q).tail];
  }
}

int sizeQueue(tqueue Q){
  return tail(Q);
}

boolean isEmptyQueue(tqueue Q){
    return (Q).head == 0 && (Q).tail == 0;
}

boolean isFullQueue(tqueue Q){
    return (Q).tail == 5;
}

boolean isOneElement(tqueue Q){
  return (Q).head && (Q).tail == 1;
}

void enqueue(tqueue *Q, char E){
  /*Kamus lokal*/

  /*Algoritma*/ 
  if(isFullQueue(*Q)){
    printf("Queue is full ");
  }else{
    if(isEmptyQueue(*Q)){
        head(*Q) = head(*Q) + 1;
    }
    tail(*Q) = tail(*Q) + 1;
    (*Q).wadah[(*Q).tail] = E;
  }

}


void dequeue(tqueue *Q, char *E){

  int i;

  if(isEmptyQueue(*Q)){
    printf("Queue is empty");
  }else{
    (*E) = infoHead(*Q);
    if(isOneElement(*Q)){
      createQueue(Q);
    }else{
      for (i = 1; i < sizeQueue(*Q);i++){
        (*Q).wadah[i] = (*Q).wadah[i + 1];
      }
      (*Q).wadah [(*Q).tail] = '$';
      (*Q).tail = (*Q).tail - 1;
    }
  }
}

void printQueue(tqueue Q){

  /*Kamus lokal*/
  int i ;

  /*Algoritma*/
  for(i = 1; i <= 5; i++){
    printf("%c ", (Q).wadah[i]);
  } 
  printf("\n");
}

void viewQueue(tqueue Q){

  /*Kamus lokal*/
  int i;

  /*Algoritma*/
  for(i = 1; i <= (Q).tail; i++){
    printf("%c ", (Q).wadah[i]);
  }
  printf("\n");

}

int maxlength(tqueue Q1, tqueue Q2){
  /*Kamus lokal*/

  /*Algoritma*/
  if(sizeQueue(Q1) > sizeQueue(Q2)){
    return sizeQueue(Q1);
  }else{
    return sizeQueue(Q2);
  }
}

void enqueue2(tqueue *Q1, tqueue *Q2,char E){
  /*Kamus lokal*/

  /*Algoritma*/
  if(sizeQueue(*Q1) <= sizeQueue(*Q2)){
    enqueue(Q1,E);
  }else{
    enqueue(Q2, E);
  }   
}

void dequeue2(tqueue *Q1, tqueue *Q2, char *E){
  /*Kamus lokal*/

  /*Algoritma*/
  if(sizeQueue(*Q1) >= sizeQueue(*Q2)){
    dequeue(Q1,E);
  }else{
    dequeue(Q2,E);
  }

}


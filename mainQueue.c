#include <stdio.h>
#include "boolean.h"
#include "queue.h"
#include "queue.c"

/* Program   : tqueue.h */
/* Deskripsi : File main Queue */
/* NIM/Nama  : 2406012140115/Muhammad Fikri Firdaus */
/* Tanggal   : 22/09/2023 */
/***********************************/

int main(){

    /*Kamus lokal*/ 
    tqueue A;
    tqueue B;
    char E;


    /*Algoritma*/
    createQueue(&A);
    createQueue(&B);
    enqueue(&A,'F');
    enqueue(&A,'I');
    enqueue(&A,'K');
    enqueue(&B,'B');
    enqueue(&B,'A');
    printQueue(A);
    printQueue(B);
    printf("enqueue2\n");
    enqueue2(&A,&B,'R');
    printQueue(A);
    printQueue(B);
    enqueue(&B,'Z');
    printQueue(A);
    printQueue(B);
    dequeue2(&A,&B, &E);
    printQueue(A);
    printQueue(B);
    printf("Head Queue 1 is : %c",infoHead(A));
    printf("\nHead Queue 2 is : %c",infoHead(B));
    printf("\nTail Queue 1 is : %c",infoTail(A));
    printf("\nTail Queue 2 is : %c",infoTail(B));
    dequeue(&A, &E);
    dequeue(&A, &E);
    printf("\n");
    printQueue(A);
    printf("Is one element queue 1: %s", isOneElement(A)?"true":"false");
    printf("\nsize of queue 1 : %d",sizeQueue(A));
    printf("\nsize of queue 2 : %d",sizeQueue(B));
    dequeue2(&A,&B,&E);
    printf("\n");
    printQueue(A);
    printQueue(B);
    viewQueue(A);
    viewQueue(B);
    printf("max length of queue is : %d", maxlength(A,B));
    printf("\n");
    enqueue(&A,'I');
    enqueue(&A,'R');
    enqueue(&A,'I');
    enqueue(&A,'N');
    enqueue(&A,'S');
    printf("\n");
    printQueue(A);
    
        
    return 0;
}
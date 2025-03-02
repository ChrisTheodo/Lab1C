#include <stdio.h>
#define n dimension

void qLine(int *n);
void makeLineEven(int *n);
void makeLineOdd(int *n);

int main(void){
    int dimension;
    printf("Please enter dimensions: "); scanf("%d", &dimension);
    qLine(&n);
    if(n%2==0){makeLineEven(&n);}
    else{makeLineOdd(&n);}
    printf("\n");
    qLine(&n);
    printf("\n");
}   

void qLine(int *n){int i; for (i=0; i<*n; i++){printf("q");}}
void makeLineOdd(int *n){
    int i,j; int l = *n -2;
    for (j=0; j<l; j++){
        printf("\na");
        for(i=0; i<j; i++){printf("-");}
        printf("*");
        for(i=0; i<l-j-1; i++){printf("-");}
        printf("a");
    }
}
void makeLineEven(int *n){
    int i,j; int l = *n -2;
    for (j=0; j<l; j++){
        printf("\na");
        for(i=0; i<l-j-1; i++){printf("-");}
        printf("*");
        for(i=0; i<j; i++){printf("-");}
        printf("a");
    }
}

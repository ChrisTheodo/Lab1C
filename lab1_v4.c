#include <stdio.h>

int getChoice(void );
int getSize(void);
void getChar(char *charChoicePTR);
void charLine(int length, char charChoice);
void dashLine(int length, char charChoice);
void dashLineNum(int length, int numChoice);
void numLine(int length, int numChoice);
void printSquare(int size);
int printRhombus(int size);
void printRightTriangle(int size);
void printTriangle(int size);

int main () {
    int choice = 1;
    int size;
    char charChoice;
    
    for (; choice != -1 ; ) {
        choice = getChoice() ;                                     /* Get user choice */
        if (choice > -1 ) {                                        /* if not quit */
            size = getSize() ;                                     /* get size of shape */                                     
            
            if (choice==0) printSquare(size);          /* if 0, display square */
            if (choice==1) printRhombus(size);         /* if 1, display rhombus */
            if (choice==2) printRightTriangle(size);   /* if 2, display rhombus */
            if (choice==3) printTriangle(size);        /* if 3, display rhombus */

        }
    }
    return 0;
}

int getChoice(void) {
    int choice;
    printf("\n\n[shapes] 0: square, 1: rhombus, 2: righttriangle, 3: triangle, -1: exit\n");
    printf("giv shape choice: ");
    scanf("%d", &choice);
    return choice;
}

int getSize(void){
    int size;
    printf("giv size: "); scanf("%d", &size);
    return size;
}

void getChar(char *charChoicePTR){
    printf("giv character: "); scanf(" %c", charChoicePTR);
}

void charLine(int length, char charChoice){
    for (int i=0; i<length; i++){printf("%c", charChoice);}
}

void dashLine(int length, char charChoice){
    printf("%c", charChoice);
    for (int i=0; i<length-2; i++){printf("-");}
    printf("%c", charChoice);
}

void dashLineNum(int length, int numChoice){
    printf("%d", numChoice);
    for (int i=0; i<length-2; i++){printf("-");}
    printf("%d", numChoice);
}

void numLine(int length, int numChoice){
    for (int i=0; i<length; i++){printf("%d", numChoice);}
}

void printSquare(int size) {
    numLine(size, 1);printf("\n"); 
    for (int i=2; i<size; i++){dashLineNum(size, i);printf("\n");}
    numLine(size, size);
}

int printRhombus(int size) {
    for(int i=0; i<size/2; i++){
        for(int j=0; j<size/2-i; j++){printf("-");}
        printf("%d", i+1);
        for(int j=0; j<2*i -1; j++){printf("-");}
        if (i!=0){printf("%d", i+1);}
        printf("\n");
    }
    printf("%d", size/2+1);
    for(int j=0; j<size-2; j++){printf("-");}
    printf("%d\n", size/2+1);
    
    for (int i=size/2-1; i>-1; i--) {
        for (int j=0; j < size/2-i; j++) {printf("-");}
        printf("%d", size-i);
        for (int j=0; j<2*i-1; j++) {printf("-");}
        if (i != 0) {printf("%d", size-i);}
        printf("\n");
    }
    return 0;
}

void printRightTriangle(int size) {
    printf("%d\n", 1);
    for (int i=2; i<size; i++)
        {dashLineNum(i, i);printf("\n");}
    numLine(size, size);
}

void printTriangle(int size) {
    for (int i=0; i<size-1; i++){
        for (int j=0;j<size-i; j++){printf(" ");}
        if (i==0){printf("%d", i+1);}
        else {dashLineNum(2*i+1, i+1);}
        printf("\n");
    }
    printf(" ");
    numLine(size, size);numLine(size, size);
}

#include <stdio.h>

int getChoice(void );
int getSize(void);
void getChar(char *charChoicePTR);
void charLine(int length, char charChoice);
void dashLine(int length, char charChoice);
void printSquare(int size,char charChoice);
int printRhombus(int size, char charChoice);
void printRightTriangle(int size, char charChoice);
void printTriangle(int size, char charChoice);

int main () {
    int choice = 1;
    int size;
    char charChoice;
    
    for (; choice != -1 ; ) {
        choice = getChoice() ;                                     /* Get user choice */
        if (choice > -1 ) {                                        /* if not quit */
            size = getSize() ;                                     /* get size of shape */
            getChar(&charChoice);   //to kano me pointer giati den mporo na kano return char                                       
            
            if (choice==0) printSquare(size, charChoice);          /* if 0, display square */
            if (choice==1) printRhombus(size, charChoice);         /* if 1, display rhombus */
            if (choice==2) printRightTriangle(size, charChoice);   /* if 2, display rhombus */
            if (choice==3) printTriangle(size, charChoice);        /* if 3, display rhombus */

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

void printSquare(int size, char charChoice) {
    charLine(size, charChoice);printf("\n"); 
    for (int i=0; i<size-2; i++){dashLine(size, charChoice);printf("\n");}
    charLine(size, charChoice);
}

int printRhombus(int size, char charChoice) {
    for(int i=0; i<size/2; i++){
        for(int j=0; j<size/2-i; j++){printf("-");}
        printf("%c", charChoice);
        for(int j=0; j<2*i -1; j++){printf("-");}
        if (i!=0){printf("%c", charChoice);}
        printf("\n");
    }
    printf("%c", charChoice);
    for(int j=0; j<size-2; j++){printf("-");}
    printf("%c\n", charChoice);
    
    for (int i=size/2-1; i>-1; i--) {
        for (int j=0; j < size/2-i; j++) {printf("-");}
        printf("%c", charChoice);
        for (int j=0; j<2*i-1; j++) {printf("-");}
        if (i != 0) {printf("%c", charChoice);}
        printf("\n");
    }
    return 0;
}

void printRightTriangle(int size, char charChoice) {
    printf("%c\n", charChoice);
    for (int i=2; i<size; i++)
        {dashLine(i, charChoice);printf("\n");}
    charLine(size, charChoice);
}

void printTriangle(int size, char charChoice) {
    for (int i=0; i<size-1; i++){
        for (int j=0;j<size-i; j++){printf(" ");}
        if (i==0){printf("%c", charChoice);}
        else {dashLine(2*i+1, charChoice);}
        printf("\n");
    }
    printf(" ");
    charLine(size, charChoice);charLine(size, charChoice);
}

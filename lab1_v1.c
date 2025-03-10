#include <stdio.h>

int getChoice(void );
int getSize(void);
void getChar(char *charChoicePTR);
int printSquare(int size,char charChoice);
int printRhombus(int size, char charChoice);
int printRightTriangle(int size, char charChoice);
int printTriangle(int size, char charChoice);

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
    printf("[shapes] 0: square, 1: rhombus, 2: righttriangle, 3: triangle, -1: exit\n");
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

int printSquare(int size, char charChoice) {
    printf("printSquare\n");
    printf("size = %d, charChoice = %c\n\n", size,  charChoice);
    return 0;
}

int printRhombus(int size, char charChoice) {
    printf("printRhombus\n");
    printf("size = %d, charChoice = %c\n\n", size, charChoice);
    return 0;
}

int printRightTriangle(int size, char charChoice) {
    printf("printRightTriangle\n");
    printf("size = %d, charChoice = %c\n\n", size, charChoice);
    return 0;
}

int printTriangle(int size, char charChoice) {
    printf("printTriangle\n");
    printf("size = %d, charChoice = %c\n\n", size, charChoice);
    return 0;
}
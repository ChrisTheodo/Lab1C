#include <stdio.h>

int getChoice(void );
int getSize(void);
int getChar(void);
int printSquare(int size,char charChoice);
int printRhombus(int size, char charChoice);
int printRightTriangle(int size, char charChoice);
int printTriangle(int size, char charChoice);

int main () {
    int choice = 1;
    int size;
    char charChoice;
    
    for (; choice != -1 ; ) {
        choice = getChoice() ;                                               /* Get user choice */
        if (choice > -1 ) {                                                  /* if not quit */
            size = getSize() ;                                               /* get size of shape */
            charChoice = getChar();                                          /* get character of shape*/
            if (choice==0) printSquare(size = 3, charChoice = '#');          /* if 0, display square */
            if (choice==1) printRhombus(size = 3, charChoice = '#');         /* if 1, display rhombus */
            if (choice==2) printRightTriangle(size = 3, charChoice = '#');   /* if 2, display rhombus */
            if (choice==3) printTriangle(size = 3, charChoice = '#');        /* if 3, display rhombus */

        }
    }
    return 0;
}

int getChoice(void) {
    printf("getChoice\n");
    return 0;
}

int getSize(void){
    printf("getSize\n");
    return 0;
}

int getChar(void){
    printf("getChar\n");
    return 0;
}

int printSquare(int size, char charChoice) {
    printf("printSquare\n");
    printf("size = %d, charChoice = %c\n", size,  charChoice);
    return 0;
}

int printRhombus(int size, char charChoice) {
    printf("printRhombus\n");
    printf("size = %d, charChoice = %c\n", size, charChoice);
    return 0;
}

int printRightTriangle(int size, char charChoice) {
    printf("printRightTriangle\n");
    printf("size = %d, charChoice = %c\n", size, charChoice);
    return 0;
}

int printTriangle(int size, char charChoice) {
    printf("printTriangle\n");
    printf("size = %d, charChoice = %c\n", size, charChoice);
    return 0;
}
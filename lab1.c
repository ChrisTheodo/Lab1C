#include <stdio.h>

void printfivechars(void); 
void printnchars(int n, char ch);
void squarefive(void); 
void squaren(int n);

int main(void){    
    
    int arithmosThaumastikon, arithmosIson, arithmosGrammon;

    //1.1
    printf("1.1: \n");
    printfivechars();

    //1.2
    printf("\n\n1.2: \n");
    printnchars(8, '='); printnchars(22, '!');

    //1.3
    printf("\n\n1.3: \n");
    printf("posa '=' thes: "); scanf("%d", &arithmosIson); 
    printf("posa '!' thes: "); scanf("%d", &arithmosThaumastikon); 
    printnchars(arithmosIson, '='); printnchars(arithmosThaumastikon, '!');
    
    //1.4
    printf("\n\n1.4: \n");
    squarefive();

    //1.5
    printf("\n\n1.5: \n");
    printf("poses grammes/sthles thes: "); scanf("%d", &arithmosGrammon);
    squaren(arithmosGrammon);

}

void printfivechars(void){printf("\n=====");} 
void printnchars(int n, char ch){
    int i = 0;
    for (i=0; i<n; i++){printf("%c", ch);}
    printf("\n");
}
void squarefive(void){int i; for (i=0; i<5; i++){printfivechars();}}
void squaren(int n){int i; for(i=0;i<n;i++){printnchars(n, '!');}}
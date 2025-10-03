#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

void clean(){
     #ifdef _WIN32
        system("cls");
     #else
        system("clear");
     #endif
}

void cleanbffr(){
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int choice;
    char continuar;  
    float raio, lado, base, base2, altura, diagonal_maior, diagonal_menor = 0;
    float Area = 0;
    
    do {
        clean();
        printf("escolha a figura que voce deseja calcular a area:\n");
        printf("1 - circulo\n");  
        printf("2 - quadrado\n");
        printf("3 - retangulo\n");
        printf("4 - triangulo\n");
        printf("5 - losango\n");
        printf("6 - trapezio\n");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                printf("digite o valor do raio:\n");
                scanf("%f", &raio);
                if (raio > 0){
                    Area = PI * raio * raio;
                    printf("a area do circulo eh: %.2f\n", Area);
                }
                else {
                    printf("o valor deve ser positivo\n");  
                }
                break;
                
            case 2:
                printf("digite o valor do lado:\n");
                scanf("%f", &lado);
                if (lado > 0) {
                    Area = lado * lado;
                    printf("a area do quadrado eh : %.2f\n", Area);
                }
                else {
                    printf("o valor deve ser positivo\n");  
                }
                break;
                
            case 3:
                printf("digite o valor da base:\n");
                scanf("%f", &base);
                printf("digite o valor da altura:\n");
                scanf("%f", &altura);
                if (base > 0 && altura > 0){
                    Area = base * altura;
                    printf("a area do retangulo eh : %.2f\n", Area);
                }
                else {
                    printf("o valor deve ser positivo\n");  
                }
                break;
                
            case 4:
                printf("digite o valor da base:\n");
                scanf("%f", &base);
                printf("digite o valor da altura: \n");
                scanf("%f", &altura);
                if (base > 0 && altura > 0){
                    Area = (base * altura)/2.0;
                    printf("a area do triangulo eh : %.2f\n", Area);
                }
                else {
                    printf("o valor deve ser positivo\n");  
                }
                break;
                
            case 5:
                printf("digite o valor da diagonal maior:\n");
                scanf("%f", &diagonal_maior);
                printf("digite o valor da diagonal menor:\n");
                scanf("%f", &diagonal_menor);
                if (diagonal_maior > 0 && diagonal_menor > 0){
                    Area = (diagonal_maior * diagonal_menor)/2.0;
                    printf("a area do losango eh : %.2f\n", Area);
                }
                else {
                    printf("o valor deve ser positivo\n");  
                }
                break;
                
            case 6:
                printf("digite o valor da base maior:\n");
                scanf("%f", &base);
                printf("digite o valor da base menor:\n");
                scanf("%f", &base2);
                printf("digite o valor da altura:\n");
                scanf("%f", &altura);
                if (base > 0 && base2 > 0 && altura > 0){
                    Area = ((base + base2) * altura)/2.0;
                    printf("a area do trapezio eh : %.2f\n", Area);
                }
                else {
                    printf("o valor deve ser positivo\n");  
                }
                break;
                
            default:
                printf("opcao invalida\n");
                break;
        }
        
        printf("\ndeseja calcular outra area? (s/n): ");
        cleanbffr();
        scanf("%c", &continuar);
        
    } while (continuar == 's' || continuar == 'S');  
    
    clean();
    printf("obrigado\n");
    return 0;
}
//Projeto Conversor Hexa 
//Autor:Everton Rodrigo Pereira da Silva
//Data:24/08/2024
//*********************************************************************************
//bibliotecas
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
//*********************************************************************************
// const 
#define zerar 0 
//*********************************************************************************
// variaveis globais
int horasT, minT, horasM, minM, horasE, minE, horasP, minP, ipH, ipM, opc;
//*********************************************************************************
//protype of functions

//Function to validate and correct a minututes
int correcaoMinuto(int *minuto);
//// Function to validate and correct for hours
void correcaoHoras(int *number);
//*********************************************************************************
// Main function
int main() {
    
  

    while (1){
        printf("_______Menu________\n");
        printf("1.zerar horimetro\n");
        printf("2.Escrever horimetro\n");
        printf("3.finalizar Programa\n");
        printf(">>>>>> ");
        scanf("%d",&opc);

      switch (opc){


      case 1 :

      printf("Gerando codigo para zerar horimetro\n");
      system ("pause");
      printf("w 16%050d\n",zerar);
      system("pause");
      system("cls");
      break;



      case 2 : 

        // Get user input for total hours
        printf("Digite total hour\n");
        printf(">>>>>");
        
        correcaoHoras(&horasT);
        
        // Get user input for total minutes
        printf("Digite total minute\n");
        printf(">>>>>");
        
        correcaoMinuto(&minT);

        // Get user input for wet hours
        printf("Digite wet hour\n");
        printf(">>>>>");
        correcaoHoras(&horasM);
        
        // Get user input for wet minutes
        printf("Digite wet minute\n");
        printf(">>>>>");
        correcaoMinuto(&minM);  

        // Get user input for Edgun hours
        printf("Digite as endgun hour\n");
        printf(">>>>>");
        correcaoHoras(&horasE);

        // Get user input for Edgun minutes
        printf("Digite endgun minute\n");
        printf(">>>>>");
        correcaoMinuto(&minE);

        // Get user input for Pump hours
        printf("Digite pump hour\n");
        printf(">>>>>");
        correcaoHoras(&horasP);
        
        // Get user input for Pump minutes
        printf("Digite pump minute\n");
        printf(">>>>>");
        correcaoMinuto(&minP);
        
        // Get user input for injection Pump hours
        printf("Digite injection pump hour\n");
        printf(">>>>>");
		correcaoHoras(&ipH);
		
		// Get user input for Pump minutes
        printf("Digite pump minute\n");
        printf(">>>>>");
        correcaoMinuto(&ipM);
		
        system("pause");

        // Print the values in hexadecimal format
        printf("w 16%08X",horasT);
        printf("%02X",minT);
        printf("%08X",horasM);
        printf("%02X",minM);
        printf("%08X",horasE);
        printf("%02X",minE);
        printf("%08X",horasP);
        printf("%02X",minP);
        printf("%08X",ipH);
        printf("%02X\n",ipM);
        
        system("pause");
        system("cls");
        break;

          case 3 : 
          exit(0);
      break ; 

      default :
      printf("Opcao invalida! Digite uma opcao valida\n");
      printf(">>>>>");
    }// end switch
  }// end while 

    return 0;
}
//******************************************************************************************************************
// Function to validate and correct a number
//void correcaoNumero(int *num) {
    
//*****************************************************************************************************************
// Function to validate and correct a minute
int correcaoMinuto(int *minuto) {
    char c;
    while (1) {
        printf("Digite um valor entre 0 e 59: ");
        if (scanf("%d%c", minuto, &c) == 2 && c == '\n') {
            if (*minuto >= 0 && *minuto <= 59) {
                return *minuto;
            } else {
                printf("Valor invalido! Digite um valor entre 0 e 59.\n");
            }
        } else {
            printf("Entrada invalida. Por favor, digite apenas numeros inteiros.\n");
            while (getchar() != '\n'); // Limpa o buffer de entrada
        }
    }
}
//*****************************************************************************************************************
// Function to validate and correct for hours
void correcaoHoras(int *number) {
  char c;
  while (1) {
      
      if (scanf("%d%c", number, &c) == 2 && c == '\n') {
          return;
      } else {
          printf("Entrada invalida! Digite um numero inteiro:\n");
          // Limpar o buffer de entrada
          while ((c = getchar()) != '\n' && c != EOF);
      }
  }
}
//*****************************************************************************************************************



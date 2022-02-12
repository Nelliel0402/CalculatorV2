#include <stdio.h>
#include <stdlib.h>
int main(void){
int num1,num2,op;
float num3,num4;
printf("\n      Calculator V2                                           \n");
printf("  ▄▄▄▄         ▀▀█      ▄▀▀    ▀           █            ## ##   \n");
printf(" █▀   ▀  ▄▄▄     █    ▄▄█▄▄  ▄▄▄     ▄▄▄   █ ▄▄     ########### \n");
printf(" ▀█▄▄▄  █▀  █    █      █      █    █   ▀  █▀  █      ##  ##    \n");
printf("     ▀█ █▀▀▀▀    █      █      █     ▀▀▀▄  █   █   ###########  \n");
printf(" ▀▄▄▄█▀ ▀█▄▄▀    ▀▄▄    █    ▄▄█▄▄  ▀▄▄▄▀  █   █     ##  ##     \n");
printf("\tCreator by Sarah and Tsugami\n\t\t\t       Calculator V2 \n");
printf("#$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$4$$$$$\n");
printf("#$$$$$$$$$$$$$$$$$$>>>Are You Rooted?<<<$$$$$$$$$$$$$$$4$$$$$\n");
printf("#$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$4$$$$$\n");
printf("#\n#\tEscolha uma opcao abaixo: \n");
printf("#\n#\t1==> Somar \n#\n#\t2==> Subtrair \n#\n#\t3==> Multiplicar \n#\n#\t4==> Dividir \n#\n#\t5==> Resto \n#\n#\t6==> ???;) \n#");
printf("\n#Digite o numero da opcao aqui: ");
    scanf("%i",&op);

if(1 == op){
printf("# \n#Digite o valor do primeiro numero: ");
    scanf("%d",&num1);
printf("# \n#Digite o valor do segundo numero: ");
    scanf("%d",&num2);
num1 = num1 + num2;
    system("clear");
printf("#\n#\t### RESULTADO DA SOMA: %d ###\n#\n",num1);
}
  
if(2 == op){
printf("#\n#Digite o valor do primeiro numero: ");
    scanf("%d",&num1);
printf("#\n#Digite o valor do segundo numero: ");
    scanf("%d",&num2);
num1 = num1 - num2;
    system("clear");
printf("#\n#\t### RESULTADO DA SUBTRACAO: %d ###\n#\n",num1);
}

if(3 == op){
printf("#\n#Digite o valor do primeiro numero: ");
    scanf("%d",&num1);
printf("#\n#Digite o valor do segundo numero: ");
    scanf("%d",&num2);
num1 = num1 * num2;
    system("clear");
printf("#\n#\t### RESULTADO DA MULTIPLICACAO: %d ###\n#\n",num1);
}

if(4 == op){
printf("#\n#Digite o valor do primeiro numero: ");
    scanf("%f",&num3);
printf("#\n#Digite o valor do segundo numero: ");
    scanf("%f",&num4);
num3 = num3 / num4;
    system("clear");
printf("#\n#\t### RESULTADO DA DIVISAO: %1.1f ###\n#\n",num3);
}

if(5 == op){
printf("#\n#Digite o valor do primeiro numero: ");
    scanf("%d",&num1);
printf("#\n#Digite o valor do segundo numero: ");
    scanf("%d",&num2);
num1 = num1 % num2;
    system("clear");
printf("#\n#\t### RESTO DA DIVISAO: %d ###\n#\n",num1);
}

if(6 == op){
    system("./17.sh");
}
else if(op >= 7){
    system("clear");
printf("#\n#\t\"OPCAO INVALIDA\"\n#\n");

}

    system("./exec.sh");

        return 0;

}

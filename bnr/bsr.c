#include <stdio.h>
#include <stdlib.h>
int main(){
int op2;

printf("#\tVoce deseja fazer uma nova consulta?\n# ");
printf("\n#\t1==> Sim\n#\n#\t2==> Nao\n#");
printf("\n#Digite o numero da opcao aqui: ");
    scanf("%i",&op2);

if(1==op2){
    system("clear");
system("./calculadora");
}

else if(2==op2){
    system("clear");
system("cat credits.txt");
}

else if(op2>=3){
    system("clear");
printf("#\n#\t\"OPCAO INVALIDA\"\n#\n");

    system("./bsr");
}
            return 0;

}

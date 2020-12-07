#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
      /** Aqui são as variáveis que utilizamos para armazenar, modificar e retornar dados*/

    int diaC, mesC, diaS, mesS, aux=0, i=0, j=0, option, numreserva, quarto=0, aux2=0, aux3=0, dias=0, aux4=0;
    float conta_final=0, precoq=0;
    char nome[100], reservasn[100];
    setlocale(LC_ALL, "Portuguese"); /**Comando utilizado para incluir a linguagem portuguesa e permitir uso de acento*/

    /**Aqui está o menu de opçôes do hotel*/

    printf("\n Bem vindo ao Paris xv hotel! Uma experiência inesquecível para te mostrar como a vida pode ser boa! ");
    printf("\n Caro cliente, por favor digite um nuúmero para uma opção: \n \n");

    printf("1: O que o nosso hotel oferece para o seu conforto e estadia? \n");
    printf("2: tipos de quartos: \n");
    printf("3: preços dos quartos: \n");
    printf("4: Fazer uma reserva: \n");
    printf("5: Donos do hotel/site: \n");
    printf("6: sair do menu \n");

    /** Usamos o switch para pegar as opções que o usuário digitar e também a entrada de dados*/

    while(aux!=6){
        aux++;
    scanf("%d",&option);

    switch(option)
    {
    /** case usado para mostrar ao cliente aas opções de lazer e descanso que nosso hotel oferece*/

    case 1: printf(" \n Nosso hotel oferece o máximo de conforto e diversão, que vão desde áres de lazer para crianças á pubs, restaurantes e até cassino para adultos. Nossa imensa variedade de quartos permite que você tenha o máximo de conforto, diversão e custo benefício reunidos em um único lugar! \n");
    printf("\n");
    printf("1: O que o nosso hotel oferece para o seu conforto e estadia? \n");
    printf("2: tipos de quartos: \n");
    printf("3: preços dos quartos: \n");
    printf("4: Fazer uma reserva: \n");
    printf("5: Donos do hotel/site: \n");
    printf("6: sair do menu \n");

            break;
    /**Case utilizado para mostrar ao cliente o que cada quarto tem a oferecer de opções de lazer e conforto podendo alguns
    benefícios do quarto se estenderem para fora do hotel inclusive*/

    case 2: printf("\n QUARTO SOLTEIRO: É o quarto ideal para você que quer passar um tempo sozinho consigo mesmo sem gastar mais do que o necessário mas ainda sim mantendo o conforto e o luxo. \n ");
            printf("\n QUARTO DE CASAL: É o quarto ideal para você que quer passar um tempo com a sua(o) parceira(o) ou para você que quer uma cama e quarto mais espaçoso para atender todas as suas necessidades. \n");
            printf("\n QUARTO DELUXE: Quarto perfeito para você ter uma experiência inesquecível! Cama enorme, escritório para trabalho, acesso as áreas vips do hotel, cafeteira no quarto, hidromassagem, tv de 50 polegadas e muito mais! \n");
            printf("\n QUARTO PRESIDENCIAL: Isso é um quarto? Não mesmo, é o paraíso! Localizado no último andar com vista para o mar, piscina exclusiva, 3 banheiros todos com hidro-massagem, cama king-size com massageador e televisão de 70 polegadas além do acesso as áreas vips do hotel \n");
            printf("\n");
            printf("1: O que o nosso hotel oferece para o seu conforto e estadia? \n");
            printf("2: tipos de quartos: \n");
            printf("3: preços dos quartos: \n");
            printf("4: Fazer uma reserva: \n");
            printf("5: Donos do hotel/site: \n");
            printf("6: sair do menu \n");
            break;

    /** Case utilizado para mostrar ao cliente os valoresda estadia diária por quarto*/

    case 3: printf("\n QUARTO DE SOLTEIRO: R$400 diária \n");
            printf("\n QUARTO DE CASAL: R$800 diária \n");
            printf("\n QUARTO DELUXE: R$1500 diária \n");
            printf("\n QUARTO PRESIDENCIAL: R$3000 diária \n");
            printf("\n");
            printf("1: O que o nosso hotel oferece para o seu conforto e estadia? \n");
            printf("2: tipos de quartos: \n");
            printf("3: preços dos quartos: \n");
            printf("4: Fazer uma reserva: \n");
            printf("5: Donos do hotel/site: \n");
            printf("6: sair do menu \n");
            break;

    /** case usado para ler as informaçôes de reserva do cliente*/
    case 4:
       printf("\n Digite a opção do quarto desejado: \n");
       printf("\n 1: quarto de solteiro: \n");
       printf("\n 2: quarto de casal: \n");
       printf("\n 3: quarto deluxe: \n");
       printf("\n 4: quarto presidencial: \n");
       scanf("%d",&quarto);


        printf("\n Digite o dia e o mês do check-in respectivamente: \n");
        scanf("%d%d",&diaC,&mesC);

        printf(" \n Digite o dia e o mês do check_out respectivamente: \n");
        scanf("%d%d",&diaS,&mesS);

        printf("\n Digite o nome da pessoa para a reserva: \n");
        scanf(" %s",&reservasn);

        printf("\n SEU NUMERO DE RESERVA É: %d",aux);

        printf("\n");
        printf("1: O que o nosso hotel oferece para o seu conforto e estadia? \n");
        printf("2: tipos de quartos: \n");
        printf("3: preços dos quartos: \n");
        printf("4: Fazer uma reserva: \n");
        printf("5: Donos do hotel/site: \n");
        printf("6: sair do menu \n");

        break;

    /**Case utilizado para mostrar os criadores e donos do programa e hotel aos clientes*/

    case 5:
        printf("Os donos do hotel e do site são renomados estudantes de informática que estudaram no cefet-MG. \n");

        printf(" \n São eles: \n ");

        printf("\n Luis Guilherme Mourelhe Fernandes. \n");

        printf("\n Marina Bedendo Clozato \n");

        printf(" \n Lucas Murrer de Carvalho \n");

        printf("\n");
        printf("1: O que o nosso hotel oferece para o seu conforto e estadia? \n");
        printf("2: tipos de quartos: \n");
        printf("3: preços dos quartos: \n");
        printf("4: Fazer uma reserva: \n");
        printf("5: Donos do hotel/site: \n");
        printf("6: sair do menu \n");
        break;
    /** Case utilizado para dar a opção do cliente sair do menu e prosseguir na efetuação e confirmação da reserva.*/
    case 6:
        aux=6;
        break;
    default:
        printf("Opção inválida");
        break;
    }

    }
    system("cls");
    printf("\n \n \n");

    printf("Digite o numero da reserva para consultar os dados e o valor total da conta: \n");
    scanf("%d",&numreserva);

    /** Aqui o cliente pode consultar os dados de sua reserva e verificar o total da conta*/

    printf("====DADOS DA RESERVA==== \n");

    printf("Tipo de quarto pedido: \n");
    if(quarto==1){
        printf("\n Quarto de solteiro: \n");
        precoq=400;
    }else if(quarto==2){
        printf("\n Quarto de casal : \n");
        precoq=800;
    }else if(quarto==3){
        printf("\n Quarto deluxe \n");
        precoq=1500;
    }else if(quarto==4){
        printf("\n Quarto presidencial: \n ");
        precoq=3000;
    }

    aux2=diaS-diaC;
    aux3=mesS-mesC;

    if(aux3==0){
        dias=aux2;
        printf("\n A quantidade de dias da estadia é: %d \n",aux2);

    }else if(aux3!=0){
        dias=diaC-diaS;
        printf("\n A quantidade de dias da estadia é: %d \n",aux2);

    }
    conta_final=precoq*dias;
    printf(" \n O subtotal da conta é: R$ %2.f ",conta_final);

    printf("\n a reserva foi feita no nome de: \n");
    puts(reservasn);


    return 0;
}

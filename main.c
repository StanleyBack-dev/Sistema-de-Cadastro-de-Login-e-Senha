#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<string.h>
#include<conio.h>
#include<windows.h>

 double tecla;
 char idem2[12]; char idem1[12]; char usuario[30]; char senha[12]; char primeironome[30]; char sobrenome[30];
 char primeironomefuncionario[30]; char sobrenomefuncionario[30]; char perfil[200]; char cpffuncionario[15]; char numerofuncionario[15];
 char cpf[15]; char numerocliente[15];
 int escolha=1; int sair; int i; int opcao1; int opcao2; int opcao3; int opcao4; int opcao5; int escolhare=1;

int main(){

 setlocale(LC_ALL,"Portuguese");

   system("color 0e");
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   printf("\t\t\t                                         -----------SEJAM MUITO BEM VINDOS A EX G4MES DIGITAL --------------\n");
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
   printf("\nOl� amigos(as), sejam muito bem vindos a EX G4MES DIGITAL!\n");
   printf("\nSomos uma empresa focada no ambiente de games digital, sendo a MAIOR Startup neste seguimento no Brasil\n");
   printf("Contamos com uma equipe completa de:\n\nDesenvolvedores, Engenheiros,  Analistas e t�cnicos. Nossa empresa oferece o melhor custo benef�cio do mercado � anos.");
   printf("\n\nVenha fazer parte de nossa hist�ria!\n");
   printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   printf("TELEFONE:(62)3273-5543                                                                                                                                                    EMAIL:exg4mesdigital@gmail.com");
   printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
   system("pause");
   system("cls");
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   printf("\t\t\t                                                                         CADASTRO DE PERFIL");
   printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

   FILE*file;
   file = fopen("perfis.txt","a");
   if(file==NULL){printf("ERRO NA ABERTURA DO ARQUIVO!");
return 1;
    }

   printf("> INFORME SEU PRIMEIRO NOME: ");
   gets(idem1);
   fprintf(file, " %s", idem1);
   printf("> INFORME SEU SOBRENOME: ");
   gets(idem2);
   fprintf(file, "%s //", idem2);
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
   printf("Cadastrando...");
   sleep(3);
   printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   printf("\n\nCADASTRO EFETUADO COM SUCESSO!\n");
   printf("\n");
   system("pause");
   system("cls");
   fclose(file);

return geral();
}
void geral(){

 setlocale(LC_ALL,"Portuguese");

typedef struct{
   char login[30];
   char senha[12];
} pessoa; pessoa p[1];
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   printf("\t\t\t                                                                   ----------SEJAM BEM VINDOS----------");
   printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   printf("\n\n\n\t\t\t                                                            TELA DE CADASTRO & LOGIN E SENHA\n");
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   char login[30]; char senha[12]; char login1[30]; char senha1[12];
   int i;

   printf("\n> INFORME O LOGIN QUE DESEJA: ");
   gets(login1);
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   printf("\n\nOBSERVA��ES E ESPECIFICA��ES! - CRIE UMA SENHA DE 7 DIGITOS(NUMERICOS OU ALFABETICOS)\n");
   printf("\n> INFORME A SENHA QUE DESEJA: ");
   fflush(stdin);

for(i=0;i<=6;i++){

   senha1[i]=getch();
   putchar ('*');
}
   senha1[i]= "\0";

   printf("\n\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   printf("\nLOGIN E SENHA CRIADOS COM SUCESSO!");
   printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
   printf("\n");
   system("pause");
   system("cls");

   strcpy(p[0].login, login1);
   strcpy(p[0].senha, senha1);

while(senha!=senha1){

   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   printf("\n\t\t\t                                                                  TELA DE ACESSO & LOGIN E SENHA\n");
   printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
   printf("\n> LOGIN: ");
   gets(login);
   printf("> SENHA: ");
   fflush(stdin);

for(i=0;i<=6;i++){

   senha[i]=getch();
   putchar ('*');
}
   senha[i] = "\0";
   senha[i]=senha1[i];

if ((strcmp(login,p[0].login)==0)&&(strcmp(senha1,p[0].senha)==0)){
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\nLOGANDO...");
    sleep(4);
     system("cls");
return central();
}
else{
    printf("\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\nATEN��O - LOGIN E/OU SENHA INCORRETOS - DIGITE NOVAMENTE!");
     printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    system("pause");
    system("cls");
}
}
}
void cadastros(){

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t\t                                                                  CADASTRO DE CLIENTES\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    FILE*file;
    file = fopen("cdclientes.txt","a");
    if(file==NULL){printf("ERRO NA ABERTURA DO ARQUIVO!");
    return 1;
    }

    printf("\n> INFORME O PRIMEIRO NOME: ");
    scanf("%s", primeironome);
    fprintf(file," %s\t\t", primeironome);
    printf("> INFORME O SOBRENOME: ");
    scanf("%s", sobrenome);
    fprintf(file,"%s\t\t", sobrenome);
    printf("> N�MERO DE CONTATO: ");
    scanf("%s", numerocliente);
    fprintf(file,"%s\t\t", numerocliente);
    printf("> CPF/CNPJ: ");
    scanf("%s", cpf);
    fprintf(file,"%s\t\t // ", cpf);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    fclose(file);

    printf("> DESEJA CADASTRAR MAIS CLIENTES? SIM(1) OU N�O(2):");
    scanf("%lf", &tecla);
    if(tecla==1){
    system("cls");
    return cadastros();
}
    else{system("cls");
return central();
}
}
void cadfuncionario(){

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t\t                                                                  CADASTRO DE FUNCION�RIOS\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    FILE*file;
    file = fopen("cdfuncionarios.txt","a");
    if(file==NULL){printf("ERRO NA ABERTURA DO ARQUIVO!");
    return 1;
    }

    printf("\n> INFORME O PRIMEIRO NOME: ");
    scanf("%s", primeironomefuncionario);
    fprintf(file," %s\t\t", primeironomefuncionario);
    printf("> INFORME O SOBRENOME: ");
    scanf("%s", sobrenomefuncionario);
    fprintf(file,"%s\t\t", sobrenomefuncionario);
    printf("> N�MERO DE CONTATO: ");
    scanf("%s", numerofuncionario);
    fprintf(file,"%s\t\t", numerofuncionario);
    printf("> CPF/CNPJ: ");
    scanf("%s", cpffuncionario);
    fprintf(file,"%s\t\t //", cpffuncionario);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");

    fclose(file);

    printf("\n> DESEJA CADASTRAR MAIS CLIENTES? SIM(1) OU N�O(2):");
    scanf("%lf", &tecla);
    if(tecla==1){
    system("cls");
    return cadfuncionario();
}
    else{system("cls");
return central();
}
}
void relatorio(){

    printf("\t\t\t\t                                                             ------RELAT�RIOS GERAIS------\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n1- RELAT�RIOS DE CLIENTES");
    printf("\n2- RELAT�RIOS DE FUNCION�RIOS");
    printf("\n3- RELAT�RIOS DE PERFIS");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n4- PARA RETORNAR AO MENU INCIAL");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n> INFORME A OP�AO QUE DESEJA: ");
    scanf("%d", &escolha);
    system("cls");

    if(escolha==4){return central();
}

    if(escolha==1){

    FILE*file;
    file = fopen("cdclientes.txt", "r");

    if(file ==NULL){
    printf("NAO FOI POSSIVEL ABRIR O ARQUIVO!");
    getchar();
    exit(0);
  }

    char a[100000]; char b[100000]; int c,d;

while("\n" && (fgets(a, 100000, file) != feof(file))){
    a[100] = fgetc(file);
    printf("                                                                            TODOS OS DADOS DOS CLIENTES\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("%s\n\n", a);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\n> DIGITE: (1) PARA RETORNAR A P�GINA DE RELAT�RIOS OU (2) PARA RETORNAR AO MENU INICIAL - ");
    scanf("%lf", &tecla);
    system("cls");

    if(tecla==1)
return relatorio();
    if(tecla==2)
return central();
    }
    fclose(file);}

    if(escolha==2){

    FILE*file;
    file = fopen("cdfuncionarios.txt", "r");

    if(file ==NULL){
    printf("NAO FOI POSSIVEL ABRIR O ARQUIVO!");
    getchar();
    exit(0);
  }

    char a[100000]; char b[100000]; int c,d;

while("\n" && (fgets(a, 100000, file) != NULL)){
    a[100] = fgetc(file);
    printf("                                                                                TODOS OS DADOS DOS FUNCION�RIOS\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("%s\n\n", a);
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\n> DIGITE: (1) PARA RETORNAR A P�GINA DE RELAT�RIOS OU (2) PARA RETORNAR AO MENU INICIAL - ");
    scanf("%lf", &tecla);
    system("cls");

    if(tecla==1)
return relatorio();
    if(tecla==2)
return central();
    }
    fclose(file);}

    if(escolha==3){

        FILE*file;
        file = fopen("perfis.txt", "r");

    if(file ==NULL){
    printf("NAO FOI POSSIVEL ABRIR O ARQUIVO!");
    getchar();
    exit(0);
  }

    char a[100000]; char b[100000]; int c,d;

while("\n" && (fgets(a, 100000, file) != NULL)){

    a[100] = fgetc(file);
    printf("                                                                                  TODOS OS PERFIS\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("%s", a);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\n> DIGITE: (1)PARA RETORNAR A P�GINA DE RELAT�RIOS OU (2) PARA RETORNAR AO MENU INICIAL - ");
    scanf("%lf", &tecla);
    system("cls");

    if(tecla==1)
return relatorio();
    if(tecla==2)
return central();
    }
    fclose(file);}
    system("pause");
return central();

return central();
}
void ajuda(){

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n                                                                                INFORMA��ES QUANTO AO USO DE NOSSA PLATAFORMA DE APP\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("                                                                                                     OL�, %s %s", idem1, idem2);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\nPARA TER ACESSO AOS RELAT�RIOS, FA�A O PASSO A PASSO ABAIXO:\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\n1- V� PARA �REA DE TRABALHO DE SUA M�QUINA");
    printf("\n2- PROCURE PELA PASTA ""RELAT�RIOS GERAIS"" E D� 2 CLIQUES COM O BOT�O ESQUERDO DO MOUSE SOBRE ELA");
    printf("\n3- IR� SOLICITAR UMA SENHA DE ACESSO, PE�A ELA AO SEU GERENTE E LIBERE O ACESSO!");
    printf("\n4- AP�S DIGITAR A SENHA, SURGIR� UMA NOVA PASTA CHAMADA PROGRAMA EM SUA �REA DE TRABALHO. CLIQUE 2 VEZES COM O BOT�O ESQUERDO DO MOUSE SOBRE ELA");
    printf("\n5- CLICANDO NELA APARECER� OUTRA PASTA ESCRITA ""RELAT�RIOS GERAIS"", CLIQUE NELA E PROCURE PELOS DOCUMENTOS DE RELAT�RIOS EM FORMATO .TXT");
    printf("\n6- CLICANDO NESTES RELAT�RIOS(CDCLIENTES.TXT - CDFUNCIONARIOS.TXT - PERFIS), VOC� TER� ACESSO A TODO CONTE�DO DE CADASTRO DA EMPRESA");
    printf("\n7- AP�S TERMINAR DE OLHAR OS RELAT�RIOS, FECHE AS ABAS E O PROGRAMA CODEBLOCKS, V� PARA A �REA DE TRABALHO DE SUA M�QUINA E CLIQUE 2 VEZES NA PASTA ""RELAT�RIOS GERAIS""");
    printf("\n8- DIGITE ""S"" NO TERMINAL QUE APARECER E PRONTO, ARQUIVOS GUARDADOS COM SENHA NOVAMENTE!\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\nCASO SURJA MAIS ALGUMA D�VIDA, ENTRE EM CONTATO COM O NOSSOS MEIOS DE CONTATO ABAIXO!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\nTELEFONE:(62)3273-5543                                                                                                                                                    EMAIL:exg4mesdigital@gmail.com\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\nDigite (1) e pressione ENTER para retornar:");
    scanf("%lf", &tecla);
    system("cls");

return central();
    }
void sairgeral(){

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t\t                                                                          VOC� REALMENTE DESEJA SAIR?\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\nSIM(1)\nN�O(2)\n");
    scanf("%d", &sair);
    system("cls");
    if(sair!=1)
return central();
else{
    printf("                                                                                                       Saindo...");
    sleep(3);
    exit("cls");
}
}
void central(){

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\t\t\t                                                                          MENU INICIAL                                                                ONLINE:%s %s", idem1, idem2);
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\n\n1- CADASTRO DE CLIENTES\n");
    printf("2- CADASTRO DE FUNCION�RIOS\n");
    printf("3- RELAT�RIOS\n");
    printf("4- AJUDA\n");
    printf("5- SAIR\n");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
    printf("\nQUAL OP��O VOC� DESEJA ACESSAR?");
    scanf("%d", &escolha);
    system("cls");

while(escolha!=6){

    switch (escolha){

            case 1:
            cadastros();
            break;

            case 2:
            cadfuncionario();
            break;

            case 3:
            relatorio();
            break;

            case 4:
            ajuda();
            break;

            case 5:
            sairgeral();
            break;
}
}
}

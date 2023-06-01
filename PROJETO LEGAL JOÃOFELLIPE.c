#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

menu ()
{
	printf("#########################  MENU  ##########################\n#\t1 - Para Inserir String\t\t\t\t  #\n#\t2 - Para Mostrar String Invertida\t\t  #\n#\t3 - Para Mostrar String Original\t\t  #\n#\t4 - Para Dados Dos Programadores\t\t  #\n#\t5 - Limpar Tela\t\t\t\t\t  #\n#\t0 - Para Sair\t\t\t\t\t  #\n###########################################################\nOPÇÃO: ");
}

insere ()
{
    char input[100];
    printf("Insira uma string: ");
    fflush(stdin);
    fgets(input, sizeof(input), stdin);
    fflush(stdin);
	return(input);
}


*inverte (char *s)
{
	char *rstr;
	rstr = (char*) malloc (strlen(s)+1);
	strcpy(rstr, s);
	fflush(stdin);
	printf("A string invertida é: %s\n",(strrev(rstr)));
}

dadosdoprogramador()
{
    printf("Créditos:\n");
    printf("João Santos\n");
    printf("Fellipe Santos\n");
}
main()
{
	setlocale (LC_ALL, "portuguese");
	char str[100];
	int h;
	do{
	menu();
	scanf("%d",&h);
	switch (h)
	{
		case 1:strcpy(str,insere());
		break;
		case 2:inverte(str);
		break;
		case 3:printf("%s",str);
		break;
		case 4:dadosdoprogramador();
		break;
		case 5:system("cls");
		break;
		case 2911:printf("https://mangasee123.com/read-online/Umineko-No-Naku-Koro-Ni-Episode1-chapter-1-page-1.html");
		break;
		case 0: exit(715);
		break;
		default: printf("Opção invalida");
	}}while(h!=0);
}
	

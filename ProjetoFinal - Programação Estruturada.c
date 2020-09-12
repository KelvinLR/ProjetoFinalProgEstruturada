#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct
{
	int ID_Pessoa;
	char nome[32];
	int idade;
	int notaCidade;
	int notaBairro;
} reg_pessoa;     
   
typedef struct
{ 	
	int ID_Bairro;
	char bairro[32];
} reg_bairro;    

typedef struct
{ 	
	int ID_Pessoa;
	int ID_Bairro;
} reg_PessoaBairro;  
	
int main()
{
	setlocale(LC_ALL, "Portuguese");
	system("color 0E");
	
	reg_pessoa pessoa[12];
	pessoa[0].ID_Pessoa = 1; strcpy(pessoa[0].nome,"Maria Carliane"); pessoa[0].idade = 17; pessoa[0].notaCidade = 7; pessoa[0].notaBairro = 3;
	pessoa[1].ID_Pessoa = 2; strcpy(pessoa[1].nome,"Jefferson"); pessoa[1].idade = 20; pessoa[1].notaCidade = 3; pessoa[1].notaBairro = 6;
	pessoa[2].ID_Pessoa = 3; strcpy(pessoa[2].nome,"Cimy"); pessoa[2].idade = 19; pessoa[2].notaCidade = 6; pessoa[2].notaBairro = 8;
	pessoa[3].ID_Pessoa = 4; strcpy(pessoa[3].nome,"Yasmin Mota Martins"); pessoa[3].idade = 18; pessoa[3].notaCidade = 6; pessoa[3].notaBairro = 3;
	pessoa[4].ID_Pessoa = 5; strcpy(pessoa[4].nome,"Tainara"); pessoa[4].idade = 17; pessoa[4].notaCidade = 5; pessoa[4].notaBairro = 4;
	pessoa[5].ID_Pessoa = 6; strcpy(pessoa[5].nome,"Yuri"); pessoa[5].idade = 17; pessoa[5].notaCidade = 6; pessoa[5].notaBairro = 5;
	pessoa[6].ID_Pessoa = 7; strcpy(pessoa[6].nome,"Kauan"); pessoa[6].idade = 17; pessoa[6].notaCidade = 7; pessoa[6].notaBairro = 7;
	pessoa[7].ID_Pessoa = 8; strcpy(pessoa[7].nome,"Luan Neves"); pessoa[7].idade = 18; pessoa[7].notaCidade = 8; pessoa[7].notaBairro = 9;
	pessoa[8].ID_Pessoa = 9; strcpy(pessoa[8].nome,"Caio"); pessoa[8].idade = 21; pessoa[8].notaCidade = 4; pessoa[8].notaBairro = 5;
	pessoa[9].ID_Pessoa = 10; strcpy(pessoa[9].nome,"Felipe Leo"); pessoa[9].idade = 17; pessoa[9].notaCidade = 5; pessoa[9].notaBairro = 4;
	pessoa[10].ID_Pessoa = 11; strcpy(pessoa[10].nome,"Denyel"); pessoa[10].idade = 18; pessoa[10].notaCidade = 5; pessoa[10].notaBairro = 10;
	pessoa[11].ID_Pessoa = 12; strcpy(pessoa[11].nome,"Kelvin Rodrigues"); pessoa[11].idade = 16; pessoa[11].notaCidade = 8; pessoa[11].notaBairro = 3;
	
	reg_bairro bairros[10];
	bairros[0].ID_Bairro = 1; strcpy(bairros[0].bairro,"Bela Vista");
	bairros[1].ID_Bairro = 2; strcpy(bairros[1].bairro,"Cajazeiras");
	bairros[2].ID_Bairro = 3; strcpy(bairros[2].bairro,"Cristo Redentor");
	bairros[3].ID_Bairro = 4; strcpy(bairros[3].bairro,"Joaquim Távora");
	bairros[4].ID_Bairro = 5; strcpy(bairros[4].bairro,"João XXIII");
	bairros[5].ID_Bairro = 6; strcpy(bairros[5].bairro,"São Gerardo");
	bairros[6].ID_Bairro = 7; strcpy(bairros[6].bairro,"Vicente Pinzón");
	bairros[7].ID_Bairro = 8; strcpy(bairros[7].bairro,"Vila Pery");
	bairros[8].ID_Bairro = 9; strcpy(bairros[8].bairro,"Montese");
	bairros[9].ID_Bairro = 10; strcpy(bairros[9].bairro,"Planalto Ayrton Senna");
	
	reg_PessoaBairro pessoaBairro[12];
	pessoaBairro[0].ID_Pessoa = 1; pessoaBairro[0].ID_Bairro = 1;
	pessoaBairro[1].ID_Pessoa = 2; pessoaBairro[1].ID_Bairro = 5;
	pessoaBairro[2].ID_Pessoa = 3; pessoaBairro[2].ID_Bairro = 8;
	pessoaBairro[3].ID_Pessoa = 4; pessoaBairro[3].ID_Bairro = 1;
	pessoaBairro[4].ID_Pessoa = 5; pessoaBairro[4].ID_Bairro = 1;
	pessoaBairro[5].ID_Pessoa = 6; pessoaBairro[5].ID_Bairro = 3;
	pessoaBairro[6].ID_Pessoa = 7; pessoaBairro[6].ID_Bairro = 4;
	pessoaBairro[7].ID_Pessoa = 8; pessoaBairro[7].ID_Bairro = 7;
	pessoaBairro[8].ID_Pessoa = 9; pessoaBairro[8].ID_Bairro = 6;
	pessoaBairro[9].ID_Pessoa = 10; pessoaBairro[9].ID_Bairro = 2;
	pessoaBairro[10].ID_Pessoa = 11; pessoaBairro[10].ID_Bairro = 9;
	pessoaBairro[11].ID_Pessoa = 12; pessoaBairro[11].ID_Bairro = 10;
	
	int opc=-1;
	
	while(opc!=0)
	{
	
	printf("==============================================\n");
	printf(" PESQUISA: SISTEMA DE TRANSPORTE DE FORTALEZA \n");
	printf("==============================================\n");
	printf("                MENU DE OPÇÕES                \n");
	printf("==============================================\n");
	printf("1: Ver lista de IDs entrevistados\n2: Ver lista completa de entrevistados\n3: Ver entrevistado por ID\n\n0: Sair do programa\n\nOBS: Para melhor visualiza��o, \na tela ser� apagada ap�s a escolha da op��o\n");
	printf("==============================================\n");
	scanf("%d",&opc);
	
	switch(opc)
	{
		case 1:	
		{
			system("cls");
			printf("==============================================\n");
			printf("               IDs CADASTRADOS                \n");
			printf("==============================================\n");
			int ID=0;
			while(ID<12)
			{
				printf("ID N�%i: %i - %s\n",++ID,pessoa[ID].ID_Pessoa,pessoa[ID].nome);
			}
		printf("==============================================\n");
		system("pause");
		system("cls");
		break;
		}
		
		case 2:
		{
			system("cls");
			printf("==============================================\n");
			printf("                ENTREVISTADOS                 \n");
	
			for(int x=0;x<12;x++)
			{
				int a=0;
				while(a<12)
				{
					if(pessoaBairro[x].ID_Pessoa == pessoa[a].ID_Pessoa)
					{
						printf("==============================================\n");
						printf("Nome: %s \nID: %d\nIdade: %d\nNota do Transporte na Cidade: %d\nNota do Transporte no Bairro: %d\n",pessoa[a].nome,pessoa[a].ID_Pessoa,pessoa[a].idade,pessoa[a].notaCidade,pessoa[a].notaBairro);
					}
				a++;
				}	
				int b=0;
				while(b<10)
				{
					if(pessoaBairro[x].ID_Bairro == bairros[b].ID_Bairro)
					{
						printf("Bairro: %s\n", bairros[b].bairro);
					}
					b++;
				}	
			}
		printf("==============================================\n");
		system("pause");
		system("cls");
		break;
		}
		
			case 3:
			{
				int PessoaID;
				system("cls");
				printf("==============================================\n");
				printf("                PESQUISE O ID                 \n");
				printf("==============================================\n");
				printf("Digite o ID desejado: ");
				scanf("%d", &PessoaID);
			
				if(PessoaID<=12&&PessoaID>=1)
				{	
					printf("Nome: %s \nID: %d\nIdade: %d\nNota do Transporte na Cidade: %d\nNota do Transporte no Bairro: %d\n",pessoa[PessoaID-1].nome,pessoa[PessoaID-1].ID_Pessoa,pessoa[PessoaID-1].idade,pessoa[PessoaID-1].notaCidade,pessoa[PessoaID-1].notaBairro);
				}
				else
				{
					printf("\aERRO: ID N�O ECONTRADO\n");
				}
				printf("==============================================\n");
				system("pause");
				system("cls");
				break;
			}
		
			case 0:
				printf("ATÉ LOGO\n");
				printf("==============================================\n");
				break;
			
		
			default:
				printf("\aERRO: OPÇÃOO INVÁLIDA\nPressione qualquer tecla para limpar a tela e retornar ao menu\n");
				system("pause");
				system("cls");
		}
	}	
}

/*
float mediaCidade(
	int recebeSoma = 0;
	for(int i=0;i<12;i++)
	{
		recebeSoma+=pessoa[i].notaCidade;
	}

	float mediaCidade;
	mediaCidade=recebeSoma/12;

	int recebeSoma = 0;
	for(int i=0;i<12;i++)
	{
		recebeSoma+=pessoa[i].notaBairro;
	}

	float mediaBairro;
	mediaBairro=recebeSoma/12;
	
*/



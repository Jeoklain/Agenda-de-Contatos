/* ============================================================
   AGENDA DE CONTATOS - Fundamentos de Programação
   Parte 1: estrutura base (menu + vetor + funções vazias)
   ============================================================ */

#include <stdio.h>  // printf, scanf, fgets
#include <string.h> // strcspn, strlen (usaremos nas próximas partes)
#include <stdlib.h> // malloc, free (usaremos nas próximas partes)

/* ---------- CONSTANTES ----------
   Definem o tamanho máximo dos dados. Se quiser mudar o limite
   da agenda, basta alterar aqui em um lugar só. */
#define MAX_CONTATOS 100
#define TAM_NOME 50
#define TAM_TELEFONE 20
#define TAM_EMAIL 50

/* ---------- STRUCT ----------
   Um "molde" que agrupa os dados de UM contato. */
typedef struct
{
    char nome[TAM_NOME];
    char telefone[TAM_TELEFONE];
    char email[TAM_EMAIL];
} Contato;

/* ---------- VARIÁVEIS GLOBAIS ----------
   agenda: vetor que guarda todos os contatos.
   total:  quantos contatos existem de verdade (começa em 0). */
Contato agenda[MAX_CONTATOS];
int total = 0;

/* ---------- PROTÓTIPOS DAS FUNÇÕES ----------
   Avisam o compilador que essas funções existem
   (o código delas vem depois da main). */
void exibirMenu(void);
void cadastrarContato(void);
void listarContatos(void);
void buscarContato(void);
void removerContato(void);

/* ---------- FUNÇÃO PRINCIPAL ---------- */
int main(void)
{
    int opcao;

    /* Laço do menu: repete até o usuário escolher 0 (sair). */
    do
    {
        exibirMenu();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // consome o ENTER que sobrou no teclado

        /* switch decide qual função chamar conforme a opção. */
        switch (opcao)
        {
        case 1:
            cadastrarContato();
            break;
        case 2:
            listarContatos();
            break;
        case 3:
            buscarContato();
            break;
        case 4:
            removerContato();
            break;
        case 0:
            printf("Saindo da agenda...\n");
            break;
        default:
            printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}

/* ---------- FUNÇÕES ---------- */

/* Mostra as opções do menu na tela. */
void exibirMenu(void)
{
    printf("\n===== AGENDA DE CONTATOS =====\n");
    printf("1 - Cadastrar contato\n");
    printf("2 - Listar contatos\n");
    printf("3 - Buscar contato\n");
    printf("4 - Remover contato\n");
    printf("0 - Sair\n");
    printf("==============================\n");
}

/* Por enquanto são só "esqueletos": vamos preencher por partes. */
void cadastrarContato(void) { printf("[em construcao] Cadastrar\n"); }
void listarContatos(void) { printf("[em construcao] Listar\n"); }
void buscarContato(void) { printf("[em construcao] Buscar\n"); }
void removerContato(void) { printf("[em construcao] Remover\n"); }
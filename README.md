# Agenda de Contatos

Trabalho final da disciplina de **Fundamentos de Programação**: um sistema de agenda de contatos em C, rodando no console, para uma pequena empresa organizar os contatos de clientes, fornecedores e parceiros comerciais.

## Integrantes

- João Alexandre de Moura
- Jeovana Klein
- João Vitor Pereira

## Funcionalidades

O programa mostra um menu em laço e volta a ele depois de cada operação, até o usuário escolher sair:

```
1. Cadastrar Contato
2. Consultar Contato
3. Listar Contatos
4. Excluir Contato
5. Sair
```

- **Cadastrar:** lê o nome completo (com espaços) e o telefone, guardado como texto (ex.: `47 99999-0000`).
- **Consultar pelo nome:** mostra **todos** os contatos com o nome informado, e não só o primeiro.
- **Listar:** mostra todos os contatos na ordem em que foram cadastrados. Com a agenda vazia, o programa não quebra.
- **Excluir:** remove o contato e puxa os seguintes uma posição para trás, sem deixar buracos na lista.

### Situações tratadas

| Situação | Comportamento |
| --- | --- |
| Consultar ou excluir um nome que não existe | Mostra `Contato nao encontrado` |
| Incluir com a agenda cheia | Mostra `Agenda cheia` e não inclui |
| Nomes repetidos | A consulta mostra todos os correspondentes |
| Agenda vazia | A listagem funciona sem erro |
| Opção inválida no menu | Avisa e volta ao menu |

## Estrutura

```
Agenda-de-Contatos/
├── agenda.c                                 código-fonte (o programa inteiro fica neste arquivo)
├── agenda.dev                               projeto do Dev-C++ (a criar)
├── README.md                                este arquivo
└── Trabalho final_ Agenda de Contatos.pdf   enunciado do professor
```

## Divisão do trabalho

O trabalho está dividido em três partes. Cada integrante cuida de uma, mas **todos precisam entender o código inteiro**, porque no teste de autoria as perguntas são sorteadas e qualquer um pode ter que explicar qualquer parte.

### Parte 1: estrutura, menu e exclusão (João Alexandre de Moura)

- Montar o esqueleto do `agenda.c`: `#include`, `#define MAX 100`, as matrizes, o `total` e as funções vazias, para os outros já terem onde escrever.
- Menu em laço com `switch`, que volta depois de cada operação e só termina na opção 5.
- Função `excluir`: procura o nome, puxa os contatos seguintes uma posição para trás (nas duas matrizes) e diminui o total. Se não achar, mostra `Contato nao encontrado`.

### Parte 2: inclusão e consulta (João Vitor Pereira)

- Função `incluir`: se o total já for `MAX`, mostra `Agenda cheia` e não inclui. Senão, lê nome e telefone com `scanf(" %49[^\n]", ...)` e `scanf(" %19[^\n]", ...)` e soma 1 ao total.
- Função `consultar`: lê o nome, compara com `strcmp` e mostra **todos** os contatos iguais (sem `break`). Se nenhum bater, mostra `Contato nao encontrado`.

### Parte 3: listagem, validações e testes (Jeovana Klein)

- Função `listar`: mostra todos os contatos numerados. Com a agenda vazia, avisa (`Agenda vazia`) em vez de não mostrar nada.
- Opção inválida no menu: o `default` do `switch` avisa e volta ao menu.
- Rodar o checklist de testes inteiro antes da entrega e anotar o que falhar.

## Como compilar e executar

Abra o arquivo `agenda.c` (ou o projeto `agenda.dev`) no Dev-C++ e use **Executar → Compilar & Executar** (`F11`). O código compila no Dev-C++ como vem instalado, sem mudar nenhuma configuração.

## Padrão de código

- Somente C padrão, portável para Windows, Linux e Mac: nada de `system("cls")`, `conio.h`, `gotoxy` ou recursos de C++.
- `int main(void)`; inteiros lidos e escritos com `%i`; `float` lido com `%f` e mostrado com `%.2f`; texto com `%s`.
- Comentários de seção (`// variaveis`, `// entrada`, `// processamento`, `// saida`) e código indentado.
- Mensagens de `printf` sem acento, por causa do console do Windows.

## Checklist de testes

Antes de entregar, rodar numa pasta limpa e conferir:

- [ ] Incluir três contatos e listar: os três aparecem na ordem em que entraram.
- [ ] Consultar um nome que existe e um que não existe (o segundo mostra `Contato nao encontrado`).
- [ ] Incluir dois contatos com o mesmo nome e consultar: aparecem os dois.
- [ ] Excluir o contato do meio e listar: sem buraco nem repetição.
- [ ] Excluir um nome que não existe: `Contato nao encontrado`.
- [ ] Listar com a agenda vazia: o programa não quebra.
- [ ] Escolher uma opção inexistente: o programa avisa e volta ao menu.
- [ ] Trocar `MAX` para 3 só durante o teste: a quarta inclusão mostra `Agenda cheia`.

## Bônus

A base vale 7,0 e os bônus completam até 3,0. Só conta o bônus que a equipe souber explicar no teste de autoria.

| Bônus | Pontos | Responsável | Feito |
| --- | --- | --- | --- |
| Uso da biblioteca `string.h` (`strcmp`, `strcpy`, `strlen`) | até 0,5 | Todos | ⬜ |
| Alteração de contatos (opção nova no menu) | até 1,0 | João Vitor | ⬜ |
| Pesquisa parcial pelo nome (`strstr`) | até 0,5 | João Vitor | ⬜ |
| Melhorias visuais portáveis com ANSI | até 1,0 | Jeovana | ⬜ |
| Ordenação alfabética dos contatos | até 1,0 | João Alexandre | ⬜ |
| Uso de `typedef struct` | até 1,0 | João Alexandre | ⬜ |
| Gravação e leitura em arquivo | até 2,0 | João Alexandre | ⬜ |

Os quatro primeiros já somam 3,0 e usam quase só o que já foi visto em aula, por isso vêm primeiro. Os outros servem de margem, caso algum bônus não seja aceito.

## Entrega

- Só o código-fonte: o arquivo `agenda.c` e o projeto do Dev-C++ (`agenda.dev`). Sem relatório escrito.
- Demonstração do programa funcionando (incluir, listar, consultar e excluir) e teste de autoria com cinco perguntas sobre o código.
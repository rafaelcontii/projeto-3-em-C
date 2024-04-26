#include "trabalho.h"
#include <stdio.h>

int main() {
  int escolha;
  char telefone[MAX_LENGTH];

  while (1) {
    printf("\nEscolha uma Opção:\n");
    printf("1. Adicionar Contatos\n");
    printf("2. Listar Contatos\n");
    printf("3. Deletar Contatos\n");
    printf("4. Salvar Agenda\n");
    printf("5. Carregar Agenda\n");
    printf("6. Sair\n");
    scanf("%d", &escolha);

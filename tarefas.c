#include "trabalho.h"
#include <stdio.h>
#include <string.h>

Contato agenda[MAX_CONTACTS];
int num_contatos = 0;

void adicionar_contato() {
  if (num_contatos < MAX_CONTACTS) {
    Contato novo_contato;
    printf("Digite o Nome: ");
    scanf("%s", novo_contato.nome);
    printf("Digite o Sobrenome: ");
    scanf("%s", novo_contato.sobrenome);
    printf("Digite o Email: ");
    scanf("%s", novo_contato.email);
    printf("Digite o Telefone: ");
    scanf("%s", novo_contato.telefone);
    agenda[num_contatos++] = novo_contato;
    printf("Contato adicionado com sucesso!\n");
  } else {
    printf("O limite de contatos chegou ao limite, exclua contatos para "
           "adionar mais!\n");
  }
}

\\ok funçao adicionar

void listar_contatos() {
  printf("Lista de contatos:\n");
  for (int i = 0; i < num_contatos; i++) {
    printf("%d: %s %s, %s, %s\n", i + 1, agenda[i].nome, agenda[i].sobrenome,
           agenda[i].email, agenda[i].telefone);
  }
}

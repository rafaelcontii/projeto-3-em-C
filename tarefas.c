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

\\ok função listar

void deletar_contato(char *telefone) {
  for (int i = 0; i < num_contatos; i++) {
    if (strcmp(agenda[i].telefone, telefone) == 0) {
      for (int j = i; j < num_contatos - 1; j++) {
        agenda[j] = agenda[j + 1];
      }
      num_contatos--;
      printf("Contato deletado com Sucesso!\n");
      return;
    }
  }
  printf("O Contato não foi encontrado!\n");
}

\\ ok função deletar


void salvar_agenda() {
  FILE *arquivo = fopen("agenda.bin", "wb");
  if (arquivo == NULL) {
    printf("Erro ao abrir o Arquivo!\n");
    return;
  }
  fwrite(agenda, sizeof(Contato), num_contatos, arquivo);
  fclose(arquivo);
  printf("Agenda salva com Sucesso!\n");
}
//ok função salvar agenda

void carregar_agenda() {
  FILE *arquivo = fopen("agenda.bin", "rb");
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo!\n");
    return;
  }
   num_contatos = fread(agenda, sizeof(Contato), MAX_CONTACTS, arquivo);
  fclose(arquivo);
  printf("Agenda carregada com Sucesso!\n");
}

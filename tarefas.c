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

#ifndef TRABALHO_H
#define TRABALHO_H

#define MAX_CONTACTS 255
#define MAX_LENGTH 50
typedef struct {
  char nome[MAX_LENGTH];
  char sobrenome[MAX_LENGTH];
  char email[MAX_LENGTH];
  char telefone[MAX_LENGTH];
} Contato;

void adicionar_contato();
void listar_contatos();
void deletar_contato(char *telefone);
void salvar_agenda();
void carregar_agenda();

#endif /* CONTACTS_H */

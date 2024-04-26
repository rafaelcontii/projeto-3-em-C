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
 switch (escolha) {
    case 1:
      adicionar_contato();
      break;
    case 2:
      listar_contatos();
      break;
    case 3:
      printf("Digite o telefone que deseja deletar: ");
      scanf("%s", telefone);
      deletar_contato(telefone);
      break;
    case 4:
      salvar_agenda();
      break;
    case 5:
      carregar_agenda();
      break;
    case 6:
      printf("Aguarde, saindo..\n");
      return 0;
    default:
      printf("Opção não encontrada!\n");
    }
  }

  return 0;
}
//

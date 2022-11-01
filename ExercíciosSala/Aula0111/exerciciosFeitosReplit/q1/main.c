#include <stdio.h>

typedef struct horario {
  int hora;
  int minuto;
  int segundo;

} t_horario;

typedef struct data {
  int dia;
  int mes;
  int ano;

} t_data;

typedef struct compromisso {
  struct data data;
  struct horario horario;
  char texto[100];
} t_compromisso;

int main(void) {
  /* struct compromisso primeiro;
   primeiro.data.dia = 1;
   primeiro.data.mes = 11;
   primeiro.data.ano = 2022;
   printf("%d / %d / %d", primeiro.data.dia, primeiro.data.mes,
   primeiro.data.ano);

   primeiro.horario.segundo = 1;
   primeiro.horario.minuto = 11;
   primeiro.horario.hora = 2022;

   char aux [100];
   scanf("%s", &aux);
   primeiro.texto = aux;

   printf(primeiro);

 */

  return 0;
}
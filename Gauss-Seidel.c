#include <math.h>
#include <stdio.h>

/* 1o exemplo de sistema linear: */
#define f1(x, y, z) (7 - 2 * y - z) / 10
#define f2(x, y, z) (-8 - x - z) / 5
#define f3(x, y, z) (6 - 2 * x - 3 * y) / 10

/* 2o exemplo de sistema linear: */
#define f4(x, y, z) (2 - y - z) / -3
#define f5(x, y, z) (5 - 2 * x - z) / 5
#define f6(x, y, z) (-17 - 2 * x - 3 * y) / 7

int main() {
  double x1i, x2i, x3i;
  double x1, x2, x3;
  double erro, erro1, erro2, erro3, E;

  double maiorX, maiorErro;
  int i, op, menu = 1;
  char r;

  while (menu == 1) {
    system("clear");
    printf("\n\n============== Metodo de Gauss-Seidel ==============\n");
    printf("\nGrupo 08 || Alunos: Luiz Felipe, Maria Eduarda Massa\n\n\n");

    printf("\t  ====== Exemplos de Sistema Linear ======\n");
    printf("\n1 - Exemplo 01\n");
    printf("| 10x + 2y +   z =  7\n|   x + 5y +   z = -8\n|  2x + 3y + 10z =  "
           "6\n\n");
    printf("\n\n2 - Exemplo 02:\n");
    printf("| -3x +  y +  z =   2\n|  2x + 5y +  z =   5\n|  2x + 3y + 7z = "
           "-17\n\n");

    printf("Selecione o exemplo que deseja resolver >> ");
    scanf("%d", &op);
    switch (op) {
    case 1:
      system("clear");
      printf("\n\n============== Metodo de Gauss-Seidel ==============\n");
      printf("\nGrupo 08 || Alunos: Luiz Felipe, Maria Eduarda Massa\n\n\n");
      printf(
          "| 10x + 2y +   z =  7\n|   x + 5y +   z = -8\n|  2x + 3y + 10z =  "
          "6\n\n");

      printf("\nDigite valor do erro do exemplo 1 >> ");
      scanf("%lf", &erro);

      x1i = -0.5;
      x2i = 1;
      x3i = 0.5;

      i = 1;

      printf("\n\nIteracao\t\tx\t\t\t\ty\t\t\tz\n");

      do {
        x1 = f1(x1i, x2i, x3i);
        x2 = f2(x1, x2i, x3i);
        x3 = f3(x1, x2, x3i);
        printf("%d\t\t\t\t%0.4f\t\t\t%0.4f\t\t%0.4f\n", i, x1, x2, x3);

        erro1 = fabs(x1i - x1);
        erro2 = fabs(x2i - x2);
        erro3 = fabs(x3i - x3);

        x1i = x1;
        x2i = x2;
        x3i = x3;

        if (fabs(x1) > fabs(x2) && fabs(x1) > fabs(x3)) {
          maiorX = x1;
        }
        if (fabs(x2) > fabs(x1) && fabs(x2) > fabs(x3)) {
          maiorX = x2;
        } else {
          maiorX = x3;
        }

        if (fabs(erro1) > fabs(erro2) && fabs(erro1) > fabs(erro3)) {
          maiorErro = erro1;
        }
        if (fabs(erro2) > fabs(erro1) && fabs(erro2) > fabs(erro3)) {
          maiorErro = erro2;

        } else {
          maiorErro = erro3;
        }

        E = fabs(maiorErro / maiorX);

        i++;
      } while (E > erro);

      printf("\n\n\n\n==================== Resultados ====================\n");
      printf("\nSolucao --> x = %0.3f || y = %0.3f || z = %0.3f\n", x1, x2, x3);
      printf("\nErro    --> %f", E);

      printf("\n\nDeseja voltar ao menu principal? (s/n) >> ");
      scanf("%s", &r);
      break;

    case 2:
      system("clear");
      printf("\n\n============== Metodo de Gauss-Seidel ==============\n");
      printf("\nGrupo 08 || Alunos: Luiz Felipe, Maria Eduarda Massa\n\n\n");
      printf("| -3x +  y +  z =   2\n|  2x + 5y +  z =   5\n|  2x + 3y + 7z = "
             "-17\n\n");

      printf("Digite valor do erro do exemplo 2 >> ");
      scanf("%lf", &erro);

      x1i = 1;
      x2i = 1;
      x3i = -1;

      i = 1;

      printf("\n\nIteracao\t\tx\t\t\t\ty\t\t\tz\n");

      do {
        x1 = f4(x1i, x2i, x3i);
        x2 = f5(x1, x2i, x3i);
        x3 = f6(x1, x2, x3i);
        printf("%d\t\t\t\t%0.4f\t\t\t%0.4f\t\t%0.4f\n", i, x1, x2, x3);

        erro1 = fabs(x1i - x1);
        erro2 = fabs(x2i - x2);
        erro3 = fabs(x3i - x3);

        x1i = x1;
        x2i = x2;
        x3i = x3;

        if (fabs(x1) > fabs(x2) && fabs(x1) > fabs(x3)) {
          maiorX = x1;
        }
        if (fabs(x2) > fabs(x1) && fabs(x2) > fabs(x3)) {
          maiorX = x2;
        } else {
          maiorX = x3;
        }

        if (fabs(erro1) > fabs(erro2) && fabs(erro1) > fabs(erro3)) {
          maiorErro = erro1;
        }
        if (fabs(erro2) > fabs(erro1) && fabs(erro2) > fabs(erro3)) {
          maiorErro = erro2;

        } else {
          maiorErro = erro3;
        }

        E = fabs(maiorErro / maiorX);

        i++;
      } while (E > erro);

      printf("\n\n\n\n==================== Resultados ====================\n");
      printf("\nSolucao --> x = %0.3f || y = %0.3f || z = %0.3f\n", x1, x2, x3);
      printf("\nErro    --> %f", E);
      printf("\n\nDeseja voltar ao menu principal? (s/n) >> ");
      scanf("%s", &r);
      break;
    }

    if (r == 's' || r == "sim") {
      menu = 1;
    } else if (r == 'n' || r == "nao") {
      menu = 0;
    }
  }

  return 0;
}

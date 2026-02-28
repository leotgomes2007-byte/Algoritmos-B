#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 40

struct turma {
    int codigo;
    char disciplina[50];
    int carga;
    char professor[60];
    int aluno[MAX_ALUNOS];
    int presenca[MAX_ALUNOS];
    float percentual[MAX_ALUNOS];
};

int main() {
    int i = 0, continuar = 1;
    int totalAlunos = 0, totalPresencas = 0;
    float mediaFrequencia = 0;
    struct turma t;

    // Inicialização
    memset(&t, 0, sizeof(t)); // Zera toda a estrutura

    // Leitura dos dados da turma
    printf("Informe os dados da turma:\n");
    printf("Codigo da turma: ");
    scanf("%d", &t.codigo);
    getchar(); // Limpa o buffer do teclado

    printf("Nome da disciplina: ");
    fgets(t.disciplina, 50, stdin);
    t.disciplina[strcspn(t.disciplina, "\n")] = '\0'; // Remove a quebra de linha

    printf("Carga horaria da disciplina (horas): ");
    scanf("%d", &t.carga);
    getchar();

    printf("Nome do professor: ");
    fgets(t.professor, 60, stdin);
    t.professor[strcspn(t.professor, "\n")] = '\0';

    // Cadastro dos alunos
    while (continuar == 1 && i < MAX_ALUNOS) {
        printf("\nAluno %d:\n", i+1);

        printf("Matricula: ");
        scanf("%d", &t.aluno[i]);

        printf("Quantidade de presencas: ");
        scanf("%d", &t.presenca[i]);

        // Calcula percentual de frequência
        t.percentual[i] = ((float)t.presenca[i] / t.carga) * 100;

        totalPresencas += t.presenca[i];
        i++;
        totalAlunos = i;

        if (i < MAX_ALUNOS) {
            printf("\nDeseja cadastrar mais um aluno? (1-Sim / 0-Nao): ");
            scanf("%d", &continuar);
        } else {
            printf("\nLimite maximo de alunos atingido!\n");
        }
    }

    // Calcula média de frequência
    if (totalAlunos > 0) {
        mediaFrequencia = (float)totalPresencas / (totalAlunos * t.carga) * 100;
    }

    // Relatório da turma
    printf("\n=== DADOS DA TURMA ===\n");
    printf("Codigo: %d\n", t.codigo);
    printf("Disciplina: %s\n", t.disciplina);
    printf("Carga horaria: %d horas\n", t.carga);
    printf("Professor: %s\n", t.professor);
    printf("Total de alunos matriculados: %d\n\n", totalAlunos);

    // Relatório dos alunos
    printf("=== FREQUENCIA DOS ALUNOS ===\n");
    for (i = 0; i < totalAlunos; i++) {
        printf("Matricula: %d - Frequencia: %.1f%%\n", t.aluno[i], t.percentual[i]);
    }

    // Média de frequência
    printf("\nMedia de frequencia da turma: %.1f%%\n", mediaFrequencia);

    return 0;
}

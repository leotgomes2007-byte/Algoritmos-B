#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 40
#define MAX_TURMAS 32

struct aluno {
    int matricula;
    int presencas;
    float percentual;
};

struct turma {
    int codigo;
    char disciplina[50];
    int carga_horaria;
    char professor[60];
    struct aluno alunos[MAX_ALUNOS];
    int total_alunos;
};

int main() {
    struct turma turmas[MAX_TURMAS];
    int total_turmas = 0;
    int opcao;

    do {
        printf("\n=== SISTEMA DE CONTROLE DE TURMAS ===\n");
        printf("1. Cadastrar nova turma\n");
        printf("2. Listar todas as turmas\n");
        printf("3. Detalhes de uma turma\n");
        printf("4. Relatorio completo\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar(); // Limpa o buffer

        switch(opcao) {
            case 1: // Cadastrar nova turma
                if (total_turmas >= MAX_TURMAS) {
                    printf("Limite maximo de turmas atingido!\n");
                    break;
                }

                printf("\n=== CADASTRO DE TURMA %d ===\n", total_turmas + 1);

                // Dados básicos da turma
                printf("Codigo da turma: ");
                scanf("%d", &turmas[total_turmas].codigo);
                getchar();

                printf("Nome da disciplina: ");
                fgets(turmas[total_turmas].disciplina, 50, stdin);
                turmas[total_turmas].disciplina[strcspn(turmas[total_turmas].disciplina, "\n")] = '\0';

                printf("Carga horaria (horas): ");
                scanf("%d", &turmas[total_turmas].carga_horaria);
                getchar();

                printf("Nome do professor: ");
                fgets(turmas[total_turmas].professor, 60, stdin);
                turmas[total_turmas].professor[strcspn(turmas[total_turmas].professor, "\n")] = '\0';

                // Cadastro de alunos
                turmas[total_turmas].total_alunos = 0;
                int continuar = 1;

                while (continuar && turmas[total_turmas].total_alunos < MAX_ALUNOS) {
                    int i = turmas[total_turmas].total_alunos;

                    printf("\nAluno %d:\n", i + 1);
                    printf("Matricula: ");
                    scanf("%d", &turmas[total_turmas].alunos[i].matricula);

                    printf("Quantidade de presencas: ");
                    scanf("%d", &turmas[total_turmas].alunos[i].presencas);

                    // Calcula percentual de frequência
                    turmas[total_turmas].alunos[i].percentual =
                        ((float)turmas[total_turmas].alunos[i].presencas /
                         turmas[total_turmas].carga_horaria) * 100;

                    turmas[total_turmas].total_alunos++;

                    if (turmas[total_turmas].total_alunos < MAX_ALUNOS) {
                        printf("\nCadastrar outro aluno? (1-Sim/0-Nao): ");
                        scanf("%d", &continuar);
                    }
                }

                total_turmas++;
                break;

            case 2: // Listar todas as turmas
                printf("\n=== LISTA DE TURMAS ===\n");
                for (int i = 0; i < total_turmas; i++) {
                    printf("%d. %s (Cod: %d) - Prof: %s - %d alunos\n",
                           i+1, turmas[i].disciplina, turmas[i].codigo,
                           turmas[i].professor, turmas[i].total_alunos);
                }
                break;

            case 3: // Detalhes de uma turma
                if (total_turmas == 0) {
                    printf("Nenhuma turma cadastrada!\n");
                    break;
                }

                printf("Informe o numero da turma (1 a %d): ", total_turmas);
                int num_turma;
                scanf("%d", &num_turma);
                num_turma--; // Ajusta para índice do array

                if (num_turma < 0 || num_turma >= total_turmas) {
                    printf("Turma invalida!\n");
                    break;
                }

                printf("\n=== DETALHES DA TURMA ===\n");
                printf("Disciplina: %s\n", turmas[num_turma].disciplina);
                printf("Codigo: %d\n", turmas[num_turma].codigo);
                printf("Professor: %s\n", turmas[num_turma].professor);
                printf("Carga horaria: %d horas\n", turmas[num_turma].carga_horaria);
                printf("Total de alunos: %d\n", turmas[num_turma].total_alunos);

                printf("\n=== FREQUENCIA DOS ALUNOS ===\n");
                float media_frequencia = 0;
                for (int i = 0; i < turmas[num_turma].total_alunos; i++) {
                    printf("Matricula: %d - Presencas: %d - Frequencia: %.1f%%\n",
                           turmas[num_turma].alunos[i].matricula,
                           turmas[num_turma].alunos[i].presencas,
                           turmas[num_turma].alunos[i].percentual);
                    media_frequencia += turmas[num_turma].alunos[i].percentual;
                }

                if (turmas[num_turma].total_alunos > 0) {
                    media_frequencia /= turmas[num_turma].total_alunos;
                    printf("\nMedia de frequencia da turma: %.1f%%\n", media_frequencia);
                }
                break;

            case 4: // Relatório completo
                printf("\n=== RELATORIO COMPLETO ===\n");
                printf("Total de turmas no semestre: %d\n\n", total_turmas);

                for (int t = 0; t < total_turmas; t++) {
                    printf("TURMA %d: %s (Cod: %d)\n", t+1, turmas[t].disciplina, turmas[t].codigo);
                    printf("Professor: %s\n", turmas[t].professor);
                    printf("Total alunos: %d\n", turmas[t].total_alunos);

                    float media_turma = 0;
                    int alunos_baixa_freq = 0;

                    for (int a = 0; a < turmas[t].total_alunos; a++) {
                        media_turma += turmas[t].alunos[a].percentual;
                        if (turmas[t].alunos[a].percentual < 75.0) {
                            alunos_baixa_freq++;
                        }
                    }

                    if (turmas[t].total_alunos > 0) {
                        media_turma /= turmas[t].total_alunos;
                        printf("Media de frequencia: %.1f%%\n", media_turma);
                        printf("Alunos com frequencia abaixo de 75%%: %d\n\n", alunos_baixa_freq);
                    }
                }
                break;

            case 0:
                printf("Encerrando o sistema...\n");
                break;

            default:
                printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}

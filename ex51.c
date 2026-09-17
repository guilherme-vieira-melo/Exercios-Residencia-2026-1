#include <stdio.h>

int main() {
    char sexo, resp;
    int sim = 0, nao = 0, femSim = 0, mascNao = 0, totalFem = 0, totalMasc = 0;

    for (int i = 0; i < 20; i++) {
        printf("Entrevistado %d - Sexo (M/F) e Resposta (S/N): ", i + 1);
        scanf(" %c %c", &sexo, &resp);

        if (resp == 'S' || resp == 's') sim++;
        if (resp == 'N' || resp == 'n') nao++;

        if (sexo == 'F' || sexo == 'f') {
            totalFem++;
            if (resp == 'S' || resp == 's') femSim++;
        } else if (sexo == 'M' || sexo == 'm') {
            totalMasc++;
            if (resp == 'N' || resp == 'n') mascNao++;
        }
    }

    printf("a) Pessoas que responderam sim: %d\n", sim);
    printf("b) Pessoas que responderam nao: %d\n", nao);
    printf("c) %% Mulheres que responderam sim: %.2f%%\n", totalFem ? ((float)femSim / totalFem) * 100 : 0);
    printf("d) %% Homens que responderam nao: %.2f%%\n", totalMasc ? ((float)mascNao / totalMasc) * 100 : 0);
    return 0;
}

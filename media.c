#include <stdio.h>
#include <stdlib.h>

 int main() {
    float n1, n2, nf, m1, mf = 0;

    printf("insira aqui a nota da primeira prova\n");
    scanf("%f", &n1);
    printf("insira aqui a nota da segunda prova:\n");
    scanf("%f", &n2);

    m1 = (n1 + n2) / 2.0;

    if (m1 >= 7.0){
        printf("parabens, voce foi aprovado com media: %.2f\n", m1);
    } else if (m1 <= 3.0){
        printf("Voce esta reprovado pois sua media: %.2f foi menor que a media minima para a final\n", m1);
    } else {
        printf("sua media foi: %.2f voce ira para a final\n", m1);
        printf("insira aqui sua nota da prova final:\n");
        scanf("%f", &nf);
        mf = (m1 + nf) / 2.0;
        if (mf >= 5.0){
            printf("parabens, voce foi aprovado com media: %.2f na prova final\n", mf);
        } else {
                printf("voce foi reprovado apos a prova final com media %.2f\n", mf);
            }
        }
        return 0;
    }
    

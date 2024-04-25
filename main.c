#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A, B;
    int N, T;

    scanf("%d\n", &N);

        for (int i = 0; i < N; i++){
            scanf("%f %f %d", &A, &B, &T);
            if(T == 0){
                printf("A corrida ainda nao comecou\n");
            }
            else if (A == 0 && B == 0 && T != 0){
                printf("Os dois pilotos nao querem competir\n");
            }
            else if (A == 0){
                printf("O piloto A desistiu inesperadamente\n");
            }

            else if (B == 0){
                printf("O piloto B desistiu inesperadamente\n");
            }
            else if (T < 0){
                printf("De alguma forma os pilotos voltaram no tempo\n");
            }
            else if(A > B){
                printf("O kart A venceu e percorreu %.2fkm a mais que o kart B\n", (A*T) - (B*T));
            }
            else if (B > A){
                printf("O kart B venceu e percorreu %.2fkm a mais que o kart A\n", (B*T) - (A*T));
            }
            else if (A == B){
                printf("Os karts empataram, percorrendo cada %d.00km\n", T);
            }
        }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int A, B, C, D, F;
    A = 90;
    B = 80;
    C = 70;
    D = 60;
    F = 0;

    int score;

    printf("Enter your score: ");
    scanf("%d", &score);

    if(score >= A)
    {
        printf("A\n");
    }
    else
    {
        if(score < A && score >= B)
        {
            printf("B\n");
        }
        else
            if(score < B && score >= C)
        {
            printf("C\n");
        }
        else
            if(score < C && score >=D)
        {
            printf("D\n");
        }
        else
            if(score < D)
        {
            printf("F\n");
        }
    }

    return 0;
}

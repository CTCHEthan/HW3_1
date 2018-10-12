#include <stdio.h>
#include <stdlib.h>


//prototypes
void evaluateScore();
float score;


int main()
{
    printf("Enter your score: ");

    scanf("%f", &score);
    evaluateScore();




    return 0;
}

void evaluateScore()
{
    if(score >= 90)
    {
        printf("A\n");
    }
        else if(score <= 90 && score >= 80)
        {
            printf("B\n");
        }
        else if(score <= 80 && score >= 70)
        {
            printf("C\n");
        }
        else if(score <= 70 && score >= 60)
        {
            printf("D\n");
        }
        else if(score <= 60)
        {
            printf("F\n");
        }
}

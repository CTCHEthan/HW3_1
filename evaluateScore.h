#ifndef EVALUATESCORE_H_INCLUDED
#define EVALUATESCORE_H_INCLUDED

//prototypes
void evaluateScore(float);
float score;

void evaluateScore(float score)
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



#endif // EVALUATESCORE_H_INCLUDED

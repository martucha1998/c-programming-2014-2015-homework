#include <stdio.h>

void calc_travel_path(float *pacX, float *pacY, float *nacX, float *nacY, float travelVector[2], float slideVector[2], float *pacMuscleWeight)
{
    float muscleWeitht = *pacMuscleWeight;
    travelVector[0] = *nacX - *pacX;
    travelVector[1] = *nacY - *pacY;
    slideVector[0] = travelVector[0] / muscleWeitht;
    slideVector[1] = travelVector[1] / muscleWeitht;
}
int main()
{
    /* Although it can be made like a game with a field and stuff,
     this is a much simpler solution.*/
    float pacMuscleWeight = 1;
    int numNacepin;
    float pX = 0;
    float pY = 0;
    scanf("%d", &numNacepin);
    scanf("%f %f", &pX, &pY);
    float nacepinCans[numNacepin];
    int i;
    float nacX, nacY;
    for(i = 0; i < numNacepin; i++)
    {
        scanf("%f %f", &nacX, &nacY);
        nacepinCans[i] = nacX*10 + nacY;
    }

    float travelVector[2];
    float slideVector[2];
    float translocVector[2];
    int curNacepin = 0;
    while(curNacepin < numNacepin)
    {
        nacX = (int)nacepinCans[curNacepin] / 10;
        nacY = (int)nacepinCans[curNacepin] % 10;
        calc_travel_path(&pX, &pY, &nacX, &nacY, &travelVector, &slideVector, &pacMuscleWeight);
        translocVector[0] = (travelVector[0] + slideVector[0]);
        translocVector[1] = (travelVector[1] + slideVector[1]);
        pX += translocVector[0];
        pY += translocVector[1];
        printf("%.2f %.2f\n", translocVector[0], translocVector[1]);
        pacMuscleWeight *= 2;
        curNacepin++;
    }
    printf("%.2f %.2f", pX, pY);
    return 0;
}

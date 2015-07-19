#include <stdio.h>

int count;

struct Vector2
{
    float X;
    float Y;
};

void PrintVector(struct Vector2 *vec)
{
    printf("%.2f %.2f\n",vec -> X,vec -> Y);
}

struct Vector2 CalculateMoveVector(struct Vector2 *position, struct Vector2 target, int mass)
{
    struct Vector2 result;
    result.X = target.X - position -> X;
    result.Y = target.Y - position -> Y;
    result.X += result.X/mass;
    result.Y += result.Y/mass;
    return result;
}

int main()
{
    int i,mass;
    mass = 1;
    struct Vector2 pacmanPosition;

    do
    {
        scanf("%d", &count);
    }while(count < 0);

    scanf("%f", &pacmanPosition.X);
    scanf("%f", &pacmanPosition.Y);

    struct Vector2 nacepinPositions[count];

    for(i = 0; i < count; ++i)
    {
        struct Vector2 nacepinPosition;
        scanf("%f", &nacepinPositions[i].X);
        scanf("%f", &nacepinPositions[i].Y);
    }
    for(i = 0; i < count; ++i)
    {
        struct Vector2 MoveVector = CalculateMoveVector(&pacmanPosition,nacepinPositions[i],mass);
        mass *= 2;
        pacmanPosition.X += MoveVector.X;
        pacmanPosition.Y += MoveVector.Y;
        PrintVector(&MoveVector);
    }

    PrintVector(&pacmanPosition);
    return 0;
}

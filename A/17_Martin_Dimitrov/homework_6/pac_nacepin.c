#include <stdio.h>

#define VARELI_MAX 100

struct Vector
{
	float x;
	float y;
};

void PrintMovement(struct Vector *vareliPos, int vareliCount, struct Vector startingPos)
{
	struct Vector currentPos;
	struct Vector posDiff;
	int masa = 1, i;
	currentPos.x = startingPos.x;
	currentPos.y = startingPos.y;
	for (i = 0; i < vareliCount; ++i)
	{
		posDiff.x = vareliPos[i].x + (vareliPos[i].x - currentPos.x) / masa - currentPos.x;
		posDiff.y = vareliPos[i].y + (vareliPos[i].y - currentPos.y) / masa - currentPos.y;
		printf("%.2f ", posDiff.x);
		printf("%.2f\n", posDiff.y);
		currentPos.x += posDiff.x;
		currentPos.y += posDiff.y;
		masa *= 2;
	}
	printf("%.2f ", currentPos.x);
	printf("%.2f\n", currentPos.y);
}

int main()
{
	int vareliCount;
	scanf("%d", &vareliCount);
	struct Vector startingPos;
	scanf("%f", &startingPos.x);
	scanf("%f", &startingPos.y);
	struct Vector vareliPos[VARELI_MAX];
	int i;
	for (i = 0; i < vareliCount; ++i)
	{
		scanf("%f", &vareliPos[i].x);
		scanf("%f", &vareliPos[i].y);
	}
	PrintMovement(vareliPos, vareliCount, startingPos);
	getchar();
	getchar();
	return 0;
}
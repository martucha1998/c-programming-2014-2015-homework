#include <stdio.h>

#define BARRELS_MAX 100

struct Vector
{
	float x;
	float y;
};

void PrintMovement(Vector *barrelsPositions, int barrelsCount, Vector startingPos)
{
	struct Vector currentPosition;
	struct Vector positionDifference;
	int mass = 1;
	currentPosition.x = startingPos.x;
	currentPosition.y = startingPos.y;

	for (int i = 0; i < barrelsCount; ++i)
	{
		positionDifference.x = barrelsPositions[i].x + (barrelsPositions[i].x - currentPosition.x) / mass - currentPosition.x;
		positionDifference.y = barrelsPositions[i].y + (barrelsPositions[i].y - currentPosition.y) / mass - currentPosition.y;

		printf("%.2f ", positionDifference.x);
		printf("%.2f\n", positionDifference.y);

		currentPosition.x += positionDifference.x;
		currentPosition.y += positionDifference.y;

		mass *= 2;
	}

	printf("%.2f ", currentPosition.x);
	printf("%.2f\n", currentPosition.y);
}

int main()
{
	int barrelsCount;
	scanf("%d", &barrelsCount);
	struct Vector startingPos;
	scanf("%f", &startingPos.x);
	scanf("%f", &startingPos.y);

	struct Vector barrelsPositions[BARRELS_MAX];

	int i;
	for (i = 0; i < barrelsCount; ++i)
	{
		scanf("%f", &barrelsPositions[i].x);
		scanf("%f", &barrelsPositions[i].y);
	}

	PrintMovement(barrelsPositions, barrelsCount, startingPos);
	getchar();
	getchar();

	return 0;
}
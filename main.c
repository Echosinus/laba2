#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
void main()
{
	struct queue* qu;
	qu = malloc(sizeof(struct queue));
	inqueue(qu);
	int matr[N][N];
	int count;
	printf("entry number element\n");
	scanf("%d ", &count);
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{

			scanf("%d", &matr[i][j]);
		}
	}
	push(qu, 0);
	while (isempty(qu) == 0)
	{
		int curnode = pop(qu);
		for (int i = 0; i < count; i++)
		{
			if (matr[curnode][i] == 1)
			{
				push(qu, i);
				for (int j = 0; j < count; j++)
				{
					matr[j][i] = 0;
				}
			}
			matr[i][curnode] = 0;
		}
		printf("%d ", curnode + 1);
	}

}

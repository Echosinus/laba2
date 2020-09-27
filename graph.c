#include "graph.h"
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void init_queue(struct queue* q) //инициализация очереди
{
	q->quefirst = 0;
	q->quelast = -1;
	return;
}
int isempty(struct queue* q) //проверка пуста ли очередь
{
	if (q->quelast < q->quefirst)
		return 1;
	else  return 0;
}
int pop(struct queue* q) // удаление в очереди
{
	int x = q->que[q->quefirst];
	q->quefirst++;
	return x;
}
int push_node(struct queue* q, int x) //добавление в очередь
{
	if (q->quelast < N)
	{
		q->quelast++;
		q->que[q->quelast] = x;
		return 0;
	}
	else
		//printf("queue is full\n");
		return 1;
}
int print(struct queue* q) //вывод элементов
{
	int h;
	if (isempty(q) == 1)
	{
		/*printf("queue is empty\n");*/
		return 1;
	}
	for (h = q->quefirst; h <= q->quelast; h++)
		printf("%d ", q->que[h]);
	return 0;
}
int graph_bypass(struct queue* q)
{
	int matr[N][N];
	int count;
	scanf("%d ", &count);
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count; j++)
		{
			scanf("%d", &matr[i][j]);
		}
	}
	while (isempty(q) == 0)
	{
		int curnode = pop(q);
		for (int i = 0; i < count; i++)
		{
			if (matr[curnode][i] == 1)
			{
				push_node(q, i);
				for (int j = 0; j < count; j++)
				{
					matr[j][i] = 0;
				}
			}
			matr[i][curnode] = 0;
		}
		printf("%d ", curnode + 1);
	}
	return 0;
}

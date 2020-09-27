#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "graph.h"
void main()
{
	struct queue* q;
	q = malloc(sizeof(struct queue));
	init_queue(q);
	printf("entry number element\n");
	push_node(q, 0);
	graph_bypass(q);
	system("pause");
	free(q);
	return 0;
}
















//void main()
//{
//	struct queue* q;
//	q = malloc(sizeof(struct queue));
//	init_queue(q);
//	int matr[N][N];
//	int count;
//	printf("entry number element\n");
//	scanf("%d ", &count);
//	for (int i = 0; i < count; i++)
//	{
//		for (int j = 0; j < count; j++)
//		{
//
//			scanf("%d", &matr[i][j]);
//		}
//	}
//	push_node(q, 0);
//	while (isempty(q) == 0)
//	{
//		int curnode = pop(q);
//		for (int i = 0; i < count; i++)
//		{
//			if (matr[curnode][i] == 1)
//			{
//				push_node(q, i);
//				for (int j = 0; j < count; j++)
//				{
//					matr[j][i] = 0;
//				}
//			}
//			matr[i][curnode] = 0;
//		}
//		printf("%d ", curnode + 1);
//	}
//
//}

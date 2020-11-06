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



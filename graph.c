#include "graph.h"
void inqueue(struct queue* q) //������������� �������
{
	q->quefirst = 0;
	q->quelast = -1;
	return;
}
int isempty(struct queue* q) //�������� ����� �� �������
{
	if (q->quelast < q->quefirst)
		return 1;
	else  return 0;
}
int pop(struct queue* q) // �������� � �������
{
	int x = q->que[q->quefirst];
	q->quefirst++;
	return x;
}
void push(struct queue* q, int x) //���������� � �������
{
	if (q->quelast < N)
	{
		q->quelast++;
		q->que[q->quelast] = x;

	}
	else
		printf("queue is full\n");
	return;
}
void print(struct queue* q) //����� ���������
{
	int h;
	if (isempty(q) == 1)
	{
		printf("queue is empty\n");
		return;
	}
	for (h = q->quefirst; h <= q->quelast; h++)
		printf("%d ", q->que[h]);
	return;
}
#pragma once
#define N 100
struct queue //�������
{
	int que[N];
	int quefirst, quelast;
};
void inqueue(struct queue* q); //������������� �������
int isempty(struct queue* q); //�������� ����� �� �������
void print(struct queue* q); //����� ���������
void push(struct queue* q, int x); //���������� � �������
int pop(struct queue* q); // �������� � �������
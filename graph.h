#pragma once
#define N 100
struct queue //очередь
{
	int que[N];
	int quefirst, quelast;
};
void inqueue(struct queue* q); //инициализация очереди
int isempty(struct queue* q); //проверка пуста ли очередь
void print(struct queue* q); //вывод элементов
void push(struct queue* q, int x); //добавление в очередь
int pop(struct queue* q); // удаление в очереди
#pragma once
#define N 99
struct queue //очередь
{
	int que[N];
	int quefirst, quelast;
};
void init_queue(struct queue* q); //инициализация очереди
int isempty(struct queue* q); //проверка пуста ли очередь
int print(struct queue* q); //вывод элементов
int push_node(struct queue* q, int x); //добавление в очередь
int graph_bypass(struct queue* q);//обход графа
int adding_element(struct queue* q); //обход графа

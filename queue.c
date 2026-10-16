#include <stdio.h>
#include <stdlib.h>
struct qqueue {
	int tab[100];
	int ptr;
};
typedef struct qqueue* queue;
queue new_queue(){
	queue q = malloc(sizeof(struct qqueue));
	q->ptr = 0;
	return q;
}

void enqueue(queue s, int value){
	s->tab[s->ptr]=value;
	s->ptr= s->ptr+1;
}

int bottom(queue q){
	return q->tab[0];
}

void dequeue(queue q){
	for (int i=0;i<=q->ptr-2;i++){
		q->tab[i]=q->tab[i+1];
	}
	q->ptr=q->ptr-1;
}


void main(){
	printf("hello world");
	
}
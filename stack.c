#include <stdio.h>
#include <stdlib.h>
struct sstack {
	int tab[100];
	int ptr;
};
typedef struct sstack* stack;

stack new_stack(){
	stack s = malloc(sizeof(struct sstack));
	s->ptr = 0;
	return s;
}

void push(stack s, int value){
	s->tab[s->ptr]=value;
	s->ptr= s->ptr+1;
}

int top(stack s){
	return s->tab[s->ptr-1];
}

void pop(stack s){
	s->ptr=s->ptr-1;
}

void add(stack s){
	int a=top(s);pop(s);
	int b=top(s);pop(s);
	push(s,a+b);
}

void sub(stack s){
	int a=top(s);pop(s);
	int b=top(s);pop(s);
	push(s,a-b);
}

void mult(stack s){
	int a=top(s);pop(s);
	int b=top(s);pop(s);
	push(s,a*b);
}

void dup(stack s){
	int x = top(s);
	push(s,x);
}

void print(stack s){
	printf("%i \n",top(s));
}

void swap(stack s){
	int a=top(s);pop(s);
	int b=top(s);pop(s);
	push(s,a);push(s,b);
}


void main(){
	printf("hello world");
	
}
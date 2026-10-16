#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <float.h>
#include <math.h>

struct cell {
	float head;
	struct cell* tail;
};

typedef struct cell* list;



list add(float h, list t){
	list l=malloc(sizeof(struct cell));
	l -> head = h ; l -> tail = t;
	return l;}

void print(list org){
	list l = org;
	while (l!=NULL){
		printf("%.1f\t",l->head);
		l=l->tail;
		
	}printf("\n");
}
list range(int n, float pas){
	list l=NULL;
	for(int i=n;i>=0;i=i-1){
		l=add(i*pas,l);
	}
}






list p;
void main(){
	printf("HELLO WORLD\n");
	p = add(0.2,add(0.3,add(0.1,NULL)));
	print(p);
	print(p);
	list X=range(10,0.1);
	printf("X =");print(X);
	
	
	return;
	
}

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	float x,y,r;
}CIRCLE;

CIRCLE *new_circle(float x, float y, float r){
	CIRCLE*a;
	a=malloc(sizeof(CIRCLE));
	a[0]=x;
	a[1]=y;
	a[2]=r;
}

void destroy_circle(CIRCLE *to_destroy){
	free(to_destroy);
}

int main(){
	float a,b,c;
	CIRCLE*k;
	new_circle(a,b,c);
	destroy_circle(k);
}


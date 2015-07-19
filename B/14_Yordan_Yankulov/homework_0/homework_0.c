#include <stdio.h>

#include <stdlib.h>

// index, size, data

// [0, 0, 0, 0, 0]

// [0, -1, -2, -3, -4 ...]

struct vector_t {
int *data;
int index, size;
};

void vector_init(struct vector_t*);

void vector_destroy(struct vector_t*);

int vector_get_size(struct vector_t);

int vector_resize(struct vector_t*, int index);

int vector_at(struct vector_t*, int index);

void vector_push_back(struct vector_t*, int value);

int vector_pop_back(struct vector_t*);

int main() {return 0;}

void vector_init(struct vector_t* v) {
v->size = 5;
v->index = 0;
v->data = (int*) malloc(v->size * sizeof(int));
}

void vector_destroy(struct vector_t* v){
free(v->data);
v->size = 0;
v->index = 0;
}

int vector_get_size(struct vector_t v) {
return v.index;
}

void vector_push_back(struct vector_t* v, int value) {

v->data[v->index++] = value;
if(v->size <= v->index ){
	printf("Error"); 
}
}

int vector_at(struct vector_t* v,int index) {
if((v->index >= 0) && (v->index <= v->size)){
return v->data[index];
}
}

int vector_pop_back(struct vector_t* v) {
if(v->index == 0){
return v->data[--v->index];
}
int vector_resize(struct vector_t* v, int index){
if(((v->size % 2 ) == 0) && (v->size >= 2)){
	v->data =(int*) malloc(v->size * sizeof(int) / 2);
} else {
	v->data =(int*) malloc(v->size * 2 * sizeof(int));
}
return v->data[index];
}}

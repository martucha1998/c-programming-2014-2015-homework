#include <stdio.h>

#include <stdlib.h>


struct vector_t {
	int *data;
	int index, size;
};
void vector_init(struct vector_t*);
void vector_destroy(struct vector_t*);
int vector_get_size(struct vector_t);
int vector_resize(struct vector_t*);
int vector_at(struct vector_t, int index);
void vector_push_back(struct vector_t*, int value);
int vector_pop_back(struct vector_t*);
int main() {
	int size;
	struct vector_t vector;
	vector_init(&vector);
	int i;
	for (i = 0; i < 5; i++)
	{
		vector_push_back(&vector, i);
		printf("Capacity: %d Value: %d\n", vector.size, vector_at(vector, i));
	}
	vector_destroy(&vector);
	return 0;
}
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
	int index, size;
	int res = vector_resize(v);
	v->data[v->index++] = value;
}

int vector_at(struct vector_t v, int index) {
	int size;
	if(index >= 0 && index <= size){
		printf("Index is valid.\n");
	}
	return v.data[index];
}
int vector_pop_back(struct vector_t* v) {
	int index;
	if(index == 0){
		printf("The vector is empty.");
	}
	return v->data[--v->index];
	
}
int vector_resize(struct vector_t* v){
	int a = 0, is_sizing, index, size;
	if(index == size){
		a = 1;
	}else if(index < size){
		if ((size >= 2) && (size % 2 == 0)){
			v->size /= 2;
			is_sizing = 1;
		}
	}else{
		a = 2;
	}
	if (a == 1){
		v->size *= 2;
		is_sizing = 2;
	}
	
	is_sizing = 0; 
	if(is_sizing == 0){
		return 0; //  0 for invalid resize
	}else if(is_sizing == 1){
		return 1; //  1 for /2
	}else if(is_sizing == 2){
		return 2; //  2 for *2	
	}
}

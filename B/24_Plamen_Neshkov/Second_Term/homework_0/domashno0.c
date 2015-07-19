#include <stdio.h>
#include <stdlib.h>
// index, size, data

// [0, 0, 0, 0, 0]
// [0, -1, -2, -3, -4 ...]

#define ENOENT 2
#define ENOMEM 12
#define EFAULT 14
#define EINVAL 22

struct vector_t {
	int *data;
	int index, size;
};

void vector_init(struct vector_t*);
int vector_destroy(struct vector_t*);
int vector_get_size(struct vector_t);
int vector_push_back(struct vector_t*, int value);
int vector_at(struct vector_t, int index);
int vector_pop_back(struct vector_t*);
//float for returning resize multiplier
float vector_resize(struct vector_t*);
void vector_copy(struct vector_t*, struct vector_t*);

int main() {
	struct vector_t x;
	vector_init(&x);
	vector_push_back(&x, 1);
	vector_push_back(&x, 2);
	vector_push_back(&x, 3);
	vector_pop_back(&x);
	vector_resize(&x);
	vector_at(x, 2);

	struct vector_t y;
	vector_copy(&x, &y);
	vector_pop_back(&y);
	vector_pop_back(&y);
	if (vector_get_size == 0)
		vector_destroy(&y);

	return 0;
}

void vector_init(struct vector_t* v) {
	v->size = 5;
	v->index = 0;
	v->data = (int*) malloc(v->size * sizeof(int));
}

int vector_destroy(struct vector_t* v){
	if (v->size == 0)
		return EFAULT;
	free(v->data);
	v->size = 0;
	v->index = 0;
	return 0;
}

int vector_get_size(struct vector_t v) {
	return v.index;
}

int vector_push_back(struct vector_t* v, int value) {
	if (v->index == v->size)
		return ENOMEM;
	v->data[v->index++] = value;
	return 0;
}

int vector_at(struct vector_t v, int index) {
	if ((index < 0) || (index > v.size))
		return EINVAL;
	return v.data[index];
}

int vector_pop_back(struct vector_t* v) {
	if (v->index == 0)
		return ENOENT;
	return v->data[--v->index];
}

float vector_resize(struct vector_t* v) {
	if (v->index == v->size) {
		v->size *= 2;
		return 2;
	} else if (v->index <= v->size/2) {
		v->size /= 2;
		return 0.5;
	}
	return 1;
}

void vector_copy(struct vector_t* from, struct vector_t* to) {
	to->size = from->size;
	to->index = from->index;
	to->data = (int*) malloc(from->size * sizeof(int));
	int i;
	for (i = 0; i < from->size; i++) {
		vector_push_back(to, from->data[i]);
	}
}

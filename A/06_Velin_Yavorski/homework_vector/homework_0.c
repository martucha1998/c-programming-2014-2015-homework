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

	int vector_destroy(struct vector_t*);

	int vector_get_size(struct vector_t);

	int vector_resize(struct vector_t*);

	int vector_at(struct vector_t, int index);

	void vector_push_back(struct vector_t*, int value);

	int vector_pop_back(struct vector_t*);
	
	void vector_copy(struct vector_t*, struct vector_t*);

int main() 
{
	struct vector_t vec;
	struct vector_t vec2;
	int i;
	printf("Original vector test\n");
	vector_init(&vec);
	printf("Pushing into vector\n");

	for(i=0; i<10; i++)
	{
		vector_push_back(&vec, i);
		printf("Index: %d\n", vector_get_size(vec));
	}

	printf("Popping out of vector\n");

	for(i=0; i<10; i++)
	{
		vector_pop_back(&vec);
		printf("Index: %d\n", vector_get_size(vec));
	}

	vector_copy(&vec, &vec2);
	vector_destroy(&vec);

	printf("Copied vector test\n");
	printf("Pushing in vector\n");

	for(i=0; i<10; i++)
	{
		vector_push_back(&vec2, i);
		printf("Index: %d\n", vector_get_size(vec2));
	}

	printf("Popping out of vector\n");

	for(i=0; i<10; i++)
	{
		vector_pop_back(&vec2);
		printf("Index: %d\n", vector_get_size(vec2));
	}
	
	vector_destroy(&vec2);
return 0;
}

void vector_init(struct vector_t* v) {

	v->size = 5;

	v->index = 0;

	v->data = (int*) malloc(v->size * sizeof(int));

}

int vector_destroy(struct vector_t* v) {
	if(v->size!=0)
	{
		free(v->data);

		v->size = 0;

		v->index = 0;
	}
	else return -1;
}

int vector_get_size(struct vector_t v) {

	return v.index;

}

void vector_push_back(struct vector_t* v, int value) {

	if(v->index==v->size)
		vector_resize(v);
	v->data[v->index++] = value;
}

int vector_at(struct vector_t v, int index) {

	if((index<0) || (index > v.size))
		return -1;
	else
		return v.data[index];

}

int vector_pop_back(struct vector_t* v) {

	if(v->index==0)
	{
		printf("No elements left !\n");
		return -1;
	}
	else 
		if(v->index < (v->size/2))
		vector_resize(v);
	if(v->index!=0)
	return v->data[--v->index];

}

int vector_resize(struct vector_t* v)
{
	int new_size,old_size, i;
	old_size = v->size;

	if(v->index < (v->size/2))
	{
		v->size = v->size/2;
		old_size = v->size;
	}
	else
		if(v->index = v->size)
		v->size = v->size*2;

	int *new_data = (int*)malloc(sizeof(int) * v->size);

	for(i=0; i<(old_size); i++)
		new_data[i] = v->data[i];

	free(v->data);
	v->data = new_data;

	if(v->data == NULL)
		return -1;
	return 0;
}
void vector_copy(struct vector_t* from, struct vector_t* to)
{
	int i;
	to->data = (int*)malloc(sizeof(int) * from->size);

	to->size = from->size;
	to->index = from->index;

	for(i=0; i<(from->index); i++)
		to->data[i] = from->data[i];
		
}














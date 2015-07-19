#include <stdio.h>
#include <stdlib.h>

struct vector_t {
	int *data;
	int size;
	int index;
};
void vector_init (struct vector_t* v)
{
	v->size = 5;
	v->index = 0;
	v->data = (int *)malloc(v->size * sizeof(int));
}
void vector_destroy(struct vector_t* v)
{
	free(v->data);
	v->size = 0;
	v->index = 0;
}

int vector_get_size(struct vector_t v)
{
	return v.index;
}

void vector_push_back(struct vector_t* v , int value)
{	if(v->index >= v->size)
		{
			vector_resize(v);
		} 
		v->data[v->index++] = value;
		
}

int vector_at(struct vector_t v,int index)
{	if (index >= 0 && index < v.index)
	{
	return v.data[index];
	}
}

int vector_pop_back(struct vector_t* v )
{
	 	
	if (v->index != 0) 
	{
		if(v->size / 2 >= v->index)
		{
			vector_resize(v);
		} 
		return v->data[--v->index];
	}
}

int vector_resize(struct vector_t* v )
{	
	int mediator[v->size];
	int i ;
	for (i = 0; i < v->index;i++)
	{
		mediator[i] = v->data[i]; 
	}
	
	if (v->index >= v->size)
	{
		v->size *= 2;
	}
	 else  if (v->index <= v->size / 2)
	{
		v->size /= 2;
	}
	free(v->data);
	v->data = (int*)malloc(v->size * sizeof(int));
	
	for (i = 0; i < v->index;i++)
	{
		v->data[i] = mediator[i];
	}	
	return v->size;
}
	
	void vector_copy(struct vector_t* from,struct vector_t* to )
	{
		vector_init(to);
		int i;
		for (i = 0;i < vector_get_size(*from);i++)
		{
			vector_push_back(to,vector_at(*from,i));
		}
	}
	
int main () {
	 struct vector_t vector, vector2;

	 vector_init(&vector);

	 vector_push_back(&vector,1);
	 vector_push_back(&vector,2);
	 vector_push_back(&vector,3);
	 vector_push_back(&vector,4);
	 vector_push_back(&vector,5);
	 vector_push_back(&vector,6);

	 vector_copy(&vector, &vector2);
	 printf("Razmer na kopiraniqt vektor: %d\n", vector_get_size(vector2));

	 printf("Razmer: %d\n", vector_get_size(vector));
	 printf("Pop: %d\n", vector_pop_back(&vector));
	 printf("Pop: %d\n", vector_pop_back(&vector));
	 printf("Pop: %d\n", vector_pop_back(&vector));
	 printf("Pop: %d\n", vector_pop_back(&vector));
	 printf("Pop: %d\n", vector_pop_back(&vector));
	 printf("Razmer: %d\n", vector_get_size(vector));
	 printf("Pop: %d\n", vector_pop_back(&vector));
	 
	 printf("Razmer: %d\n", vector_get_size(vector));

	 vector_destroy(&vector);
	return 0;
}


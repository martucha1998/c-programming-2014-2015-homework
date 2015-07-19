
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
int vector_resize(struct vector_t*);
int vector_at(struct vector_t, int index);
void vector_push_back(struct vector_t*, int value);
int vector_pop_back(struct vector_t*);


int main()
{
    struct vector_t vect;
    vector_init(&vect);
    int i,mysterious_number;
    for(i=0;i<43;i++) vector_push_back(&vect,i);
    mysterious_number = vector_at(vect,vector_get_size(vect)-1);
    printf( "%d %d\n" , vector_pop_back(&vect) , mysterious_number );
    printf("LOL! MAGIK!\n");
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
    if( v->index==v->size ) vector_resize(v);
    v->data[v->index++] = value;
}

int vector_at(struct vector_t v, int index) {
    if(index>=v.size||index<0) exit(42); //Just don't do it!
    return v.data[index];
}

int vector_pop_back(struct vector_t* v) {
    if(v->index==0) return 0;
    return v->data[--v->index];
}

int vector_resize(struct vector_t* v) //returns 1 when somehing f@cked_up
{                                     //returns 0  -> everything is OK!
    int new_size = v->size*2,i;
    int *new_data = malloc( sizeof(int)*new_size );
    if( new_data==NULL ) return 1;
    for( i=0; i<(v->size) && i<(new_size); i++ ) new_data[i] = v->data[i];
    v->size = new_size;
    free(v->data);
    v->data = new_data;
    return 0;
}


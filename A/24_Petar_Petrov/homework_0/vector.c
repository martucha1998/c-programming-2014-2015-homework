#include<stdio.h>
#include<stdlib.h>

struct vector_t {
    int size,index;
    int *data;
};

void vector_init(struct vector_t *v);
void vector_destroy(struct vector_t *v);
int vector_get_size(struct vector_t v);
void vector_resize(struct vector_t *vec);
int vector_at(struct vector_t v,int index);
void vector_push_back(struct vector_t *v, int value);
int vector_pop_back(struct vector_t *v);
void vector_copy(struct vector_t *from, struct vector_t *to);

int main() {
    struct vector_t vector,vec_to;
    int value = 1,index;
    vector_init(&vector); //initializes a vector
    printf("\n");
    printf("Pushing back elements:\n");
    for(index = 0; index < 15; index++, value++)
    {
        printf("%d <- index\n",vector_get_size(vector)); //shows current index
        vector_push_back(&vector,value); //the size doubles two times - to 20
        printf("%d <- element\n",vector_at(vector,index)); //prints the added elements
        printf("\n"); //for better layout
    }
    printf("New(doubled) size: %d\n",vector.size); //shows n-times doubled size
    printf("\n");
    printf("Popping back elements:\n");
    while(vector_get_size(vector) > 8)
    {
        printf("%d\n",vector_pop_back(&vector)); //pops back elements until need for resize
        index--;
    }
    printf("New(reduced) size: %d\n",vector.size); //shows size after decrease
    printf("\n");
    printf("Identical copy of the vector:\n");
    vector_copy(&vector,&vec_to);
    vector_destroy(&vector); //frees the vector
    vector_destroy(&vec_to); //frees the vector
    return 0;
}

void vector_init(struct vector_t *v) {
    v->size = 5;
    v->index = 0;
    v->data = (int*) malloc(v->size * sizeof(int));
}

void vector_destroy(struct vector_t *v) {
    if(v->size != 0)
    {
        free(v->data);
        v->size = 0;
        v->index = 0;
    }
    else
    {
        printf("Vector is already empty!\n"); //check if there is double free issue
        return;
    }
}

int vector_get_size(struct vector_t v) {
    return v.index;
}

int vector_at(struct vector_t v,int index) {
    if(index >= 0 && index < v.index)
    {
        return v.data[index];
    }
    else
    {
        printf("Invalid index!!!\n");
        return -2; //returns -2 if index is invalid
    }
}

void vector_push_back(struct vector_t *v,int value) {
    if(v->index < v->size) {
        v->data[v->index++] = value;
    }
    else {
        vector_resize(v);
        v->data[v->index++] = value; 
    }
}

int vector_pop_back(struct vector_t *v) {
    if(v->index != 0) {
         --v->index;
         vector_resize(v);
         return v->data[v->index];
    }
    else {
        printf("Vector is empty!\n");
        return -5; //returns -5 for empty vector
    }
}

void vector_resize(struct vector_t *vec) {
    int *new_data,new_size;
    if(vec->index == vec->size)
    {
        new_size = vec->size * 2;
        new_data = (int*) malloc(new_size * sizeof(int));
        for(vec->index = 0; vec->index < vec->size; vec->index++)
        {
            new_data[vec->index] = vec->data[vec->index];
        }
        free(vec->data);
        vec->data = new_data;
        vec->size = new_size;
        new_size = 0;
    }
    else if(vec->index < (vec->size)/2)
    {
        vec->size /= 2;
        new_data = (int*) malloc(vec->size * sizeof(int));
        for(vec->index = 0; vec->index < vec->size; vec->index++)
        {
            new_data[vec->index] = vec->data[vec->index];
        }
        free(vec->data);
        vec->data = new_data;
        vec->index--;
    }
}

void vector_copy(struct vector_t *from, struct vector_t *to)
{
    to->size = from->size; // initializes the duplicate vector
    to->index = 0; // same
    to->data = (int*) malloc(to->size * sizeof(int)); // same
    for(from->index = 0; from->index < from->size; from->index++, to->index++)
    {
        to->data[to->index] = from->data[from->index]; // transferring values from original to duplicate vector
        printf("%d -> %d\n",from->data[from->index],to->data[to->index]); //printing out the two vectors
    }   
}

#ifndef VECTOR_DEF
#define VECTOR_DEF

#define VECTOR_INIT(vec) vector vec;\
 vector_init(&vec)

typedef struct sVectorList
{
    /* data */
    void **items;
    int capacity;
    int total;
} sVectorList;

typedef struct sVector vector;
struct sVector
{
    /* data */
    sVectorList vectorList;
    //function pointers
    int (*pfVectorTotal)(vector *);
    int (*pfVectorResize)(vector *, int);
    int (*pfVectorAdd)(vector *, void *);
    int (*pfVectorSet)(vector *, int, void *);
    void *(*pfVectorGet)(vector *, int);
    int (*pfVectorDelete)(vector *, int);
    int (*pfVectorFree)(vector *);
};

int vectorTotal(vector *);

int vectorResize(vector *, int);

int vectorPushBack(vector *, void*);

int vectorSet(vector *, int, void*);

void *vectorGet(vector *, int);

int vectorDelete(vector *, int);

int vectorFree(vector *);

void vector_init(vector *);

#endif
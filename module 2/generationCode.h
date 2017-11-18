#ifndef GENERATIONCODE_H_INCLUDED
#define GENERATIONCODE_H_INCLUDED

#include <stdio.h>

typedef struct Order Order;
struct Order
{
    int beginning;
    int finish;
};

FILE* openFile();

void writeParam(FILE* content, Order* element);

#endif // GENERATIONCODE_H_INCLUDED

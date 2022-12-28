#include <stdio.h>
#define COND 2  
 
struct book
{
    char title[30];
    char author[30];
    int price;
};
 
void local(int);
int bigNum (int, int);
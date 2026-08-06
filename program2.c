/*
Define a struct for linked list nodes and calculate its size #pragma pack.
*/
#include<stdio.h>
#pragma pack(1)

struct node
{
    int data;
    struct node *next;
    
};

int main()
{
    struct node obj;

    printf("%lu\n",sizeof(obj));  //12 byte
    // 4 (int) +  8(pointer)
    return 0;
}

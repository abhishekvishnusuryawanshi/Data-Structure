/*
The program demonstrates the size of a struct containing an integer and a pointer, showing the impact of padding.
*/
#include<stdio.h>

struct node
{
    int data;
    struct node *next;
    
};


int main()
{
    struct node obj;

    printf("%lu\n",sizeof(obj));  //16 byte
    // 4 (int) + 4(padding)+ 8(pointer)
    return 0;
}

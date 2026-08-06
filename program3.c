/*
Implement a simple linked list node structure with a main function to initialize and print data.
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

    obj.data = 11;
    obj.next = NULL;

    printf("%d",obj.data);  
   
    return 0;
}

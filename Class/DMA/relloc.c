#include<stdio.h>
#include<stdlib.h>
int main()
{
    int size,*ptr;
    printf("Enter the size");
    scanf("%d", &size);
    ptr = (int*)malloc(size * sizeof(int));
    ptr = (int*)realloc(ptr, sizeof(int));
    free(ptr);
    for (int i = 0; i < size; i++)
    {
        printf("Enter the element");
        scanf("%d", ptr + i);
    }
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *ptr + i);
    }
    
    
return 0;
}
#include <stdio.h>
#include <string.h>

#define string char*

int main(void)
{
    char* name = "Cliff";
    printf("%s\n", name);
    for(int i = strlen(name) - 1; i >= 0; i++)
    {
        printf("%c", name[i]);
    }
    printf("\n");
}
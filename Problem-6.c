#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int n;
    printf("Input the string: ");
    gets(a);

    n = strlen(a);
    for(int i = n-1; i >= 0; i--)
    {
        printf("%c ", a[i]);
    }

    return 0;
}

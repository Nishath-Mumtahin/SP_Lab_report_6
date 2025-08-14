#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int n, count = 0;
    printf("Input the string: ");
    gets(a);

    n = strlen(a);
    for(int i = 0; i < n; i++)
    {
        if (a[i] != ' ' && (i == 0 || a[i-1] == ' '))
        {
            count++;
        }
    }
    printf("%d ", count);

    return 0;
}

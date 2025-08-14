#include <stdio.h>
#include<string.h>
int main()
{
    char a[101];
    gets(a);
    int freq[256] = {0};
    for (int i = 0; a[i] != '\0' && a[i] != '\n'; i++)
    {
        freq[(unsigned char)a[i]]++;
    }
    int maxFreq = 0;
    char maxChar ='\0';
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > maxFreq)
        {
            maxFreq = freq[i];
            maxChar = (char)i;
        }
    }
    printf("The Highest frequency of character '%c'\n", maxChar);
    printf("appears number of times: %d\n", maxFreq);
    return 0;
}
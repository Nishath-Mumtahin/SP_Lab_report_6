#include <stdio.h>
#include <string.h>
int main()
{
    char str[101];
    printf("Input the string: ");
    gets(str);

    int freq[256] = {0};
    int i = 0;
    while (str[i] != '\0' && str[i] != '\n')
    {
        freq[(unsigned char)str[i]]++;
        i++;
    }
    int maxFreq = 0;
    char maxChar = '\0';

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
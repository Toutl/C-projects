#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Isogram_v2.1
// By: Ubaldo Neri

int main()
{
    system("cls");
    char phrase[50];
    printf("\n Enter a Word: ");
    fgets(phrase, sizeof(phrase), stdin);
    phrase[strcspn(phrase, "\n")] = '\0';
    if (!phrase || strcmp(phrase, "\0\0") == 0)
    {
        printf("  - Error!\n");
        return 0;
    }
    int lng = strlen(phrase);
    for (int c = 0; c < lng; c++)
    {
        for (int v = 0; v < lng; v++)
        {
            if (phrase[v] == '-' || phrase[v] == ' ' || c == v)
            {
                continue;
            }
            if (phrase[c] == phrase[v] || phrase[c] == phrase[v] + 32 || phrase[c] + 32 == phrase[v])
            {
                printf("  - '%s' is not an Isogram\n", phrase);
                return 0;
            }
        }
    }
    printf("  - '%s' is an Isogram\n", phrase);
    return 0;
}
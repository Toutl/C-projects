#include <stdio.h>
#include <string.h>

// Isogram_v3
// By: Ubaldo Neri

// Definition: An isogram (also known as a "non-pattern word") is a word or word without a repeating letter, however spaces and hyphens are allowed to appear multiple times.

int main()
{
    char word[50];

    printf("\n Enter a Word: ");
    fgets(word, sizeof(word), stdin);
    word[strcspn(word, "\n")] = '\0';

    if (!word || strcmp(word, "\0\0") == 0)
    {
        printf("  - Error!\n");
        return 0;
    }
    
    int wordLength = strlen(word);
    
    for (int currentChar = 0; currentChar < wordLength; currentChar++)
    {
        for (int comparisonChar = 0; comparisonChar < wordLength; comparisonChar++)
        {
            if (word[comparisonChar] == '-' || word[comparisonChar] == ' ' || currentChar == comparisonChar)
            {
                continue;
            }

            if (word[currentChar] == word[comparisonChar] || word[currentChar] == word[comparisonChar] + 32 || word[currentChar] + 32 == word[comparisonChar])
            {
                printf("  - '%s' is not an Isogram\n", word);
                return 0;
            }
        }
    }

    printf("  - '%s' is an Isogram\n", word);

    return 0;
}
    
#include <stdio.h>
#include <string.h>

typedef struct
{
    char sentence[1000];
    int length;
} Sentence;

int main()
{
    Sentence s;
    printf("Enter a sentence: ");
    fgets(s.sentence, sizeof(s.sentence), stdin);
    s.sentence[strcspn(s.sentence, "\n")] = 0;
    s.length = strlen(s.sentence);
    printf("The length of the sentence is: %d", s.length);
    return 0;
}
// PROGRAM TO REVERSE A SENTENCE  //

#include <stdio.h>
void reverseSentence();

int main()
{
    printf("Enter a sentence: ");
    reverseSentence();

    return 0;
}

void reverseSentence()
{
    char c;
    scanf("%c", &c);

    if( c != '\n')
    {
        reverseSentence();
        printf("%c",c);
    }
}


//compile using gcc -Wall sentence_reversal.c -o sentence_reversal.exe

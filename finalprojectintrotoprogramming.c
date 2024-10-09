#include <stdio.h>
#include <string.h>

void Replace(char *str, char ch, char Newch);
void options();
int Search();
void palindrome(char str[]);

char str[50]; //str array of requested length
int which; //action options
char ch, Newch; //characters (used in replace action option)
int i;//counter

void main() 
{
    printf("Enter message(max 50 characters): ");
    gets(str);//inserts message to array
    options();
}

void options()
{
    printf("Available options: \n");
    printf("1. Search\n2. Replace\n3. Palindrome\n4. Exit\n");
    printf("Type a number to choose the corresponding action \n");
    scanf("%d", &which);
    switch(which)
    {
        case 1: //Search character
            Search();
            break;

        case 2: //Replace character with another
            printf("\n Please enter the character you wish to replace: ");
            scanf(" %c", &ch); 

            printf("\n Please enter new character: ");
            scanf(" %c", &Newch); 

            Replace(str, ch, Newch);

            printf("\n After replace action '%c' with '%c' = %s \n", ch, Newch, str);

            options();
            return;

        case 3: //Palindrome check
            palindrome(str);
            options();
            break;

        case 4:
            break; //exit

        default: //if number inserted isn't in range 1 through 4
            printf("This isn't a valid option"); 
            options(); 
            break;
    }
}

int Search()
{
    char s; 
    int t = 0;
    printf("Enter character to search: ");
    scanf(" %c", &s);

    for(int i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] == s)
        {
            printf("Character %c was found in position %d \n", s, i); 
            t++; 
        }
    }

    if(t > 0) 
    {
        printf("Found this many times: %d\n", t);
    }
    else 
    {
        printf("No such character! \n");
    }

    options();
}

void Replace(char *str, char ch, char Newch)
{
    int i;

    for(i = 0; str[i] != '\0'; i++) 
    {
        if(str[i] == ch) 
        {
            str[i] = Newch;
        }
    }
}

void palindrome(char str[])
{
    int l = 0;
    int h = strlen(str) - 1;

    while (h > l)
    {
        if (str[l++] != str[h--]) 
        {
            printf("%s isn't a palindrome\n", str);
            return;
        }
    }
    printf("%s Palindrome\n", str);
}

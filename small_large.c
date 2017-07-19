#include<stdio.h>
#include<string.h>
 
int count = 0;  // To count the number of words
char smallest_word[20]; //To store the smallest word
char largest_word[20]; // To store the largest word
void print_words(char phrase[10][20]);// to print all the words
void get_words(char phrase[10][20]);//to get the words from the user
void compare_words(char phrase[10][20]);//function to find the smallest and the largest word in the group.
 
int main()
{
    char phrase[10][20];
    printf("Enter Words (Enter A 4 letter Word to terminate) \n");
    get_words(phrase);
    compare_words(phrase);
    printf("All the Words Entered Are :\n");
    print_words(phrase);
    printf("The Largest And Smallest Words Are : \n%s \n%s",largest_word,smallest_word);
    return 0 ;
}
 
void print_words(char phrase[10][20])
{
    for(int i = 0 ;i<count;i++)
    {
        printf("%s\n",phrase[i]);
    }
}
 
void get_words(char phrase[10][20])
{   int length_str = 0;
    for(int i = 0 ;length_str!=4;i++)
    {
        scanf("%s",&phrase[i]);
        length_str = strlen(phrase[i]);
        ++count;
    }
}
 
void compare_words(char phrase[10][20])
{
    strcpy(smallest_word,phrase[0]);
    strcpy(largest_word,phrase[0]);
    for(int i = 1;i<count;i++)
    {
        if(strcmp(smallest_word,phrase[i])>0)
        {
            strcpy(smallest_word,phrase[i]);
        }
        else if(strcmp(largest_word,phrase[i])<0)
        {
            strcpy(largest_word,phrase[i]);
        }
    }
}
#include<stdio.h>
#include<string.h>

typedef struct 
{
    /* data */
    char name;
    int number;
}person;

int main(void)
{
    person people[2];

    people[0].name = 'h';
    people[0].number = 9369316141;

    people[1].name = 'p';
    people[1].number = 8881119360;
    
    string name = scanf("Name: ");
    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;

}
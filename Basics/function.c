# include <stdio.h>
void namaste();
void bonjour();

int main()
{
    char ch;
    printf("Enter i for Indian and f for french : ");
    scanf("%c", &ch);

    if(ch=='i')
    {
       namaste();
    }
    else if(ch=='f')
    {
       bonjour();
    }
    else
    {
        printf("Please Choose i or f\n");
    }
    return 0;
}

void namaste() 
{
   printf("Namaste\n");
}

void bonjour()
{
    printf("Bonjour\n");
}

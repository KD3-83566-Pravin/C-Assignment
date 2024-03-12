#include <stdio.h>

int main()
{
    int marks[5];
    int total = 0;
    
    printf("Enter the marks for each subject: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
    }

    
    for (int i = 0; i < 5; i++)
    {
        total += marks[i];
    }

    printf("Total Marks=%d\n", total);
    
    if (total >= 90)
    {
        printf("Grade Ex");
    }
    else if (total < 90 || total >= 80)
    {
        printf("Grade A");
    }
    else if (total < 80 || total >= 70)
    {
        printf("Grade B");
    }
    else if (total < 70 || total >= 60)
    {
        printf("Grade C");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
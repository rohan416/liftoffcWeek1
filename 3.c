#include<stdio.h>

int main()
{
    int phy, chem, bio, math, comp; 
    float percentage; 

    printf("enter the marks of physics, chemistry, biology, maths and computer\n");
    scanf("%d %d %d %d %d", &phy, &chem, &bio, &math, &comp);

    percentage = (phy + chem + bio + math + comp) / 5;

    printf("Percentage = %.2f\n", percentage);

    if(percentage >= 90)
    {
        printf("Grade A");
    }
    else if(percentage >= 80)
    {
        printf("Grade B");
    }
    else if(percentage >= 70)
    {
        printf("Grade C");
    }
    else if(percentage >= 60)
    {
        printf("Grade D");
    }
    else if(percentage >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}

//WAP to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as input from the user.
#include <stdio.h>

int main()
{
    int physics, chemistry, maths,total;
    printf("Enter Physics Marks: ");
    scanf("%d", &physics);

    
    printf("Enter Chemistry Marks: ");
    scanf("%d", &chemistry);

    
    printf("Enter Maths Marks: ");
    scanf("%d", &maths);
    // Percentage=(Marks Obtained/Total)*100

    
    total = physics + chemistry + maths;
    printf("Marks Obtained: %d\n", total);

    float percentage;
    percentage = (total * 100.0) / 300;
    printf("Percentage: %.2f %%\n", percentage);

    if (physics >= 33  && chemistry >=33 && maths>=33 && percentage>=40)
    {
        printf("Congrulations! You Passed the Exam");
    }
    else
    {
        printf("Fail");
    }

    return 0;
}
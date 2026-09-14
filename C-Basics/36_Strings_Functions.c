#include <stdio.h>
#include <string.h>
int main()
{
    char st[100];
    int choice;
    printf("Enter Your Line of Words: ");
    fgets(st, 100, stdin);
    int i = 0;
    while (1)
    {
        printf("1. Check Lenght of the string.\n");
        printf("2. Copy Your String to New String.\n");
        printf("3. Concatenate Your String with a New String.\n");
        printf("4. Compare two strings.\n");
        printf("5. Exit\n");
        printf("CHOOSE YOUR OPTION: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            int len = strlen(st);
            printf("Lenght of Your String is %d\n", len);
        }
        else if (choice == 2)
        {
            char str[100];
            strcpy(str, st);
            printf("Your String has been sucessfully copied to a new String\n");
        }
        else if (choice == 3)
        {
            char str[100];
            printf("Enter other string: ");
            scanf("%s",str);
            strcat(st, str);
            printf("%s\n",st);
            
        }
        else if (choice == 4)
        {
            char str[100];
            printf("Enter other string:\n");
            scanf("%s",str);
            int a=strcmp(st, str);
            printf("%d\n",a);

            printf("Returns Negative if ASCII of first comes before second and 0 for same strings else gives positive\n");
        }
        else if (choice == 5)
        {
            printf("You have sucessfully Exit the Program\n");
            return 1;
        }
        else
        {
            printf("INVALID, PUT FROM 1-4 NO OTHER NUMBERS\n");
        }

        i++;
    }

    return 0;
}
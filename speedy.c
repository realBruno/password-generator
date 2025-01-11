// Straight Forward Generator

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    srand((unsigned) time(NULL));

    int length = atoi(argv[1]);

    if (length < 8)
    {
        printf("PASSWORD TOO SHORT. "
                "CHOOSE A NUMBER GREATER THAN OR EQUAL TO 8.\n");
        exit(EXIT_FAILURE);
    }

    FILE *password = fopen("password.txt", "w");

    for (int i = 0; i < length;)
    {
        int pw = rand() % 256;
        if (32 <= pw && pw <= 126 || 191 <= pw && pw <= 255)
        {
            fprintf(password, "%c", pw);
            i++;
        }
    }

    printf("Password generated successfully. Check \'password.txt\'.\n");

    fclose(password);

    return 0;
}
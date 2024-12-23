#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{   
    clock_t begin, end;
    double runtime;

    srand((unsigned) time(NULL));
    FILE *output = fopen("password.txt", "w");

    unsigned long long size;
    printf("Insert password length (min. 8): ");
    scanf("%llu", &size);

    if (size < 8)
    {
        printf("Invalid length.\n");
        exit(EXIT_FAILURE);
    }
    begin = clock();
    for (unsigned long long i = 0; i < size;)
    {
        int pw = rand() % 256;
        if (32 <= pw && pw <= 126 ||
            191 <= pw && pw <= 255)
            {
                fprintf(output, "%c", pw);
                i++;
            }
        else
            continue;
    }
    end = clock();
    runtime = ((double) (end - begin))/CLOCKS_PER_SEC;
    
    printf("Password successfully generated. "
            "Check \'password.txt\' file.\n");
    printf("Password took %f seconds to be generated.\n", runtime);
    
    fclose(output);

    return 0;
}
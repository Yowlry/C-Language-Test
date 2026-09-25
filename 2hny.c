#include <stdio.h>

#define GREETING "Happy New Year!"

int main()
{
    // Direct output using printf()
    printf("%s\n", "Happy New Year!");

    // Output via puts() function
    puts("Happy New Year!");

    // String array definition
    char congratulation[16] = "Happy New Year!";
    printf("%s\n", congratulation);

    // Pointer-based output (const char *)
    const char *str_p = "Happy New Year!";
    printf("%s\n", str_p);

    // Output via standard streams (fprintf / fputs to stdout)
    fputs("Happy New Year!\n", stdout);
    fprintf(stdout, "%s\n", "Happy New Year!");

    // Character-by-character loop iteration
    char str_arr[] = "Happy New Year!";
    for (int i = 0; str_arr[i] != '\0'; i++)
        {
            putchar(str_arr[i]);
        }
    putchar('\n');

    // Preprocessor macro expansion (#define)
    printf("%s\n", GREETING);

    return 0;
}

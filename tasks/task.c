#include <stdio.h>

int main(int argc, char *argv[]) {
    int num1 = atoi(argv[1]);
    int num2 = atoi(argv[2]);
    
    // Prompt the user for input
    //printf("Enter the first number: ");
    //scanf("%d", &num1);

    //printf("Enter the second number: ");
    //scanf("%d", &num2);

    if (argc != 3 || num1 == 0 || num2 == 0)
    {
        printf("Usage: %s <num1> <num2>\n", argv[0]);
        return 0;
    }

    // Calculate and print the sum
    int sum = num1 + num2;
    printf("Sum: %d\n", sum);

    return 0; // Exit successfully
}

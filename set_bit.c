#include <stdio.h>

int setBit(int num, int bitPosition) 
{

    int mask = 1 << bitPosition;

    num = num | mask;

    return num;
}

int main() {
    int number, bitPos;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the bit position to set (0-31): ");
    scanf("%d", &bitPos);

    if (bitPos < 0 || bitPos > 31) {
        printf("Invalid bit position!\n");
        return 1;
    }

    number = setBit(number, bitPos);

    printf("Result: %d\n", number);

    return 0;
}


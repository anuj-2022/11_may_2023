#include <stdio.h>

int toggleBit(int num, int bitPosition) 
{

    int mask = 1 << bitPosition;

   num = num ^ mask;

    return num;
}

int main() {
    int number, bitPos;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("Enter the bit position to toggle (0-31): ");
    scanf("%d", &bitPos);

   number = toggleBit(number, bitPos);

    printf("Result: %d\n", number);

    return 0;
}


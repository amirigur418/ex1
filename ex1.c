/******************
Name:Amir Gur Vrotzlavski
ID:325029015
Assignment:ex1
*******************/
#include <stdio.h>

// REMINDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE. not even "==, &&, ||, !="

int main()
{

    // Ascii
    printf("Ascii:\n");
    /*. Scan one character from the user.
        Then, refer to it as an integer.
        a. Print its value.
        b:
        Print “0”, if its integer representation is even.
        print “1” if its integer representation is odd. */
    printf("Please enter a character\n");
    char asciiVal;
    scanf("%c",&asciiVal);
    // printing while referring to asciiVal as int
    printf("Its numerical value is: %d\n",asciiVal);
    // using the mask "0x1" to detect even or odd by using "&" operator
    asciiVal = asciiVal & 0x1;
    printf("0 for even, 1 for odd: %d\n",asciiVal);

    // 2's complement and other representations
    printf("\n2's complement to other representations:\n");
    /*. Scan a negative integer. [2’s complement].
        Print its value in 1’s complement.
        Print its value as unsigned. */
    printf("Please enter a negative integer\n");
    int neg;
    scanf("%d",&neg);
    /* Calculating 2's complement by flipping all the bits
       in neg using NOT "~". Then, using the arithmetic
       negation "-" to turn the value to 1's complement. */
    int onesComp = -~neg;
    printf("1's complement: %d\n",onesComp);
    // Referring the value in neg as unsigned using "%u"
    printf("unsigned: %u\n", neg);

    // Shifting right and left
    printf("\nShifting right and left:\n");
    /*. Scan 3 integers.
        The first one - the value you will play with.
        The second and the third - how much to shift right and left, respectively.
        Print the value after shifting right and then shifting left. */
    printf("Please enter 3 integers\n");
    int val;
    scanf("%d",&val);
    int shiftRight;
    scanf("%d",&shiftRight);
    int shiftLeft;
    scanf("%d",&shiftLeft);
    // Shifting right "val" by the value in "shiftRight".
    val = val >> shiftRight;
    // Shifting left what's now in "val" by the value in "shiftLeft".
    val = val << shiftLeft;
    printf("After shifting right and left: %d",val);

    // Even - Odd
    printf("\nEven - Odd:\n");
    /* Scan 3 Integers.
    If at least two of them are even - print 0.
    If at least two of them are odd - print 1. */
    printf("Please enter 3 integers\n");
    int first;
    scanf("%d", &first);
    int second;
    scanf("%d", &second);
    int third;
    scanf("%d", &third);
    // using the mask "0x1" to detect even or odd by using "&" operator
    first = first & 0x1;
    second = second & 0x1;
    third = third & 0x1;
    // using the logic (A AND B) OR (B AND C) OR (A AND C)
    int ifMostOddOrEven = (first & second) | (second & third) | (first & third);
    printf("0 - most of them are even, 1 - most of them are odd: %d", ifMostOddOrEven);

    // Different Bases
    printf("\nDifferent Bases:\n");
    /*  Scan two numbers:
        One in octal base, one in Hexadecimal base.
        Print their LSB’s.
        Print their MSB’s. */
    printf("Please enter two numbers in octal and hexadecimal bases\n");
    int octal;
    scanf(" %o", &octal);
    int hexadecimal;
    scanf("%x", &hexadecimal);
    // Using the mask "0x1" to get the LSB
    int lsbOctal = octal & 0x1;
    int lsbHex = hexadecimal & 0x1;
    /* shifting right 31 bits to get the MSB (int = 32 bits)
       and using the mask "0x1" like said above
     */
    int msbOctal = (octal >> 31) & 0x1;
    int msbHex = (hexadecimal >> 31) & 0x1;
    printf("LSBs: %d %d\n", lsbOctal, lsbHex);
    printf("MSBs: %d %d\n", msbOctal, msbHex);

    printf("Bye!\n");

    return 0;
}

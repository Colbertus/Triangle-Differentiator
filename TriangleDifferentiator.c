#include <stdio.h>
int main()
{
    /* Initialize all of your sides into seperate variables */
    int s1, s2, s3;
    /* Ask for the size of each side of the triangle and input them into their respected variables */
    printf("Please enter the three sizes of your triangle's sides with spaces in between: ");
    scanf("%d %d %d", &s1, &s2, &s3);
    /* Use logical operators within if/else statements to compare the sides of the triangle */
    if (s1 == s2 && s1 == s3 && s2 == s3) {
        printf("/nThe triangle is equilateral."); 
    } else if (s1 != s2 && s1 != s3 && s2 != s3) {
        printf("\nThe triangle is scalene."); 
    } else if (s1 == s2 || s1 == s3 || s2 == s3) {
        printf("\nThe triangle is isosceles."); 
    /* In case the user inputs an answer outside of the bounds, print a statement that notifies them */
    } else {
        printf("\nThe entered input is not valid."); 
    }
    return 0;
}
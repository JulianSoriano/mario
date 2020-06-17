//pull data from these libraries
#include <cs50.h>
#include <stdio.h>
////////////////////////////////

//Variables:
int height;

////////////////////////////////

//main body of code
int main(void)
{
    //prompt user for height between 1 and 8:

    //do the following and then check for while condition:
    do
    {
        //prompt user for "Height: "
        height = get_int("Height: ");
    }

    //if height is smaller than 1 or greater than 8, re-prompt user
    while (height < 1 || height > 8);

    //////////////////////////////////////////////////////////////

    //pyramid:

    //i represents the current row
    for (int i = 1; i <= height; i++)
    {
        //gap to the left of the pyramids:
        for (int space = 0; space < (height - i); space++)
        {
            printf(" ");
        }

        ///////////////////////////////////////////////////////////

        //left pyramid:
        for (int leftbrick = 0; leftbrick < i; leftbrick++)
        {
            printf("#");
        }

        ///////////////////////////////////////////////////////////

        //gap between the pyramids
        printf("  ");

        ///////////////////////////////////////////////////////////

        //right pyramid:
        for (int rightbrick = 0; rightbrick < i; rightbrick++)
        {
            printf("#");
        }

        ///////////////////////////////////////////////////////////

        //prompt to a new line
        printf("\n");
    }
}

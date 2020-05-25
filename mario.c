//pull data from these libraries
#include <cs50.h>
#include <stdio.h>

//main body of code
int main(void)
{
    //prompt for height that only accepts values using 1 to 8:

    //variables
    int input;

    //do the following and then check for while condition:
    do
    {
        //prompt user for "Height: "
        input = get_int("Height: ");
    }
    //if input is smaller than 1 or greater than 8, re-prompt user
    while (input < 1 || input > 8);

    //pyramid:

    //height starts at 1, if smaller or equal to input, add 1 and repeat until height matches input
    for (int height = 1; height <= input; height++)
    {
        //space starts at 0, if space is smaller than (input minus height), add a space
        for (int space = 0; space < (input - height); space++)
        {
            //output space
            printf(" ");
        }

        //width starts at 0, if smaller than height, add 1 and repeat until width matches input
        for (int width = 0; width < height; width++)
        {
            //output brick
            printf("#");
        }

//drop prompt to new line
        printf("\n");
    }

}

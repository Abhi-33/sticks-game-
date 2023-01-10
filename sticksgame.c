#include <stdio.h>

int main()
{
    int sticks_left = 21, player, computer;
    while (1)
    {
        printf("Pick 1-4 out of %d sticks : ", sticks_left);
        scanf("%d", &player);
        if (player > 4 || player < 1)

        {
            continue;
        }
        computer = 5 - player;
        sticks_left = sticks_left - player - computer;
        printf("computer picked %d sticks  \n", computer);

        if (sticks_left == 1)
        {
            printf("only 1 stick left\n****    YOU LOST!    ****\n");
            break;
        }
    }

    return 0;
}

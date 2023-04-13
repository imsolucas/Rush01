#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

// ./a.out Hello World 1 2 3 NULL
char    **copy_av(char **av)
{
    char    **output;
    int     string_counter = 1;

    while (av[string_counter] != NULL)
        string_counter++;
    output = malloc(sizeof(char *) * 6);
    
    string_counter = 1;
    while (av[string_counter] != NULL)
    {
        output[string_counter - 1] = malloc(sizeof(char) * ft_strlen(av[string_counter]) + 1);
        int char_counter = 0;
        while (av[string_counter][char_counter] != '\0')
        {
            output[string_counter - 1][char_counter] = av[string_counter][char_counter];
            char_counter++;
        }
        output[string_counter - 1][char_counter] = '\0';
        string_counter++;
    }
    output[string_counter - 1] = NULL;
    return (output);
}

int main(int ac, char **av)
{
    // int i = 1;
    // while (av[i] != NULL)
    // {
    //     printf("%s\n", av[i]);
    //     i++;
    // }

    char    **copy;
    copy = copy_av(av);
    int i = 0;
    while (copy[i] != NULL)
    {
        printf("%s\n", copy[i]);
        i++;
    }
    i = 0;
    while (copy[i] != NULL)
    {
        free(copy[i]);
        i++;
    }
    free(copy);
    system("leaks -q a.out");
}

/**

int recursion(board, position)
{
    // Will only trigger when the whole board is filled
    if (board_is_solved(board))
        return (1);

    // Will only trigger when we reach the end of the row
    if (check_row_is_correct(board) == false)
        return (0);

    // Will only trigger when we reach the end of the row
    if (check_column_is_correct(board) == false) 
        return (0);

    int number = 0;
    while (++number <= 4)
    {
        put_number_into_our_board(board, number);
        if (check_board_for_same_number(board, number))
        {
            remove_the_number_from_our_board(board, number);
            continue ;
        }
        if (recursion(board, position + 1))
            return (1);
        remove_the_number_from_our_board(board, number);
    }
    return (0);
}

int main()
{
    check_input();
    board = parse_input();
    if (recursion(board, 0))
        print_board(board); // If recurs return 1
    else
        printf("Board cannot be solved");
}

Putting numbers we already know are correct (1 and 4)
Possibilities in each box
Recude the possibilites based on the clue

N - c + 2 + d
4 - 3 + 2 + 1
4

*/
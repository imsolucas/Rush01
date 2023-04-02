/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@42.fr>                          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/02 13:00:40 by djin              #+#    #+#             */
/*   Updated: 2023/04/02 18:46:09 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	first_condition_check(int argc, char *argv);

int	main(int argc, char *argv[])
{
	char	colup[4];
	char	coldown[4];
	char	rowleft[4];
	char	rowright[4];
	int	answer[4][4];

	colup[4] = {argv[1, 2, 3, 4]};
	coldown[4] = {argv[5, 6, 7, 8]};
	rowleft[4] = {argv[9, 10, 11, 12]};
	rowright[4] = {argv[13, 14, 15, 16]}; */

	if(argc != 17)
	{
		write(1, "Error", 5);
		return (1);
	}
	else
		//1. convert ASCII char input from terminal to int
		//2. run logic function1- to fill in numbers 4 and 1
		//   -if clue4-> write 1
		//   -if clue1 -> write 4
		//   -if clue2 -> {1, 2, 3}
		//   else (if clue3 -> {1, 2}
		//  - repeat for each border side
		//3. run logic function2
		//	- if row/ column has the number, cell cannot have the number (free unused possibility cells)
		//4. run logic function3
		//   -if all remaining unconfirmed cells contain eg {1, 2,} and one cell is {1, 2, 3}
		//     the 3 belongs in that previously {1, 2, 3} cell
		//   - free no longer needed numbers
		// 5. recursion/ repeat
		// 6. print/ write the array[4][4] to generate the output on the terminal
		return (0);
}

int same_row()
{
	if (answer[0][j] == 1)
		answer[1][j] != 1;
		answer[2][j] != 1;
		answer[3][j] != 1;
}


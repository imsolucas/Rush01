/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_conditions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phiew <phiew@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/01 23:56:59 by phiew             #+#    #+#             */
/*   Updated: 2023/04/02 18:46:13 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int first_condition_check(int argc, char *argv)
{	clue_index = argc - (n * n); // = 1 //argc - (n * n)= 17 - 16 = 1   initialize clue counter based on terminal argv position
	building_level = 1; //highest floor// initialize start
	row_position = 1 // left-most position of answer squares
	while (building_level < n) //row_position < grid_max - horizontal left to right within each level- (n = size of grid; ie also the max number of rows and columns)
	{ 
									//TOP LEVEL - compare with column up clues
		if (building_level == 1) // highest row -> then compare with col1up clue
		/*int top_border_logic_function() //fill in 4, 1 and possibilities - function name to be cleaned*/
		{
			while (row_position <= 4) // <= n; ie in the terminal, the first four numbers after >./a.out
			{
				if argv[clue_index] == 4; // if colup1 clue (terminal[1] == 4)
					answer[building_level][row_position] == 1; // the number in answer grid coordinate (0,0) = 1

				else if argv[clue_index] == 1;//colup1 clue
					answer[building_level][row_position] == 4;

				else if argv[clue_index] == 2;
					answer[building_level][row_position] == {1, 2, 3};
				else
					answer[building_level][row_position] == {1, 2};
			}
			clue_index++;
			row_position++;
		}

								//BOTTOM LEVEL - compare with column down clues
		if (building_level == n) // lowest level /*building_level = n // lowest floor- minus 1 bc index count starts from 1*/
			
			while (row position <= 4)
			/*int bottom border_logic_function() //fill in 4, 1 and possibilities*/
			{
				row_position == 1;
				clue_index == n + 1 // =5 = coldown1
				while (row_position <= 4) lowest building level (max value n)
				{
					if argv[clue_index] == 4; //colup1 clue
						answer[building_level][row_position] == 1;
						write(1, "1", 1);

					else if argv[clue_index] == 1; //colup1 clue
						answer[building_level][row_position] == 4;
						write(1, "1", 1);

					else if argv[clue_index] == 2;
						answer[building_level][row_position] == {1, 2, 3};
					else
						answer[building_level][row_position] == {1, 2};
				}
				clue_index++;
				row_position++;
			}

		else // (building level is between second highest and seconf lowest- ie middle floors)
		// Middle levels - compare with equivalent level's left and right clues, everything else == 1234 etc
		// if (building_level == n - (n-1) ) // 4-(3) = 1; ie if second row from the top- compare to left clues; SECOND ROW; 9=topleft;10=secondleft
		if (building_level == n - (n-1) && building_level < n) (building level is between second highest and seconf lowest- ie middle floors)
		{	/*int second_row_logic function()*/
			
			while (row_position <= 4)
			if (row_position == 1); // left most answer square-> conmpare with left row clue
			{
				clue_index == (n * 2) + 2; //10

				if argv[terminal_clue] == 4; // (n * 2) + 2); // argv[position 9] = left side, second clue (from top to bottom)
					answer[bulding_level][row_position] == 1; //
					write(1, "1", 1);

				if argv[terminal_clue] == 1;//leftside clue
					answer[building_level][row_position] == 4;
					write(1, "4", 1);

				else if argv[terminal_position] == 2;
					int	*tempClue2;
					int	clue2possibility[];

					tempClue2 = int	*malloc(3*4);
					clue2possibility[] = {1, 2, 3};
					*tempClue2 = &clue2possibility
					answer[building_level][row_position] == tempClue2[];
				else
					int tempClue3;
					int	clue3possibility[];

					tempClue3 = int *malloc(2*4);
					clue3possibility = {1, 2}
					*tempClue3 = &clue3possibility;
					answer[building_level][row_position] == tempClue3[];
			}
			clue_index++;
			row_position++;
	}
	building_level++;
}

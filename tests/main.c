/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emaugale <emaugale@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 14:01:24 by emaugale          #+#    #+#             */
/*   Updated: 2022/01/09 15:34:08 by aweaver          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

	// en fonction des differentes valeurs retournées par wait, on pourra savoir
	// le comportement qu'il y a eu avec la fonction :
	// si on a 11, ca signifie un segfault, si on a 7, ca signifie un bus error
void	print_result(int w_result)
{
}

void	func_test(t_test *test)
{
	t_test	*test; // liste contenant tous nos test
	t_pid	pid;
	int		w_result; // resultat qu'on enverra pour notre wait();
	int		result;
	// tant qu'on aura des test a faire, on va faire un fork si on est pas sur le child process
	while(test->content != NULL)
	{
		pid = fork(); // On fais un fork pour avoir un process enfant et parent
		if (pid == -1)
			perror("fork");
		if (pid == 0) // Si le process id est a 0 (child proccess)
		{
			
				// on execute la fonction et on renvoie le result dans w_result
			wait(&w_result);
		}
		else
		{
			print_result(w_result);
			test = test->next;
		}
	}
		
}

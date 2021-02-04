/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 03:41:25 by gdoge             #+#    #+#             */
/*   Updated: 2021/02/04 03:41:27 by gdoge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	parsing_and_execution(t_all *all)
{
	first_circle_of_parsing(all);
}

int		main(int argc, char **argv, char **env)
{
	t_all	all;
	size_t	i;

	i = 0;
	flags_shutting_up(argc, argv);
	load_environments(&all, env);
	sort_environments(&all);
	//display_env(&all);
	while (1)
	{
		write(1, SHELL_NAME, ft_strlen(SHELL_NAME));
		get_next_line(0, &(all.buffer.line_1));
		parsing_and_execution(&all);
		printf("%s\n", all.buffer.line_2);
	}
	return (0);
}

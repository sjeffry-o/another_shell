/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 09:56:00 by gdoge             #+#    #+#             */
/*   Updated: 2021/02/10 09:56:01 by gdoge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int 	echo(t_all *all, size_t j)
{
	int		i;
	int		flag;

	i = (ft_strcmp(all->command[j].args[1], "-n") ? 1 : 2);
	flag = i - 1;
	if (all->command[j].args[i] == NULL)
	{
		if (!(i - 1))
			ft_putchar_fd('\n', 1);
		return (1);
	}
	while (all->command[j].args[i + 1])
	{
		ft_putstr_fd(all->command[j].args[i++], 1);
		ft_putchar_fd(' ', 1);
	}
	ft_putstr_fd(all->command[j].args[i], 1);
	if (!flag)
		ft_putchar_fd('\n', 1);
	return (1);
}
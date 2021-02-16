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

int 	echo(t_all *all)
{
	int		i;

	i = (ft_strcmp(all->command->args[1], "-n") ? 1 : 2);
	while (all->command->args[i])
		ft_putstr_fd(all->command->args[i++], 0);
	if (ft_strcmp(all->command->args[1], "-n"))
		ft_putchar_fd('\n', 0);
	return (1);
}
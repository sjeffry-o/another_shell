/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdoge <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/01 21:12:10 by gdoge             #+#    #+#             */
/*   Updated: 2021/02/01 21:24:31 by gdoge            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int		ft_strcmp(char *line1, char *line2)
{
	size_t	i;

	i = 0;
	if (line1 == NULL || line2 == NULL)
		return (1);
	while (line1[i])
	{
		if (line1[i] != line2[i])
		{
			return (line2[i] - line1[i]);
		}
		i++;
	}
	return (line1[i] - line2[i]);
}

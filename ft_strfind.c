/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcreux <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 11:57:46 by jcreux            #+#    #+#             */
/*   Updated: 2019/02/15 11:59:11 by jcreux           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strfind(char *s, int n)
{
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == n)
			return (i);
		i++;
	}
	return (-1);
}

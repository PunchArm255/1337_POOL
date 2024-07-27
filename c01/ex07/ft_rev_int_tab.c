/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 13:26:03 by mnassiri          #+#    #+#             */
/*   Updated: 2024/07/27 15:10:30 by mnassiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	rev;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		rev = tab[i];
		tab[i] = tab[j];
		tab[j] = rev;
		i++;
		j--;
	}
}

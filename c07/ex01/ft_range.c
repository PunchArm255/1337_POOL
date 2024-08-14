/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 02:49:19 by mnassiri          #+#    #+#             */
/*   Updated: 2024/08/14 02:50:02 by mnassiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	if (min >= max)
		return (NULL);
	size = max - min;
	tab = (int *)malloc(sizeof(int) * (size));
	if (tab == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		tab[i] = min;
		min++;
		i++;
	}
	return (tab);
}
/*int main()
{
	int	*tab;
	int i;

	tab = ft_range(1, 5);
	while (i < 4)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/

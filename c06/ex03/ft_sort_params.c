/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnassiri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/06 19:47:30 by mnassiri          #+#    #+#             */
/*   Updated: 2024/08/07 17:36:58 by mnassiri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*void ft_swap(char **s1, char **s2)
{
	int	*swp;

	swp = *s1;
	*s1 = *s2;
	*s2 = swp;
}*/

int	main(int argc, char **argv)
{
	int	i;
	int	j;
    char *sort;


	if (argc > 1)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
            	sort = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = sort;
				i = 1;
			}
			else
				i++;
		}
		j = 1;
		while (j < argc)
		{
			ft_putstr(argv[j]);
			write (1, "\n", 1);
			j++;
		}
	}
	return (0);
}

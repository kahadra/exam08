/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <chpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 17:20:04 by chpark            #+#    #+#             */
/*   Updated: 2021/09/25 17:20:10 by chpark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		ft_putchar(c[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}


void	ft_sort_ascii(char **argv, int size)
{
	char	*chain;
	int		i;
	int		j;

	i = 1;
	j = 2;
	while (i < size)
	{
		while (j < size)
		{
			if (ft_strcmp(argv[i], argv[j]) < 0)
			{	
				chain = argv[i];
				argv[i] = argv[j];
				argv[j] = chain;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

int	main(int argc, char **argv)
{
	int	i;

	i = argc;
	ft_sort_ascii(argv, i);
	while (i > 1)
	{
		ft_putstr(argv[i - 1]);
		ft_putchar('\n');
		i--;
	}
	return (0);
}

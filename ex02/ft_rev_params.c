/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chpark <chpark@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 16:26:34 by chpark            #+#    #+#             */
/*   Updated: 2021/09/25 16:27:10 by chpark           ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	int	i;
	
	if(argc != 0)
	{
		i = 0;
		while (argv[i] != ((void *)0))
			i++;
		while (i > 0)
		{
			ft_putstr(argv[i - 1]);
			ft_putchar('\n');
			i--;
		}
	}
	return (0);
}

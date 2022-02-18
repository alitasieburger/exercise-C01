/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asieburg <asieburg@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 23:15:38 by asieburg          #+#    #+#             */
/*   Updated: 2022/02/18 05:01:20 by asieburg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

void	ft_putstr(char *str);

void	ft_putstr(char *str)
{
	int	index_str;

	index_str = 0;
	while (str[index_str] != 0)
	{
		write(1, &str[index_str], 1);
	index_str++;
	}
}

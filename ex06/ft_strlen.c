/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asieburg <asieburg@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 03:58:06 by asieburg          #+#    #+#             */
/*   Updated: 2022/02/18 05:04:08 by asieburg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>

int	ft_strlen(char *str);

int	ft_strlen(char *str)
{	
	int	index;

	index = 0;
	while (str[index] != 0)
	{
		index++;
	}
	(return index);
}

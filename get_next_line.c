/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luis <luis@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:28:08 by luis              #+#    #+#             */
/*   Updated: 2026/11/12 12:19:57 by luis             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFERSIZE];
	char	*stack;
	int	bytes_read;

	while (read != 0)
	{
		bytes_read = read(fd, buffer, BUFFERSIZE);
		ft_printf("%d", bytes_read);
	}
}

int	main()
{
	int	fd;

	fd = open("text.txt", O_RDONLY);
	if (fd == -1)
	{
		ft_printf("ERROR OPENING FILE");
		return (1);
	}
	get_next_line(fd);
	return (0);
}
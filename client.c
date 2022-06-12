/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:06:07 by ressalhi          #+#    #+#             */
/*   Updated: 2022/04/02 12:09:05 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	check_if_degit(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (0);
	while (str[i])
	{
		if (str[i] > 57 || str[i] < 48)
			return (0);
		i++;
	}
	return (1);
}

void	send_byte(char c, int pid)
{
	int	i;

	i = 7;
	while (i >= 0)
	{
		if (c >> i & 1)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		usleep(300);
		i--;
	}
}

void	send_str(int pid, char *msg)
{
	int	i;

	i = 0;
	while (msg[i])
	{
		send_byte(msg[i], pid);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	pid;

	if (ac != 3 || !check_if_degit(av[1]))
		ft_error("wrong argements or bad pid!!\n");
	pid = ft_atoi(av[1]);
	if (pid < 0)
		exit (0);
	send_str(pid, av[2]);
}

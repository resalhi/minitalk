/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ressalhi <ressalhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 10:06:12 by ressalhi          #+#    #+#             */
/*   Updated: 2022/03/31 15:09:52 by ressalhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <unistd.h>
# include <stdlib.h>

int		check_if_degit(char *str);
void	ft_putstr(char *str);
void	ft_error(char *str);
void	ft_putnbr(int nb);
void	handler(int sig);
void	sigusr(int sign);
void	send_str(int pid, char *msg);
void	send_byte(char c, int pid);
int		ft_atoi(char *str);

#endif

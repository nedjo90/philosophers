/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <nhan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:57:42 by nhan              #+#    #+#             */
/*   Updated: 2025/02/22 15:55:30 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H

# define FALSE 0
# define TRUE 1
# define ERROR_NB_INPUT "Please enter the right number of input"
# define ERROR_NOT_DIGIT "Please enter only digit"

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_input
{
	int		nb_philo;
	int		time_die;
	int		time_eat;
	int		time_sleep;
	int		nb_time_eat;
}			t_input;

typedef struct s_philo
{
	int		id;
	t_input	input;
}			t_philo;

int			ft_atoi(const char *str);
int			ft_isdigit(int c);
size_t		ft_strlen(const char *s);

#endif
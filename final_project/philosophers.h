/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 14:57:42 by nhan              #+#    #+#             */
/*   Updated: 2025/02/22 22:54:34 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILOSOPHERS_H
#define PHILOSOPHERS_H

#define FALSE 0
#define TRUE 1
#define ERROR_NB_INPUT "Please enter the right number of input"
#define ERROR_NOT_DIGIT "Please enter only digit"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

typedef enum e_thread_action
{
	init,
	join,
	detach,
	destroy,
	lock,
	unlock
} t_thread_action;

typedef enum e_philo_state
{
	pdie,
	peat,
	psleep,
	pthink
} t_philo_state;

typedef struct s_input
{
	int nb_philo;
	int time_die;
	int time_eat;
	int time_sleep;
	int nb_time_eat;
} t_input;

typedef struct s_philo
{
	int id;
	t_input input;
} t_philo;

int ft_atoi(const char *str);
int ft_isdigit(int c);
size_t ft_strlen(const char *s);

#endif

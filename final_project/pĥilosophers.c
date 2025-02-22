/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pĥilosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <nhan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:00:24 by nhan              #+#    #+#             */
/*   Updated: 2025/02/22 16:33:03 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

static int	ft_is_positive_number(char *arg, int *nb)
{
	int	i;

	i = 0;
	*nb = -1;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
		{
			printf("%s\n", ERROR_NOT_DIGIT);
			return (FALSE);
		}
		i++;
	}
	*nb = ft_atoi(arg);
	return (TRUE);
}

static t_input	ft_check_input(int argc, char **argv)
{
	t_input	input;

	if (!(argc == 5 || argc == 6))
		printf("%s\n", ERROR_NB_INPUT);
	ft_is_positive_number(argv[1], &(input.nb_philo));
	ft_is_positive_number(argv[2], &(input.time_die));
	ft_is_positive_number(argv[3], &(input.time_eat));
	ft_is_positive_number(argv[4], &(input.time_sleep));
	if (argc == 5)
		input.nb_time_eat = -1;
	else
		ft_is_positive_number(argv[5], &input.nb_time_eat);
	return (input);
}

static void	ft_display_input(t_input input)
{
	printf("Number of philosophers: %d\n", input.nb_philo);
	printf("Time before a philosopher dies without eating: %d\n",
		input.time_die);
	printf("Duration of a meal for a philosopher: %d\n", input.time_eat);
	printf("Duration of sleep for a philosopher: %d\n", input.time_sleep);
	if (input.nb_time_eat == -1)
		printf("No eating limit\n");
	else
		printf("Number of times each philosopher must eat: %d\n",
			input.nb_time_eat);
}

int	main(int argc, char **argv)
{
	t_input input;

	input = ft_check_input(argc, argv);
	if (!(input.nb_philo < 0 && input.time_die < 0 && input.time_eat < 0
			&& input.time_sleep < 0 && input.nb_time_eat < 0))
	{
		ft_display_input(input);
		return (0);
	}
	return (1);
}
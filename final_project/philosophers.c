/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <nhan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 15:00:24 by nhan              #+#    #+#             */
/*   Updated: 2025/02/22 18:40:25 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

static int	ft_is_positive_number(char *arg, int *nb)
{
	int	i;

	i = 0;
	while (arg[i])
	{
		if (!ft_isdigit(arg[i]))
		{
			printf("%s\n", ERROR_NOT_DIGIT);
			*nb = -1;
			return (FALSE);
		}
		i++;
	}
	*nb = ft_atoi(arg);
	if (*nb >= 0)
		return (TRUE);
	else
	{
		*nb = -1;
		return (FALSE);
	}
}

static int	ft_check_input(int argc, char **argv, t_input *input)
{
	int	is_valid;

	is_valid = TRUE;
	if (!(argc == 5 || argc == 6))
	{
		printf("%s\n", ERROR_NB_INPUT);
		is_valid = FALSE;
	}
	if (is_valid == TRUE)
		is_valid = ft_is_positive_number(argv[1], &(input->nb_philo));
	if (is_valid == TRUE)
		is_valid = ft_is_positive_number(argv[2], &(input->time_die));
	if (is_valid == TRUE)
		is_valid = ft_is_positive_number(argv[3], &(input->time_eat));
	if (is_valid == TRUE)
		is_valid = ft_is_positive_number(argv[4], &(input->time_sleep));
	if (is_valid == TRUE)
	{
		if (argc == 5)
			input->nb_time_eat = -1;
		else
			is_valid = ft_is_positive_number(argv[5], &(input->nb_time_eat));
	}
	return (is_valid);
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
	t_input	input;

	if (ft_check_input(argc, argv, &input) == TRUE)
	{
		ft_display_input(input);
		return (0);
	}
	return (1);
}

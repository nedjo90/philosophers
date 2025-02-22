/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pthread_learning.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <nhan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:55:16 by nhan              #+#    #+#             */
/*   Updated: 2025/02/15 15:28:59 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "learning.h"

typedef struct t_thread
{
	int			pid;
	pthread_t	threadid;
	int			order;
}				s_thread;

void	*thread_func(void *arg)
{
	int	pid;
	int	*thread;

	thread = (int *)arg;
	printf("iterator value in thread = %d\n", *thread);
}

int	main(int argc, char const *argv[])
{
	int			i;
	pthread_t	tid;

	i = 0;
	while (++i < 1000)
	{
		if(pthread_create(&tid, 0, thread_func, &i) != 0)
		{
			printf("Thread failed\n");
			exit(0);
		}
		printf("iterator = %d | tid = %lu\n", i, tid);
	}
	pthread_exit(0);
	return (0);
}

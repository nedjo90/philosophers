/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   usleep_learning.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <nhan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:49:08 by nhan              #+#    #+#             */
/*   Updated: 2025/02/15 14:55:38 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "learning.h"

/*

int	usleep(useconds_t usec);

suspend execution for microsecond intervals
    Unités de temps pour 1 seconde :

    Secondes       : 1 s  = 1 s
    Millisecondes  : 1 s  = 1 000 ms
    Microsecondes  : 1 s  = 1 000 000 µs
    Nanosecondes   : 1 s  = 1 000 000 000 ns
    Cycle CPU (3 GHz) : 1 s ≈ 3 000 000 000 cycles
*/




int	main(int argc, char const *argv[])
{
	struct timeval	tv_before;
	struct timezone	tz_before;
	struct timeval	tv_after;
	struct timezone	tz_after;
	__useconds_t	sleeptime;

	gettimeofday(&tv_before, &tz_before);
	printf("before => %ld-%ld\n", tv_before.tv_sec, tv_before.tv_usec);
	usleep(5000000);
	gettimeofday(&tv_after, &tz_after);
	printf("after => %ld-%ld\n", tv_after.tv_sec, tv_after.tv_usec);
	return (0);
}

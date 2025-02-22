/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gettimeofday_learning.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <nhan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 13:53:23 by nhan              #+#    #+#             */
/*   Updated: 2025/02/15 14:21:17 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "learning.h"
#include <stdio.h>
#include <sys/time.h>

/*

int	gettimeofday(struct timeval *tv, struct timezone *tz);

get the time and timezone

*/

int	main(int argc, char const *argv[])
{
	struct timeval	tv;
	struct timezone	tz;

	gettimeofday(&tv, &tz);
	printf("Seconds since 1/1/1970: %ld\n", tv.tv_sec);
	printf("Microseconds: %ld\n", tv.tv_usec);
	printf("Minutes west of Greenwich: %d\n", tz.tz_minuteswest);
	printf("Daylight Saving Time adjustment: %d\n", tz.tz_dsttime);
	return (0);
}

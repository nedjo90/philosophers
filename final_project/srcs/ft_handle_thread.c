/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_thread.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <han.necati@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 21:56:52 by nhan              #+#    #+#             */
/*   Updated: 2025/02/22 22:45:13 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

// pthread_create : int pthread_create(pthread_t *restrict thread,
//	const pthread_attr_t *restrict attr, typeof(void *(void *)) *start_routine,
//	void *restrict arg);
// pthread_mutex_init : int pthread_mutex_init(pthread_mutex_t *mutex,
//	const pthread_mutexattr_t *attr);
// pthread_join : int pthread_join(pthread_t thread, void **value_ptr);
// pthread_detach : int pthread_detach(pthread_t thread);
// pthread_mutex_destroy : int pthread_mutex_destroy(pthread_mutex_t *mutex);
// pthread_mutex_lock : int pthread_mutex_lock(pthread_mutex_t *mutex);
// pthread_mutex_unlock : int pthread_mutex_unlock(pthread_mutex_t *mutex);

int	ft_handle_thread(void *first, void *second, t_thread_action a)
{
	if (a == init)
		return (pthread_mutex_init((pthread_mutex_t *)first,
				(const pthread_mutexattr_t *)second));
	else if (a == join)
		return (pthread_join(*((pthread_t *)first), (void **)second));
	else if (a == detach)
		return (pthread_detach(*((pthread_t *)first)));
	else if (a == destroy)
		return (pthread_mutex_destroy((pthread_mutex_t *)first));
	else if (a == lock)
		return (pthread_mutex_lock((pthread_mutex_t *)first));
	else if (a == unlock)
		return (pthread_mutex_unlock((pthread_mutex_t *)first));
	return (-1);
}

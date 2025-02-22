/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memset_learning.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhan <nhan@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 12:03:17 by nhan              #+#    #+#             */
/*   Updated: 2025/02/15 13:45:55 by nhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "learning.h"

/*

void	*memset(void *s, int c, size_t n);

fills the first n bytes of the memory area pointed to by s with the constant byte c.

*/

int	main(int argc, char **argv, char **envp)
{
	char	str[50] = "GeeksForGeeks is for programming geeks.";

	printf("\nBefore memset(): %s\n", str);
		// Before memset(): GeeksForGeeks is for programming geeks.
	// Fill 8 characters starting from str[13] with '.'
	memset(str + 13, '.', 8 * sizeof(char));
	printf("After memset():  %s", str);
		// After memset():  GeeksForGeeks........programming geeks.
	return (0);
}

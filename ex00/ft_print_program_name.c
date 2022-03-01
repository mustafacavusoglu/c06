/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcavusog <mcavusog@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:18:58 by mcavusog          #+#    #+#             */
/*   Updated: 2022/02/28 17:19:44 by mcavusog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	n;

	n = 0;
	while (argv[0][n] && argc)
		write(1, &argv[0][n++], 1);
	write(1, "\n", 1);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sotanaka <sotanaka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 14:50:34 by sotanaka          #+#    #+#             */
/*   Updated: 2023/06/28 14:57:03 by sotanaka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	ft_mes_error(char *message)
{
	write (STDERR_FILENO, message, ft_strlen(message));
	return (EXIT_FAILURE);
}

int	ft_print_perror(char *original_message)
{
	perror(original_message);
	return (EXIT_FAILURE);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmontani <tmontani@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:29:01 by tmontani          #+#    #+#             */
/*   Updated: 2024/04/08 20:15:40 by tmontani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
void	open_file(char *file)
{
	int	fd;

	fd = open(file, O_RDONLY);
}

int	main (int argc, char *argv[])
{
	if (argc == 5)
		open_file(argv[1]);

}
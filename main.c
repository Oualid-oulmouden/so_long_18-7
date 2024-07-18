/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 18:19:28 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/07/18 11:06:53 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx_linux/mlx.h"
#include "mlx_linux/mlx_int.h"


int	main(int ac,char *av[])
{
	if(ac == 2)
	{
		if(rectangle_map(av))
			return 1;
		else if(number_of_collectifs(av) > 1 || number_of_exits(av) > 1 || number_of_players(av) > 1)
			return 1;
		
	}
}

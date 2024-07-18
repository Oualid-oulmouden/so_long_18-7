/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ooulmoud <ooulmoud@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 19:59:36 by ooulmoud          #+#    #+#             */
/*   Updated: 2024/07/18 09:46:16 by ooulmoud         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "mlx_linux/mlx.h"
#include "mlx_linux/mlx_int.h"

int rectangle_map(char **str)
{
    int i = 0;
    
    while(str[i])
    {
        if(ft_strlen(str[0]) != ft_strlen(str[i]))
            return 1;
        i++;
    }
    return 0;
}

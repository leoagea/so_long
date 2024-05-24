/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 17:05:48 by lagea             #+#    #+#             */
/*   Updated: 2024/05/24 19:56:56 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/so_long.h"

static void init_data(t_data *data)
{
	data->map.fd = 0;
	data->map.x = 0;
	data->map.y = 0;
}
int	main(int ac, char **av)
{
	(void)ac;
	(void)av;

	t_data data;
	int i = 0;
	
	init_data(&data);
	data.map.path = "maps/map_test.ber";
	open_map(&data);
	// while (map[i] != NULL)
	// {
	// 	printf("%s",map[i]);
	// 	i++;
	// }
	return 0;
}
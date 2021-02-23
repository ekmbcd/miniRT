/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <ade-feli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 12:48:16 by ade-feli          #+#    #+#             */
/*   Updated: 2021/02/14 14:31:47 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minirt.h"

t_intersect	no_intersect(void)
{
	t_intersect ret;

	ret.color = paint(0, 0, 0, 0);
	ret.distance = MAX_DISTANCE;
	return (ret);
}

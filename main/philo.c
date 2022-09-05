/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hermesrolle <hermesrolle@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 04:58:56 by hermesrolle       #+#    #+#             */
/*   Updated: 2022/09/05 05:48:51 by hermesrolle      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../HEADER/philosophers.h"

void	philo(t_all *all, unsigned i)
{
	while (1)
	{
		if (all->death)
			return ;
		if (eating(i))
			return ;
		if (sleeping(i))
			return ;
		if (thinking(i))
			return ;
	}
	
}
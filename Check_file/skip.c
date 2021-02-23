/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skip.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-feli <ade-feli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 12:44:40 by ade-feli          #+#    #+#             */
/*   Updated: 2021/02/14 14:31:47 by ade-feli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	skip_numbers(char *line, int i)
{
	if (line[i] == '-' || line[i] == '+')
		i++;
	while (line[i] && line[i] >= '0' && line[i] <= '9')
		i++;
	return (i);
}

int	skip_float_and_spaces(char *line, int i)
{
	while (line[i] && (line[i] == ' ' || (line[i] >= 9 && line[i] <= 13)))
		i++;
	i = skip_numbers(line, i);
	while (line[i] && (line[i] == '.'))
		i++;
	i = skip_numbers(line, i);
	while (line[i] && (line[i] == ' ' || (line[i] >= 9 && line[i] <= 13)))
		i++;
	return (i);
}

int	skip_spaces_and_numbers(char *line, int i)
{
	while (line[i] && (line[i] == ' ' || (line[i] >= 9 && line[i] <= 13)))
		i++;
	i = skip_numbers(line, i);
	while (line[i] && (line[i] == ' ' || (line[i] >= 9 && line[i] <= 13)))
		i++;
	return (i);
}

int	skip_spaces(char *line, int i)
{
	while (line[i])
	{
		if ((line[i] != ' ' || (line[i] < 9 || line[i] > 13)))
			return (-1);
		i++;
	}
	return (1);
}

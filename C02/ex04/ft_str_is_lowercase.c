/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 10:09:12 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/02 15:46:04 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		if (*str < 'a' || *str > 'z')
		{
			i++;
		}
		*str++;
	}
	if (i > 0)
	{
		return (0);
	}
	else
		return (1);
}

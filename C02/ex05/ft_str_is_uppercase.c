/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agaliste <agaliste@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 16:46:19 by agaliste          #+#    #+#             */
/*   Updated: 2020/12/02 09:33:31 by agaliste         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	int a;

	a = 0;
	while (*str != '\0')
	{
		if (*str >= 'A' && *str <= 'Z' && *str != '\0')
		{
		}
		else
		{
			a++;
		}
		*str++;
	}
	if (a > 0)
	{
		return (0);
	}
	else
		return (1);
}

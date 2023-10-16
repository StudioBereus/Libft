/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: event <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 13:44:28 by event             #+#    #+#             */
/*   Updated: 2023/10/16 14:06:52 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c <= 'A' && c >= 'Z'))
		return (1);
	else
		return (0);
}

int main(void)
{
	printf("%i %i %i %i\n", ft_isalpha('c'), ft_isalpha('1'), ft_isalpha('-'), ft_isalpha('Z'));
	printf("%i %i %i %i\n", isalpha('c'), isalpha('1'), isalpha('-'), isalpha('Z'));
}	

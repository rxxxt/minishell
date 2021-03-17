/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revstrncmp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tredfort <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/28 07:57:50 by tredfort          #+#    #+#             */
/*   Updated: 2021/01/28 07:59:09 by tredfort         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_revstrncmp(char *s1, char *s2, int n)
{
	int	i;
	int	j;

	i = 0;
	while (s1[i])
		i++;
	j = 0;
	while (s2[j])
		j++;
	if (i - n < 0 || j - n < 0)
		return (-1);
	while (n > 0 && s1[i - n] && s2[j - n] && s1[i - n] == s2[j - n])
		n--;
	return (s1[i - n] - s2[j - n]);
}

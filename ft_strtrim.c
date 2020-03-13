/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vscabell <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 17:33:10 by vscabell          #+#    #+#             */
/*   Updated: 2020/01/30 11:21:22 by vscabell         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_c_in_set(char c, char const *set)
{
	int i;

	i = 0;
	while (set[i])
		if (c == set[i++])
			return (1);
	return (0);
}

static int	ft_pref(char const *s, char const *set)
{
	int	i;
	int	pi;

	i = 0;
	pi = 0;
	while (s[i])
	{
		if (ft_c_in_set(s[i], set) == 1)
			pi++;
		else
			return (pi);
		i++;
	}
	return (pi);
}

static int	ft_suf(char const *s, char const *set)
{
	int	len;
	int	pf;

	pf = (int)ft_strlen(s) - 1;
	len = pf;
	while (len >= 0)
	{
		if (ft_c_in_set(s[len], set) == 1)
			pf--;
		else
			return (pf);
		len--;
	}
	return (pf);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	int	pi;
	int pf;

	if (!s1)
		return (NULL);
	pi = ft_pref(s1, set);
	pf = ft_suf(s1, set);
	if (pf < pi)
		return (ft_substr(s1, 0, 0));
	return (ft_substr(s1, pi, (pf - pi + 1)));
}

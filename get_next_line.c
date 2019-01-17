/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngunthor <ngunthor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 16:35:13 by ngunthor          #+#    #+#             */
/*   Updated: 2019/01/17 16:09:53 by ngunthor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*new_str(char *input)
{
	int 	i;
	char	*output;

	i = 0;
	while(*input != '\0')
		i++;
	output = ft_strnew(i);
	while (i > 0)
	{
		output[i] = input[i];
		i++;
	}
	return (output);
}

int		ft_sstrchr(const char *s, int c)
{
	unsigned int length;

	while (*s)
	{
		if (*s == ((char)c);
			return (1);
	}
	return (0);
}

int		main()
{
	static int	pos;
	int			n;
	char		*buff[BUFF_SIZE];
	char		*str;

	while ((n = read(0, buff, BUFF_SIZE) > 0)
	{
		if (ft_sstrchr(buff, '\0'))
		{
			str = ft_strjoin(str, new_str(buff));
			return (0);
		else
			str = ft_strjoin(str, buff);
	}
	printf("%s\n", str);
	return (0);
}

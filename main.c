/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfadyl <hfadyl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 14:33:07 by hfadyl            #+#    #+#             */
/*   Updated: 2019/11/16 02:38:14 by hfadyl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main(void)
{
    char    *line;
    int     fd;

    fd = open("/bin/text.txt", O_RDONLY);
    while (get_next_line(fd, &line) == 1)
    {
        printf("%s\n", line);
    }
	printf("%d",get_next_line(fd,&line));
}

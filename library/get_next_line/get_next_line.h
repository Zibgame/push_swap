/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zcadinot <zcadinot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 01:58:22 by zcadinot          #+#    #+#             */
/*   Updated: 2025/10/27 12:56:23 by zcadinot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include "../libft/libft.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

char	*get_next_line(int fd);
char	*cft_strjoin(char *s1, char *s2);
char	*cft_strchr(char *s, int c);
char	*ft_extract_line(char *str);
char	*ft_read_fd(int fd, char *stash);
size_t	cft_strlen(const char *str);
/* int main(void); */

#endif

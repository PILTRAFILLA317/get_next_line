/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: umartin- <umartin-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 13:12:57 by umartin-          #+#    #+#             */
/*   Updated: 2022/01/27 12:11:33 by umartin-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_read_static(int fd, char *final);
char	*ft_final_rtn(char *final);
char	*ft_clean_final(char *final);
char	*ft_strjoin(char *final, char *rd);
char	*ft_strchr(char *str, int c);

size_t	ft_strlen(char *str);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brumarti <brumarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/02 15:06:35 by brumarti          #+#    #+#             */
/*   Updated: 2022/08/03 15:41:33 by brumarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
//read_map.c
int					ft_get_collumns(char *str);
void				ft_place_second_line(int fd);
int					ft_get_lines_char(char *str);
void				ft_read_map(char **buffer, int fd);
char				**ft_get_map(char	*argv);
//printc.c
void				ft_putstr(char	*str);
void				ft_print_map(char **map);
int					ft_strlen(char *str);
//error.c
int					map_error(char	*argv);
int					ft_check_chars(char	*argv);
int					ft_get_line_error(char *argv);
//analyze_map.c
int					**ft_alloc(void);
char				ft_get_char(char *line, int opt);
int					**ft_turnint(char	**map);
int					ft_is_printable(char c);
char				*ft_get_first_line(char *argv);
//solve.c
char				**ft_solve(char **map);
struct s_lastpos	ft_largestsquare(int **map, int **cache);
int					ft_get_min(int val1, int val2, int val3);
struct s_lastpos	ft_assignvalues(int i, int j, int length);
char				**ft_correct_map(struct s_lastpos pos, char	**map);
extern char	g_obstacle;
extern char	g_full;
extern char	g_empty;
extern int	g_l;
extern int	g_c;
struct s_lastpos{
	int	x;
	int	y;
	int	length;
};
#endif

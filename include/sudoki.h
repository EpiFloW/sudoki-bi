/*
** sudoki.h for  in /home/maison_f/Epitech/rendu/sudoki-bi/include
**
** Made by Maisonnave Florian
** Login   <maison_f@epitech.net>
**
** Started on  Fri Feb 26 20:40:55 2016 Maisonnave Florian
** Last update Sun Feb 28 19:54:20 2016 OEM Configuration (temporary user)
*/

#ifndef SUDOKI_H_
#define SUDOKI_H_

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdbool.h>

typedef struct	s_sudo
{
  char		**map;
  char		**full;
  int		tab[9][9];
  int		check;
  int		k;
  int		i;
  int		j;
  int		l;
  char		c;
  int		ret;
  int		fd;
  int		x;
  int		y;
}		t_sudo;

/* FONCTIONS */
void	my_putchar(char);
void	my_putstr(char*);
int	my_getnbr(char *);
void	my_putnbr(int);

/* DISPLAY */
void	display_map(t_sudo *);
void	display_tab(t_sudo *);

/* MALLOC */
void	malloc_map(t_sudo *);
void	map_free(t_sudo *);

/* ERROR */
int	error_args(int, char **);
int	error_map(t_sudo *);
int	check_top_and_bot(t_sudo *);
int	check_wall(t_sudo *);

/* CREATE */
void	str_to_int(t_sudo *);
void	int_to_str(t_sudo *);
void	int_to_str_x(t_sudo *);
void	init_var(t_sudo *);
void	clear_int(t_sudo *);

/* ALGORITHM */
int	check_columns(t_sudo *, int, int);
int	check_lines(t_sudo *, int, int);
int	check_bloc(t_sudo *, int, int, int);
int	algorithm(t_sudo *, int);

#endif /* !SUDOKI_H_ */

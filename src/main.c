/*
** main.c for  in /home/maison_f/Epitech/rendu/sudoki-bi/src
**
** Made by Maisonnave Florian
** Login   <maison_f@epitech.net>
**
** Started on  Fri Feb 26 20:34:38 2016 Maisonnave Florian
** Last update Mon Feb 29 13:08:32 2016 Maisonnave Florian
*/

#include "sudoki.h"

int	sudo_insolvent(t_sudo *s)
{
  int	y;
  int	x;

  y = 0;
  x = 0;
  while (y < 9)
    {
      while (x < 9)
	{
	  if (s->tab[y][x] == 0)
	    return (1);
	  x++;
	}
      x = 0;
      y++;
    }
  return (0);
}

int	copy_file(t_sudo *s)
{
  int	i;

  i = 0;
  s->x = 0;
  s->y = 1;
  s->fd = 0;
  while ((s->ret = read(s->fd, &s->c, 1)) > 0)
    {
      if (i == 230)
	return (1);
      if (s->y > 0)
	{
	  s->map[s->y-1][s->x] = s->c;
	  s->x++;
	}
      if (s->c == '\n')
	{
	  s->y++;
	  s->x = 0;
	}
      i++;
    }
  return (0);
}

void	if_main(t_sudo *s, int check)
{
  if (error_map(s) == 0)
    {
      if (check > 0)
	my_putstr("\n####################\n");
      str_to_int(s);
      algorithm(s, 0);
      int_to_str(s);
      if (sudo_insolvent(s) == 1)
	int_to_str_x(s);
      else
	int_to_str(s);
      display_map(s);
    }
  else
    write (2, "MAP ERROR\n", 10);
  map_free(s);
  malloc_map(s);
  clear_int(s);
}

int		main(int ac, char **av, char **env)
{
  t_sudo	*s;
  int		check;

  (void)av;
  check = 0;
  if (error_args(ac, env) == 1)
    return (0);
  if (((s = malloc(sizeof(t_sudo)))  == NULL))
    return (0);
  malloc_map(s);
  while (copy_file(s) != 0)
    {
      if_main(s, check);
      check++;
    }
  if (check == 0)
    write (2, "MAP ERROR", 10);
  my_putchar('\n');
  map_free(s);
  free(s);
  return (0);
}

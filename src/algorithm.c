/*
** algorithm.c for  in /home/maison_f/Epitech/rendu/sudoki-bi/src
**
** Made by Maisonnave Florian
** Login   <maison_f@epitech.net>
**
** Started on  Sat Feb 27 03:59:15 2016 Maisonnave Florian
** Last update Sun Feb 28 15:28:21 2016 OEM Configuration (temporary user)
*/
#include "sudoki.h"

int	check_columns(t_sudo *s, int y, int val)
{
  int	x;

  x = 0;
  while (x < 9)
    {
      if (s->tab[y][x] == val)
	return (1);
      x++;
    }
  return (0);
}

int	check_lines(t_sudo *s, int x, int val)
{
  int	y;

  y = 0;
  while (y < 9)
    {
      if (s->tab[y][x] == val)
	return (1);
      y++;
    }
  return (0);
}

int	check_bloc(t_sudo *s, int y, int x, int val)
{
  int	check_y;
  int	check_x;

  check_y = 3 * (y / 3);
  check_x = 3 * (x / 3);
  y = check_y;
  x = check_x;
  while (y < check_y + 3)
    {
      while (x < check_x + 3)
	{
	  if (s->tab[y][x] == val)
	    return (1);
	  x++;
	}
      x = check_x;
      y++;
    }
  return (0);
}

int	algorithm(t_sudo *s, int pos)
{
  int	y;
  int	x;
  int	val;

  y = pos / 9;
  x = pos % 9;
  val = 1;
  if (pos == 81)
    return (0);
  if (s->tab[y][x] != 0)
    return (algorithm(s, (pos + 1)));
  while (val <= 9)
    {
      if (check_lines(s, x, val) == 0 && check_columns(s, y, val) == 0
	  && check_bloc(s, y, x, val) == 0)
	{
	  s->tab[y][x] = val;
	  if (algorithm(s, (pos + 1)) == 0)
	    return (0);
	}
      val++;
    }
  s->tab[y][x] = 0;
  return (1);
}

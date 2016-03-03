/*
** error.c for  in /home/maison_f/Epitech/rendu/sudoki-bi/src
**
** Made by Maisonnave Florian
** Login   <maison_f@epitech.net>
**
** Started on  Fri Feb 26 23:19:48 2016 Maisonnave Florian
** Last update Sun Feb 28 19:55:28 2016 OEM Configuration (temporary user)
*/

#include "sudoki.h"

int	error_args(int ac, char **env)
{
  if (env == NULL)
    {
      write (2, "Error : Environnement\n", 23);
      return (1);
    }
  if (ac > 1)
    {
      write (2, "Error : Too many arguments\n", 27);
      return (1);
    }
  return (0);
}

int	check_top_and_bot(t_sudo *s)
{
  int	i;

  i = 1;
  if (s->map[0][0] != '|' && s->map[0][19] != '|')
    return (1);
  while (i < 19)
    {
      if (s->map[0][i] != '-')
	return (1);
      i++;
    }
  i = 1;
  if (s->map[10][0] != '|' && s->map[10][19] != '|')
    return (1);
  while (i < 19)
    {
      if (s->map[10][i] != '-')
	return (1);
      i++;
    }
  return (0);
}

int	check_wall(t_sudo *s)
{
  int	i;

  i = 0;
  while (i < 10)
    {
      if (s->map[i][0] != '|')
	return (1);
      i++;
    }
  i = 0;
  while (i < 10)
    {
      if (s->map[i][19] != '|')
	return (1);
      i++;
    }
  return (0);
}

int	error_map(t_sudo *s)
{
  if (check_top_and_bot(s) == 1 || check_wall(s) == 1)
    return (1);
  return (0);
}

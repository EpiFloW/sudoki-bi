/*
** malloc.c for  in /home/maison_f/Epitech/rendu/sudoki-bi/src
**
** Made by Maisonnave Florian
** Login   <maison_f@epitech.net>
**
** Started on  Fri Feb 26 20:52:44 2016 Maisonnave Florian
** Last update Mon Feb 29 13:12:15 2016 Maisonnave Florian
*/

#include "sudoki.h"

void	malloc_map(t_sudo *s)
{
  int	i;

  i = 0;
  if (((s->map = malloc(sizeof(char*) * 12)) == NULL))
    return;
  while (i <= 11)
    {
      if (((s->map[i] = malloc(sizeof(char) * 21)) == NULL))
	return;
      i++;
    }
}

void	map_free(t_sudo *s)
{
  int	i;

  i = 0;
  while (s->map[i] != NULL)
    {
      free(s->map[i]);
      i++;
    }
  free(s->map);
}

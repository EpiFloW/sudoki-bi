/*
** str_to_int.c for  in /home/maison_f/Epitech/rendu/sudoki-bi/src
**
** Made by Maisonnave Florian
** Login   <maison_f@epitech.net>
**
** Started on  Sat Feb 27 02:21:04 2016 Maisonnave Florian
** Last update Sat Feb 27 02:21:04 2016 Maisonnave Florian
*/

#include "sudoki.h"

void	str_to_int(t_sudo *s)
{
  int	i;
  int	k;
  int	j;
  int	l;

  i = 1;
  k = 2;
  j = 0;
  l = 0;
  while (i < 10)
    {
      while (k <= 18)
	{
	  if (s->map[i][k] != 32)
	    s->tab[j][l] = (s->map[i][k]) - 48;
	  l++;
	  k = k + 2;
	}
      k = 2;
      l = 0;
      i++;
      j++;
    }
}

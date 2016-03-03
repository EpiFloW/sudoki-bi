/*
** display.c for  in /home/maison_f/Epitech/rendu/sudoki-bi/src
**
** Made by Maisonnave Florian
** Login   <maison_f@epitech.net>
**
** Started on  Fri Feb 26 21:41:14 2016 Maisonnave Florian
** Last update Fri Feb 26 21:41:15 2016 Maisonnave Florian
*/

#include "sudoki.h"

void	display_tab(t_sudo *s)
{
  int	i;
  int	k;

  i = 0;
  k = 0;
  while (i < 9)
    {
      while (k < 9)
	{
	  my_putnbr(s->tab[i][k]);
	  k++;
	}
      my_putchar('\n');
      k = 0;
      i++;
    }
}

void	display_map(t_sudo *s)
{
  int	i;

  i = 0;
  while (s->map[i] != NULL)
    {
      my_putstr(s->map[i]);
      i++;
    }
}

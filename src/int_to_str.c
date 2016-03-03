/*
** int_to_str.c for  in /home/maison_f/Epitech/rendu/sudoki-bi/src
**
** Made by Maisonnave Florian
** Login   <maison_f@epitech.net>
**
** Started on  Sun Feb 28 00:04:27 2016 Maisonnave Florian
** Last update Sun Feb 28 18:57:37 2016 OEM Configuration (temporary user)
*/

#include "sudoki.h"

void	init_var(t_sudo *s)
{
  s->k = 1;
  s->i = 1;
  s->j = 0;
  s->l = 0;
  s->check = 0;
}

void	clear_int(t_sudo *s)
{
  int	i;
  int	k;

  i = 0;
  k = 0;
  while (i < 10)
    {
      while (k < 10)
	{
	  s->tab[i][k] = 0;
	  k++;
	}
      k = 0;
      i++;
    }
}

void	int_to_str(t_sudo *s)
{
  init_var(s);
  while (s->i < 10)
    {
      while (s->k < 19)
	{
	if (s->check == 0)
	    {
	      s->k++;
	      s->check = 1;
	    }
	  else
	    {
	      s->map[s->i][s->k++] = s->tab[s->j][s->l++] + 48;
	      s->check = 0;
	    }
	}
      s->l = 0;
      s->k = 1;
      s->i++;
      s->j++;
    }
}

void	int_to_str_x(t_sudo *s)
{
  init_var(s);
  while (s->i < 10)
    {
      while (s->k < 19)
	{
	  if (s->check == 0)
	    {
	      s->k++;
	      s->check = 1;
	    }
	  else
	    {
	      s->map[s->i][s->k++] = 'X';
	      s->check = 0;
	    }
	}
      s->l = 0;
      s->k = 1;
      s->i++;
      s->j++;
    }
}

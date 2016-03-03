/*
** fonctions.c for  in /home/maison_f/Epitech/rendu/sudoki-bi/src
**
** Made by Maisonnave Florian
** Login   <maison_f@epitech.net>
**
** Started on  Fri Feb 26 21:43:09 2016 Maisonnave Florian
** Last update Fri Feb 26 21:43:10 2016 Maisonnave Florian
*/

#include "sudoki.h"

void	my_putchar(char c)
{
  write (1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i])
    {
      my_putchar(str[i]);
      i++;
    }
}

void	my_putnbr(int nb)
{
  int	i;

  i = 0;
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * (-1);
    }
  i = nb % 10;
  if (nb >= 10)
    my_putnbr(nb / 10);
  my_putchar(i + 48);
}

/*
** my_getnbr.c for  in /home/maison_f/Epitech/rendu/sudoki-bi/src
**
** Made by Maisonnave Florian
** Login   <maison_f@epitech.net>
**
** Started on  Sat Feb 27 02:18:16 2016 Maisonnave Florian
** Last update Sat Feb 27 02:41:51 2016 Maisonnave Florian
*/

#include "sudoki.h"

int	my_getnbr(char *str)
{
  int	nbr;
  char	sign;

  nbr = 0;
  sign = 1;
  while (str && (*str == '+' || *str == '-'))
    sign *= (*str++ == '+') ? (1) : (-1);
  while (str && (*str >= '0' && *str <= '9'))
    {
      nbr *= 10;
      nbr += *str - '0';
      str += 1;
    }
  return (sign * nbr);
}

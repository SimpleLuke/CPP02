/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 01:33:43 by llai              #+#    #+#             */
/*   Updated: 2024/02/18 12:26:50 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
  Fixed denominator = ((b.getY() - c.getY()) * (a.getX() - c.getX()) +
                       (c.getX() - b.getX()) * (a.getY() - c.getY()));
  Fixed A = ((b.getY() - c.getY()) * (point.getX() - c.getX()) +
             (c.getX() - b.getX()) * (point.getY() - c.getY())) /
            denominator;
  Fixed B = ((c.getY() - a.getY()) * (point.getX() - c.getX()) +
             (a.getX() - c.getX()) * (point.getY() - c.getY())) /
            denominator;
  Fixed C = (Fixed)1 - A - B;

  // std::cout << A << " " << B << " " << C << " " << denominator << std::endl;
  if (A > 0 && B > 0 && C > 0)
	  return true;
  else
	  return false;
}

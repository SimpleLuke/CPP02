/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 23:55:06 by llai              #+#    #+#             */
/*   Updated: 2024/02/18 02:56:35 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "../includes/Fixed.hpp"
#include "../includes/Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

void printPointInTri(Point const a, Point const b, Point const c,
                     Point const point)
{
  if (bsp(a, b, c, point))
    std::cout << "Inside" << std::endl;
  else
    std::cout << "Outside" << std::endl;
}

void testInTri()
{
  Point A(0, 0);
  Point B(10, 30);
  Point C(20, 0);
  Point P(10, 15);

  std::cout << "Test: IN" << std::endl;
  printPointInTri(A, B, C, P);
}

void testOutTri()
{
  Point A(0, 0);
  Point B(10, 30);
  Point C(20, 0);
  Point P(30, 15);

  std::cout << "Test: OUT" << std::endl;
  printPointInTri(A, B, C, P);
}

void testEdgeTri()
{
  Point A(0, 0);
  Point B(10, 10);
  Point C(10, 0);
  Point P(5, 5);

  std::cout << "Test: EDGE" << std::endl;
  printPointInTri(A, B, C, P);
}

void testLargeTri()
{
  Point A(0, 0);
  Point B(1000, 2000);
  Point C(2000, 0);
  Point P(1500, 1000);

  std::cout << "Test: LARGE" << std::endl;
  printPointInTri(A, B, C, P);
}

int main(void)
{
  testInTri();
  testOutTri();
  testEdgeTri();
  testLargeTri();
  return 0;
}

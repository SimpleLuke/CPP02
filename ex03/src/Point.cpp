/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 01:11:10 by llai              #+#    #+#             */
/*   Updated: 2024/02/18 01:56:10 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Point.hpp"

#include <iostream>

Point::Point(void) : _x(0), _y(0){};

Point::Point(Fixed const x, Fixed const y) : _x(x), _y(y) {}

Point::Point(Point const &other) : _x(other.getX()), _y(other.getY()) {}

Point &Point::operator=(Point const &other)
{
  (void)other;
  std::cerr << "Warning: cannot assign to Point const attributes. "
            << "Use a Point copy constructor instead." << std::endl;
  throw std::runtime_error("Assignment to constant attributes");
}

Fixed const &Point::getX(void) const { return this->_x; }

Fixed const &Point::getY(void) const { return this->_y; }

Point::~Point() {}

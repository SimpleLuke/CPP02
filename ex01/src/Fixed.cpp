/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:35:01 by llai              #+#    #+#             */
/*   Updated: 2024/02/17 21:06:28 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

#include <cmath>
#include <iostream>
#include <ostream>

Fixed::Fixed() : _fixedPt(0)
{
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const num) : _fixedPt(num << _fractionalBits)
{
  std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const num) : _fixedPt(roundf(num * (1 << _fractionalBits)))
{
  std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
  std::cout << "Copy assignment operator called" << std::endl;
  if (this != &other) this->_fixedPt = other.getRawBits();
  return *this;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

int Fixed::getRawBits() const { return this->_fixedPt; }

float Fixed::toFloat(void) const
{
  return (float)this->_fixedPt / (1 << Fixed::_fractionalBits);
}

int Fixed::toInt(void) const
{
  return this->_fixedPt >> Fixed::_fractionalBits;
}

void Fixed::setRawBits(int const raw) { this->_fixedPt = raw; }

std::ostream &operator<<(std::ostream &o, Fixed const &num)
{
  o << num.toFloat();
  return o;
}

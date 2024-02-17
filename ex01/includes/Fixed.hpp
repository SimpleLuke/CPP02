/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:38:13 by llai              #+#    #+#             */
/*   Updated: 2024/02/17 21:06:34 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <ostream>
class Fixed
{
 public:
  Fixed();
  Fixed(int const num);
  Fixed(float const num);
  Fixed(Fixed const &other);
  Fixed &operator=(const Fixed &other);
  ~Fixed();
  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;

 private:
  int _fixedPt;
  static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &num);

#endif  // !FIXED_HPP

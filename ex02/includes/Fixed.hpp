/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/17 15:38:13 by llai              #+#    #+#             */
/*   Updated: 2024/02/17 21:25:25 by llai             ###   ########.fr       */
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
  ~Fixed();

  Fixed &operator=(const Fixed &other);

  bool operator>(Fixed const &rhs) const;
  bool operator<(Fixed const &rhs) const;
  bool operator>=(Fixed const &rhs) const;
  bool operator<=(Fixed const &rhs) const;
  bool operator==(Fixed const &rhs) const;
  bool operator!=(Fixed const &rhs) const;

  Fixed operator+(Fixed const &rhs) const;
  Fixed operator-(Fixed const &rhs) const;
  Fixed operator*(Fixed const &rhs) const;
  Fixed operator/(Fixed const &rhs) const;

  Fixed &operator++(void);
  Fixed operator++(int);
  Fixed &operator--(void);
  Fixed operator--(int);

  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;

  static Fixed &min(Fixed &lhs, Fixed &rhs);
  static Fixed &max(Fixed &lhs, Fixed &rhs);
  static Fixed const &min(Fixed const &lhs, Fixed const &rhs);
  static Fixed const &max(Fixed const &lhs, Fixed const &rhs);

 private:
  int _fixedPt;
  static const int _fractionalBits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &num);

#endif  // !FIXED_HPP

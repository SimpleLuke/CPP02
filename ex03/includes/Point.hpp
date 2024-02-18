/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llai <llai@student.42london.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 01:09:30 by llai              #+#    #+#             */
/*   Updated: 2024/02/18 01:38:18 by llai             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point {
public:
	Point(void);
	Point(Fixed const x, Fixed const y);
	Point(const Point &other);
	Point &operator=(const Point &other);
	~Point();

	Fixed const & getX(void) const;
	Fixed const & getY(void) const;

private:
	Fixed const _x;
	Fixed const _y;
	
};

#endif // !POINT_HPP

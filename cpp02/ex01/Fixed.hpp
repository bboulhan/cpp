/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 12:07:43 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/10 11:30:43 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>


class Fixed {
	private:
		int fixedPoint;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
        Fixed(const int i);
        Fixed(const float f);
        float toFloat(void) const;
        int   toInt(void) const;
		Fixed &operator=(const Fixed &op);
		~Fixed();
		int getRawBits() const;
		void setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& stream, const Fixed &op);

#endif
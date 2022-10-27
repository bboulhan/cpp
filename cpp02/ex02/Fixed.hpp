/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:24:11 by bboulhan          #+#    #+#             */
/*   Updated: 2022/10/25 17:32:46 by bboulhan         ###   ########.fr       */
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
		void  operator=(const Fixed &op);
		~Fixed();
		int getRawBits() const;
		void setRawBits(int const raw);
		bool operator>(const Fixed &op) const;
		bool operator<(const Fixed &op) const;
		bool operator>=(const Fixed &op) const;
		bool operator<=(const Fixed &op) const;
		bool operator==(const Fixed &op) const;
		bool operator!=(const Fixed &op) const;
		Fixed operator+(const Fixed &op) const;
		Fixed operator-(const Fixed &op) const;
		Fixed operator*(const Fixed &op) const;
		Fixed operator/(const Fixed &op) const;
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);
		static Fixed min(const Fixed &op1, const Fixed &op2)
		{
			if (op1.fixedPoint < op2.fixedPoint)
				return (op1);
			return (op2);
		}
		static Fixed& min(Fixed &op1, Fixed &op2)
		{
			if (op1.fixedPoint < op2.fixedPoint)
				return (op1);
			return (op2);
		}
		static Fixed max(const Fixed &op1, const Fixed &op2)
		{
			if (op1.fixedPoint > op2.fixedPoint)
				return (op1);
			return (op2);
		}
		static Fixed& max(Fixed &op1, Fixed &op2)
		{
			if (op1.fixedPoint > op2.fixedPoint)
				return (op1);
			return (op2);
		}



};
std::ostream& operator<<(std::ostream& stream, const Fixed &op);

#endif
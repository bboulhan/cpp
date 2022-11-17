/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:44:07 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/10 11:30:15 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int fixedPoint;
		static const int bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed &operator=(const Fixed &op);
		~Fixed();
		int getRawBits() const;
		void setRawBits(int const raw);
};

#endif
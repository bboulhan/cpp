/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboulhan <bboulhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:15:36 by bboulhan          #+#    #+#             */
/*   Updated: 2022/11/16 19:18:19 by bboulhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>

class Array{
	private:
		T *elem;
		unsigned int n;
	public:
		class OutOfBounds : public std::exception{
			virtual const char* what() const throw(){
				return "index is out of bounds";
			}
		};
		Array(): n(0) { elem = new T(0);};
		Array(unsigned int n) : n(n) {
			this->elem = new T[n]();
		};
		Array(const Array &copy){
			this->n = copy.n;
			this->elem = new T[n];
			for(unsigned int i = 0; i < n; i++){
				this->elem[i] = copy.elem[i];
			}
		};
		Array &operator=(const Array &op){
			this->n = op.n;
			delete [] this->elem;
			this->elem = new T[n];
			for(int i = 0; i < n; i++){
				this->elem[i] = op.elem[i];
			}
		};
		a.operator(b);
		~Array(){ delete [] elem; };
		T &operator[](unsigned int i) const{
			if (i >= n)
				throw (OutOfBounds());
			//return(elem[i]);
		};
		unsigned int size() const{
			return this->n;
		};
		T *getElem(){
			return (elem);
		}
		
};

std::ostream &operator<<(std::ostream &stream, Array<int> &arr)
{
	for (unsigned int i=0; i < arr.size(); i++){
		stream << arr.getElem()[i] << " ";
	}
	return (stream);
}


#endif
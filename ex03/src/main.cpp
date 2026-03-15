/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhidani <mhidani@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/15 01:47:42 by mhidani           #+#    #+#             */
/*   Updated: 2026/03/15 02:01:18 by mhidani          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int	main(void) {
	Point	tA(0,0);
	Point	tB(10,0);
	Point	tC(0,10);
	Point	p(3,3);

	std::cout << "A: " << tA.getX() << ", " << tA.getY() << std::endl;
	std::cout << "B: " << tB.getX() << ", " << tB.getY() << std::endl;
	std::cout << "C: " << tC.getX() << ", " << tC.getY() << std::endl;
	std::cout << std::endl;
	std::cout << "P: " << p.getX() << ", " << p.getY() << std::endl;
	std::cout << std::endl;

	if (bsp(tA, tB, tC, p))
		std::cout << "outside" << std::endl;
	else
		std::cout << "inside" << std::endl;

	return 0;
}

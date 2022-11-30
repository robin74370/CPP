/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: repinat <repinat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 11:09:51 by repinat           #+#    #+#             */
/*   Updated: 2022/11/29 11:29:32 by repinat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl	demo;

	demo.complain("DEBUG");
	demo.complain("INFO");
	demo.complain("WARNING");
	demo.complain("ERROR");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   show_logo.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamayuel <xamayuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 21:07:27 by xamayuel          #+#    #+#             */
/*   Updated: 2024/03/13 21:07:30 by xamayuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "colors.hpp"
#include <iostream>
void show_logo()
{

  std::cout << MAGENTA "  __ _  " << CYAN << "          _    " << std::endl;
  std::cout << MAGENTA " / _| |  " << CYAN << "        (_)         "
            << std::endl;
  std::cout << MAGENTA "| |_| |_        " << CYAN << "  _ _ __ ___ "
            << std::endl;
  std::cout << MAGENTA "|  _| __|       " << CYAN << " | | '__/ __|"
            << std::endl;

  std::cout << MAGENTA "| | | |_         " << CYAN << "| | | | (__ "
            << std::endl;
  std::cout << MAGENTA "|_|  \\__|       " << CYAN << " |_|_|  \\___|"
            << std::endl;
  std::cout << YELLOW "  ╭──────────────────────╮     " << std::endl;
  std::cout << YELLOW "  │ " << LIGHT_BLUE << "@xamayuel " << YELLOW "│"
            << LIGHT_BLUE << " @javigar " << YELLOW "│  " << std::endl;
  std::cout << YELLOW "  ╰──────────────────────╯ " << std::endl;
  std::cout << RESET "" << std::endl;
}
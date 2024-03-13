/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamayuel <xamayuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:25:09 by xamayuel          #+#    #+#             */
/*   Updated: 2024/03/13 22:56:33 by xamayuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include "ft_irc.hpp"
#include <iostream>
int main(int argn, char *argv[], char *env[])
{
  Logger logger;
  (void)argn;
  (void)argv;
  (void)env;
  show_logo();
  if (argn != 3)
  {
    logger.show("INFO","Usage: ./ft__irc port password");
    logger.show("ERROR","Wrong number of arguments passed!");
  }
}
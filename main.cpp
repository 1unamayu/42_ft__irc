/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamayuel <xamayuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 20:25:09 by xamayuel          #+#    #+#             */
/*   Updated: 2024/03/19 15:13:37 by xamayuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include "Server.hpp"
#include "ft_irc.hpp"
#include <iostream>
#include <stdlib.h>
int main(int argn, char *argv[], char *env[])
{
  Logger logger;
  (void)argn;
  (void)argv;
  (void)env;
  show_logo();
  if(argn != 3)
  {
    logger.show("INFO", "Usage: ./ft__irc port password");
    logger.show("ERROR", "Wrong number of arguments passed!");
    return (0);
  }
  int port = atoi(argv[1]);
  if(port < 1024 || port > 65535)
  {
    logger.show("ERROR", "Wrong port number!");
    logger.show("INFO", "Port number must be in 1024~65535 range!");
    return (0);
  }
  logger.show("DEBUG", "argv 1 = " + (std::string)argv[1]);
  logger.show("DEBUG", "argv 2 = " + (std::string)argv[2]);
  Server irc;

  irc.startServer(logger, port, argv[2]);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamayuel <xamayuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:30:33 by xamayuel          #+#    #+#             */
/*   Updated: 2024/03/13 22:12:27 by xamayuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
#define LOGGER_HPP
#include "colors.hpp"
#include <string>

class Logger
{

public:
  Logger();
  ~Logger();
  void show(std::string level, const std::string &text);

private:
  void debug(const std::string &text);
  void info(const std::string &text);
  void warning(const std::string &text);
  void error(const std::string &text);
};
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xamayuel <xamayuel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 14:35:32 by xamayuel          #+#    #+#             */
/*   Updated: 2024/03/19 15:29:21 by xamayuel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <sys/time.h>
#include <unistd.h>

std::string getTimestamp()
{
 timeval tv;
        gettimeofday(&tv, NULL);
        time_t t = tv.tv_sec;
        tm* timeinfo = localtime(&t);

        std::stringstream ss;
        ss << timeinfo->tm_year + 1900 << "-";
        ss << std::setfill('0') << std::setw(2) << timeinfo->tm_mon + 1 << "-";
        ss << std::setfill('0') << std::setw(2) << timeinfo->tm_mday << " ";
        ss << std::setfill('0') << std::setw(2) << timeinfo->tm_hour << ".";
        ss << std::setfill('0') << std::setw(2) << timeinfo->tm_min << ".";
        ss << std::setfill('0') << std::setw(2) << timeinfo->tm_sec << ".";
        ss << std::setfill('0') << std::setw(6) << tv.tv_usec / 1000;
        usleep(10000);
        return ss.str();
}

Logger::Logger()
{
}

Logger::~Logger()
{
}

void Logger::debug(const std::string &text)
{
  std::cout << getTimestamp();
  std::cout << "  |  " << CYAN "   DEBUG" << RESET "  |   ";
  std::cout << BLACK << text;
  std::cout << RESET << std::endl;
}

/**
 * @brief Logs a message with the INFO level to the console.
 *
 * @param text The message to log.
 */
void Logger::info(const std::string &text)
{
  std::cout << getTimestamp();
  std::cout << "  |  " << BLUE << "    INFO" << RESET << "  |   ";
  std::cout << BLACK << text;
  std::cout << RESET << std::endl;
}

/**
 * @brief Logs a message with the WARNING level to the console.
 *
 * @param text The message to log.
 */
void Logger::warning(const std::string &text)
{
  std::cout << getTimestamp();
  std::cout << "  |  " << YELLOW " WARNING" << RESET "  |   ";
  std::cout << BLACK << text;
  std::cout << RESET << std::endl;
}

void Logger::error(const std::string &text)
{
  std::cerr << getTimestamp();
  std::cerr << "  |  " << RED "   ERROR" << RESET "  |   ";
  std::cerr << BLACK << text;
  std::cerr << RESET << std::endl;
}

void Logger::show(std::string level, const std::string &text)
{
  void (Logger::*functions[])(const std::string &) = {
      &Logger::debug, &Logger::info, &Logger::warning, &Logger::error};
  std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

  for(int i = 0; i < 4; i++)
  {
    if(level == levels[i])
    {
      (this->*functions[i])(text);

      return;
    }
  }

  std::cerr << RED "Invalid complain level: " << YELLOW << level << RESET
            << std::endl;
}
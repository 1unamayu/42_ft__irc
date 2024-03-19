#include "Server.hpp"
#include <iostream>
#include <sstream> // Para std::stringstream
#include <string>
/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Server::Server()
{
}

Server::Server(const Server &src)
{
  (void)src;
}

/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Server::~Server()
{
}

/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Server &Server::operator=(Server const &rhs)
{
  (void)rhs;
  // if ( this != &rhs )
  //{
  // this->_value = rhs.getValue();
  //}
  return *this;
}

std::ostream &operator<<(std::ostream &o, Server const &i)
{
  (void)i;
  // o << "Value = " << i.getValue();
  return o;
}

/*
** --------------------------------- METHODS ----------------------------------
*/
void Server::startServer(Logger &logger, int port, std::string password)
{
  logger.show("INFO", "Starting server ...");
  this->_port = port;
  this->_password = password;

  std::stringstream ss;
  ss << port;
  std::string portStr = ss.str();
  logger.show("INFO", "Server started at port: " + portStr);
}

/*
** --------------------------------- ACCESSOR ---------------------------------
*/

/* ************************************************************************** */
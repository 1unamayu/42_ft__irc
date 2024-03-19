#ifndef SERVER_HPP
#define SERVER_HPP

#include "Logger.hpp"
#include <iostream>
#include <string>
class Server
{

public:
  Server();
  Server(Server const &src);
  ~Server();

  Server &operator=(Server const &rhs);

  void startServer(Logger &logger, int port, std::string password);

private:
  int _port;             // SERVER PORT
  std::string _password; // SERVER PASSWORD
};

std::ostream &operator<<(std::ostream &o, Server const &i);

#endif

#include <iostream>
#include <memory>
#include <string>

struct destination
{
    destination(const std::string ip_, int port_) : ip(ip_), port(port_) {}

    std::string ip;
    int port;
};

struct connection
{
    connection(const int port_, std::string ip_) : port(port_), ip(ip_)
    {
        std::cout << "Connecting to " << ip << ":" << port << std::endl;
    }

    std::string ip;
    int port;
};

void disconnect(connection conn)
{
    std::cout << "Disconnected from " << conn.ip << ":" << conn.port << std::endl;
}

void end_connection(connection *conn)
{
    disconnect(*conn);
}

connection connect(destination *dest)
{
    connection conn(dest->port, dest->ip);
    return conn;
}

void f(destination &d)
{
    connection c = connect(&d);
    // std::shared_ptr<connection> p(&c, end_connection);

    // lambda
    std::shared_ptr<connection> p(&c,
                                  [](connection *c)
                                  {
                                      disconnect(*c);
                                  });
    std::cout << "connecting now(" << p.use_count() << ")" << std::endl;
}

int main()
{
    destination d = {"111-2222-1111", 1234};
    f(d);

    return 0;
}
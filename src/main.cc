#include <iostream>

#include <string>

static void start(const std::string &name)
{
    std::cout << name << '\n';
}
int main()
{
    std::cout << "Hi ";
    const std::string user = "Darwin";
    start(user);
}
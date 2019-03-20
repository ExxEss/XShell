#include <iostream>
#include <unistd.h>

using namespace std;

int main()
{
    std::cout << "<----------------->" << std::endl;
    pid_t pid;
    pid = fork();

    if (pid < 0) {
        perror("Fork fail !");
        exit(EXIT_FAILURE);
    }

    std::cout << "Exit fail is: "<< EXIT_FAILURE << endl;

    if (pid > 0)
        std::cout << "i\'m the father " << getpid() << endl;
    else if (!pid)
        std::cout << "i\'m the son " << getpid() << endl;

    std::cout << pid << std::endl;
    return 0;
}

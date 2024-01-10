#include <iostream>
#include <sys/socket.h>

int main(int argc, char** argv){
    if (argc == 1){
        std::cerr << "(-) Usage: ./scan [host] [port]" << std::endl;
        return 1;
    }

    int domain = AF_INET;
    int type = SOCK_STREAM;
    int protocol = 0; // IP appears ar 0 in headers (man protocols for more)

    int sockfd = socket(domain, type, protocol);
    if (sockfd == -1){
        std::cerr << "(-) Error while creating a socket" << std::endl;
        return 1;
    }


    return 0;
}
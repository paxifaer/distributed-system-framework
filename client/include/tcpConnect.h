/*************************************************************************
    > File Name: tcpConnect.h
    > Author: lisicheng
    > Mail: 1050592374@qq.com 
    > Created Time: Sun 25 Nov 2018 04:59:03 AM PST
 ************************************************************************/

#ifndef __TCPCONNECT_H__
#define __TCPCONNECT_H__

#include <iostream>
#include <cstring>
#include <cstdio>
#include <string>
#include <cassert>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <errno.h>


class TcpConnect {
private:
	int _connectFd;
	std::string _ip;
	uint16_t _port;
public:
	int getConnectFd();
	uint16_t getPort();
	std::string getIp();


	int Connect(const std::string& ip,short port);
	~TcpConnect();
	int Send(const std::string& message);
	int Recv(std::string& str);
};
#endif



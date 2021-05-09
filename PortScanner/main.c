#include <stdio.h>
#include <stdlib.h>
#include <SFML/Network.h>

sfSocketStatus is_open(sfIpAddress ip, unsigned short port, sfTime timeout){
	return sfTcpSocket_connect(sfTcpSocket_create(), ip, port, timeout);
}
int main() {
	sfIpAddress Ip = { "192.168.1.1" };
	sfTime Timeout = {1};
	for (unsigned short Port = 1; Port <= 100; Port++) {
		if (is_open(Ip, Port, Timeout) == sfSocketDone) {
			printf("[OPEN]-->%d\n", Port);
		}
		else
		{
			printf("[CLOSED]-->%d\n", Port);
		}
	}
	system("pause>0");
}
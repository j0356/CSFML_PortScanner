#include <stdio.h>
#include <SFML/Network.h>

sfSocketStatus is_open(sfIpAddress Ip, unsigned short Port, sfTime Timeout){
	return sfTcpSocket_connect(sfTcpSocket_create(), Ip, Port, Timeout);
}
int main(){
	sfIpAddress ip = {"192.168.1.1"};
	unsigned short port = 80;
	sfTime timeout = {0};
	if(is_open(ip, port, timeout) == sfSocketDone){
		printf("[OPEN]\n");
	}else{
		printf("[CLOSED]\n");
	}
	
}

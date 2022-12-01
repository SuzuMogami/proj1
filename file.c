#include<fcntl.h>
#include<stdlib.h>
#include<stdio.h>
#include <unistd.h>


int main(){
	char buff[10];
	int fd,fr,fw,fc;
	fd = open("test.txt",O_RDONLY);
	if(fd < 0 ){
		perror("コメント：");
		exit(1);
		}
	fr=read(fd,buff,10);
		if(fd < 0 ){
		perror("コメント：");
		exit(1);
		}
	fw=write(1,buff,10);
		if(fd < 0 ){
		perror("コメント：");
		exit(1);
		}
	fc=close(fd);
		if(fd < 0 ){
		perror("コメント：");
		exit(1);
		}
	}

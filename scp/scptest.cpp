#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, const char * argv[])
{
	int ret=0;
        //execl("/bin/ls", "ls", "/media/",(char *)0);
        ret = execlp("/usr/bin/nohup","nohup","scp","/home/parallels/chirag/testprog/cpptests/scp/myFile.txt root@172.30.1.101:/home/whirlpool/",(char *)0);
	//system("scp /home/parallels/chirag/testprog/cpptests/scp/myFile.txt root@172.30.1.101:/home/whirlpool/");
	printf("%d \n",ret);
    return 0;
}

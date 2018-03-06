To run a command as administrator (user "root"), use "sudo <command>".
See "man sudo_root" for details.

ubuntu@ubuntu:~$ cd Desktop/test/
ubuntu@ubuntu:~/Desktop/test$ make
make: 'test' is up to date.
ubuntu@ubuntu:~/Desktop/test$ ./test
12 0x7fff547947ec 
ubuntu@ubuntu:~/Desktop/test$ make
g++ -std=c++14 -Wall -c test.cpp
test.cpp: In function ‘int main()’:
test.cpp:6:27: error: ‘b’ was not declared in this scope
   std::cout << a <<" " << b <<" "<<std::endl;
                           ^
Makefile:11: recipe for target 'test.o' failed
make: *** [test.o] Error 1
ubuntu@ubuntu:~/Desktop/test$ make
g++ -std=c++14 -Wall -c test.cpp
g++ -std=c++14 test.o -o test
ubuntu@ubuntu:~/Desktop/test$ make
make: 'test' is up to date.
ubuntu@ubuntu:~/Desktop/test$ make
make: 'test' is up to date.
ubuntu@ubuntu:~/Desktop/test$ ./test
10 0x7ffe75f6630c 
12 0x7ffe75f6630c 
ubuntu@ubuntu:~/Desktop/test$ make
make: 'test' is up to date.
ubuntu@ubuntu:~/Desktop/test$ make
g++ -std=c++14 -Wall -c test.cpp
g++ -std=c++14 test.o -o test
ubuntu@ubuntu:~/Desktop/test$ ./test
10 0x7ffdd55dc9bc 
12 0x7ffdd55dc9bc 
ubuntu@ubuntu:~/Desktop/test$ make
make: 'test' is up to date.
ubuntu@ubuntu:~/Desktop/test$ ./test
10 0x7ffc1bfa753c 
12 0x7ffc1bfa753c 
ubuntu@ubuntu:~/Desktop/test$ make
make: 'test' is up to date.
ubuntu@ubuntu:~/Desktop/test$ ./test
10 0x7ffe319b337c 
12 0x7ffe319b337c 
ubuntu@ubuntu:~/Desktop/test$ make
make: 'test' is up to date.
ubuntu@ubuntu:~/Desktop/test$ make
make: 'test' is up to date.
ubuntu@ubuntu:~/Desktop/test$ ./test
10 0x7ffd2ea6971c 
12 0x7ffd2ea6971c 
ubuntu@ubuntu:~/Desktop/test$ make
make: 'test' is up to date.
ubuntu@ubuntu:~/Desktop/test$ ./test
10 0x7ffeee704cac 
12 0x7ffeee704cac 
ubuntu@ubuntu:~/Desktop/test$ make
make: 'test' is up to date.
ubuntu@ubuntu:~/Desktop/test$ make
make: 'test' is up to date.
ubuntu@ubuntu:~/Desktop/test$ ./test
10 0x7ffedab8b75c 
12 0x7ffedab8b75c 
ubuntu@ubuntu:~/Desktop/test$ ./make
bash: ./make: No such file or directory
ubuntu@ubuntu:~/Desktop/test$ ./1_1
bash: ./1_1: No such file or directory
ubuntu@ubuntu:~/Desktop/test$ ./1-1
bash: ./1-1: No such file or directory
ubuntu@ubuntu:~/Desktop/test$ 
rm *.o *.so *.lib test

gcc -fPIC -c transpose.c
gcc -shared -o libtranspose.so transpose.o
gcc -L$(pwd) -Wl,-rpath=$(pwd) -o test main.c -ltranspose -g

cp transpose.h thirdparty/linux/include/
cp libtranspose.so thirdparty/linux/lib/x64/

cp transpose.h thirdparty/Mac/include/
cp libtranspose.so thirdparty/Mac/lib/x64/

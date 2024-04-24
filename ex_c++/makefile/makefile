#编译main.exe程序，依赖main.o和data.o文件
main.exe : main.o data.o
	g++ -o main.exe main.o data.o
	
#生成main.o文件，依赖main.cpp和data.h文件
main.o: main.cpp data.h
	g++ -c -o main.o main.cpp -I.
	
#生成data.o文件，依赖data.cpp和data.h文件
data.o: data.cpp data.h
	g++ -c -o data.o data.cpp -I.

#声明clean和all为伪目标
.PHONY: clean all

#清理生成的可执行文件和目标文件
clean:
	del *.exe /q /s
	del *.o /q /s
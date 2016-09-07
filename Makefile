all:
	clang++ -fPIC -shared -fvisibility-ms-compat -o lib.so lib.cpp
	clang++ -Wall -Werror app.cpp -o app -L. -l:lib.so

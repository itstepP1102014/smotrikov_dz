#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>  
//#include <CommCtrl.h>
#include <windows.h>
#include <fstream>
int copyProgress = 0;

DWORD WINAPI Thread(LPVOID lp) {
	FILE *from, *to;
	const size_t bufferSize = 65000;
	char buffer[bufferSize];


	from = fopen("D:\\Korolevstvo_grez.txt", "rb");
	if (from == NULL)
	{
		std::cout << "no file \n";
		exit(0);
	}


	// obtain file size:
	fseek(from, 0, SEEK_END);
	auto lSize = ftell(from);
	rewind(from);



	to = fopen("D:\\Korolevstvo_grez2.txt", "wb");
	if (from == NULL)
	{
		std::cout << "no file \n";
		exit(0);
	}

	int totalCopied = 0;

	int readBytes;
	do {
		readBytes = fread(buffer,1, bufferSize,from);
		totalCopied += readBytes;
		// write
		fwrite(buffer, 1, readBytes, to);
		copyProgress = (totalCopied * 100 / lSize);
	} while (readBytes == bufferSize);
	fclose(from);
	fclose(to);

}

int main() {
	HANDLE h = CreateThread(NULL, 0, Thread, (LPVOID)0, 0, NULL);
	WaitForSingleObject(h, INFINITE);
		return 0;
}

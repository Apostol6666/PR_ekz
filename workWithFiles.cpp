#include "pch.h"
#include <iostream>
#include "head.h"
#include <fstream>

int fileExcept(ifstream &fail) {
	if (!fail.is_open()) return -1;
	return 0;
}

int fileExcept_out(ofstream &fail) {
	if (!fail.is_open()) return -1;
	return 0;
}

int except(char *str, const char &simb) {
	int i = 0;
	while (str[i] != '/0') {
		if (str[i] == simb) {
			return 1;
		}
	}
	return -1;
}

Russ & readSent(string namefile, int num_sent) {
	char buff;
	Russ sentence;

	ifstream on;
	on.open(namefile);
	fileExcept(on);

	int i = 0;
	while (i != num_sent) {
		on >> buff;
		if (except(&buff, '.') == 1) i++;
	}

	while (except(&buff, '.') != 1) {
		sentence.push(buff);
	}

	return sentence;
}

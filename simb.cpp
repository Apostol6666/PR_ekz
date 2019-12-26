#include "pch.h"
#include <iostream>
#include "head.h"
#include <fstream>
#include <string>

using namespace std;

Russ::Russ(char *ss) {
	int i = 0;
	while (ss[i]!='/0') {
		s[i] = ss[i];
	}
}

bool Russ:: operator !=(const Russ &str) const{
	Russ two(*this);
	int i = 0, j=0, count =0;

	while (two.s[i] != ' ') {
		while (str.s[j] != ' ') {
			if (two.s[i] == str.s[i]) {
				j++;
				count++;
			}
		}
		i++;
	}
	if ((count == strlen(two.s)) && (count == strlen(str.s))) return 1;
	else return 0;
}

Russ Russ::operator +(const Russ &str) const{
	Russ res(*this);
	int i = 0;
	while (str.s[i] != '/0') { i++; }
	int len = i;

	while (str.s[i - len] != '/0') {
		res.s[i] = str.s[i-len];
		i++;
	}
	res.s[i + 1] = '\0';

	return res;
}

Russ Russ::operator -(const Russ &str) const {
	Russ res(*this);
	int i = 0;
	while (res.s[i] != str.s[1]) {
		i++;
	}

	int j=0;
	while (str.s[j] != '/0') {
		if (res.s[i] == str.s[j]) {
			res.s[i] = '1';
		}
	}

	i++;
	while (res.s[i] != '/0') {
		if (res.s[i] = 1) {
			while (res.s[i] != '/0') {
				res.s[i] = res.s[i + 1];
			}
		}
	}

	return res;
}

int Russ:: operator >(const Russ &str) {
	Russ res(*this);
	int i = 0;
	while (str.s[i] == res.s[i]) i++;

	if ((int)str.s[i] > (int)res.s[i]) {
		cout << " 1 > 2 ";
		return 0;
	}
	if (str.s[i] == '/0') {
		cout << " 1 = 2 ";
		return 0;
	}
	else {
		cout << " 1 < 2 ";
		return 2;
	}
}


Russ& Russ::ob(const Russ &str,const Russ &strtwo) {
	int i = 0;
	Russ res;
	while (str.s[i] != '/0') {
		if (str.s[i] == strtwo.s[i]) res.s[i] = str.s[i];
		i++;
	}
	return res;
}

void Russ::push(const char &k) {
	int i = 0;
	while (s[i] != '/0') {
		i++;
	}
	s[i] = k;
	s[i + 1] = '/0';
}

void Russ::remove(const char &k) {
	int i = 0;
	while (s[i] != k) {
		i++;
	}

	while (s[i] != '/0') {
		s[i] = s[i + 1];
	}
	s[i] = '/0';
}

int fileExcept_Ru(ofstream &fail) {
	if (!fail.is_open()) return -1;
	return 0;
}

void Russ::addInFile(const string name_file) {
	ofstream out;
	out.open(name_file);

	fileExcept_Ru(out);
	out << s;
}


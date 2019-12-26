#include "pch.h"
#include <iostream>
#include "head.h"

using namespace std;

Russ::Russ(char *ss) {
	int i = 0;
	while (ss[i]!='/0') {
		s[i] = ss[i];
	}
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

bool Russ:: operator >(const Russ &str) {
	Russ res(*this);
	int i = 0;
	while (str.s[i] != '/0') {
		i++;
	}
	int j = 0;
	while (res.s[i] != '/0') {
		j++;
	}
	if (i > j) {
		return 0;
	}
	else return 1;
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

void Russ::push(char &k) {
	int i = 0;
	while (s[i] != '/0') {
		i++;
	}
	s[i] = k;
	s[i + 1] = '/0';
}

void Russ::remove(char &k) {
	int i = 0;
	while (s[i] != k) {
		i++;
	}

	while (s[i] != '/0') {
		s[i] = s[i + 1];
	}
	s[i] = '/0';
}



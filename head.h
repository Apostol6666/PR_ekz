#ifndef _SIMB_H
#define _SIMB_H

using namespace std;

class Russ {
private:
	char s[];
public:
	Russ(){}
	Russ(char *ss);

	Russ operator +(const Russ &str) const;
	Russ operator -(const Russ &str) const;
	bool operator >(const Russ &str);
	Russ &ob(const Russ &str, const Russ &strtwo);

	void push(char &k);
	void remove(char &k);

	friend istream &operator >>(istream &in, Russ &str) {
		int i = 0;
		in >> Russ.s[i];
		return in;
	}

};


#endif

#ifndef _SIMB_H
#define _SIMB_H

using namespace std;

class Russ {
private:
	char s[];
public:
	Russ(){}
	Russ(char *ss);

	bool operator !=(const Russ &str) const;
	Russ operator +(const Russ &str) const;
	Russ operator -(const Russ &str) const;
	int operator >(const Russ &str);
	Russ &ob(const Russ &str, const Russ &strtwo);

	void push(const char &k);
	void remove(const char &k);
};


#endif

#include "msg.pb.h"
#include <iostream>
#include <fstream>
using namespace std;
using namespace lm;

void listmsg(const lm::helloworld & msg)
{
	cout << msg.id() <<endl;
	cout << msg.str() <<endl;
}

int main(void)
{
    lm:helloworld msg1;
	fstream input("./msg.pb", ios::in | ios::binary);   
    if (!msg1.ParseFromIstream(&input)) {   
            cerr << "Failed to parse address book." << endl;   
            return -1;   
    }   
	listmsg(msg1);
	return 0;
}

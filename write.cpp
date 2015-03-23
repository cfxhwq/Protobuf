#include "msg.pb.h"
#include <iostream>
#include <fstream>
using namespace std;
using namespace lm;
int main(void)
{
    lm:helloworld msg1;
	msg1.set_id(101);
	msg1.set_str("hello");
	fstream output("./msg.pb",ios::out | ios::trunc | ios::binary);
	if( !msg1.SerializeToOstream(&output))
	{
		 cerr << "Failed to write msg." << endl;   
         return -1;  
	}
	return 0;
}

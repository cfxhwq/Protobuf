all: write reader  
  
clean:
	rm -f write reader msg.*.cc msg.*.h *.o  log  
  
proto_msg:
	protoc --cpp_out=. msg.proto  
  
  
write: msg.pb.cc write.cpp
	g++  msg.pb.cc write.cpp -o write  `pkg-config --cflags --libs protobuf`  
  
reader: msg.pb.cc reader.cpp
	g++  msg.pb.cc reader.cpp -o reader  `pkg-config --cflags --libs protobuf` 

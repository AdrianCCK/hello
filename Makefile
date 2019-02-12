CXXFLAGS =	-O2 -g -Wall -fmessage-length=0

OBJS =		hello.o

LIBS =

TARGET =	hello.exe

$(TARGET):	$(OBJS)
	$(CXX) -o $(TARGET) $(OBJS) $(LIBS)

all:	$(TARGET)

clean:
	del -f $(OBJS) $(TARGET)

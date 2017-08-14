CXXFLAGS =	-O2 -g -Wall -fmessage-length=0 -DBOOST_SIGNALS_NO_DEPRECATION_WARNING

OBJS =		OpenLifeOrganizer.o View.o

LIBS = -lwthttp -lwt -lboost_signals

TARGET =	OpenLifeOrganizer


all:	$(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

	
$(TARGET):	$(OBJS)
	$(CXX) $(CXXFLAGS)  -o $@ $(OBJS) $(LIBS)

View.o: View.cpp View.h
	$(CXX) -c $(CXXFLAGS) View.cpp

OpenLifeOrganizer.o: OpenLifeOrganizer.cpp
	$(CXX) -c $(CXXFLAGS)  OpenLifeOrganizer.cpp 

clean:
	- rm $(OBJS)
	- rm $(TARGET)


# ./OpenLifeOrganizer  --docroot . --http-address 0.0.0.0 --http-port 9090
	
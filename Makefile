CXXFLAGS =	-O2 -g -Wall -fmessage-length=0 -DBOOST_SIGNALS_NO_DEPRECATION_WARNING -std=c++11 


OBJS =		OpenLifeOrganizer.o View.o Model.o MdlOloDb.o XmlSupport.o

LIBS = -lwthttp -lwt -lboost_signals -ltinyxml2 -lm

TARGET =	OpenLifeOrganizer


all:	$(TARGET)
	
$(TARGET):	$(OBJS)
	$(CXX) $(CXXFLAGS)  -o $@ $(OBJS) $(LIBS)

View.o: View.cpp View.h
	$(CXX) -c $(CXXFLAGS) View.cpp

Model.o: Model.cpp Model.h
	$(CXX) -c $(CXXFLAGS) Model.cpp

MdlOloDb.o: MdlOloDb.cpp MdlOloDb.h
	$(CXX) -c $(CXXFLAGS) MdlOloDb.cpp

XmlSupport.o: XmlSupport.cpp XmlSupport.h
	$(CXX) -c $(CXXFLAGS) XmlSupport.cpp

OpenLifeOrganizer.o: OpenLifeOrganizer.cpp
	$(CXX) -c $(CXXFLAGS) OpenLifeOrganizer.cpp 

clean:
	- rm $(OBJS)
	- rm $(TARGET)


doxygen/index.html: 
	doxygen openlifeorganizer.doxygen


# ./OpenLifeOrganizer  --docroot . --http-address 0.0.0.0 --http-port 9090
	
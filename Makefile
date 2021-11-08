main : main.o client.o multimediaelement.o jpg.o mp3.o mp4.o showvisitor.o spectrographvisitor.o jpg.h mp3.h mp4.h
	g++ -o main main.o client.o multimediaelement.o jpg.o mp3.o mp4.o showvisitor.o spectrographvisitor.o
main.o : main.cpp client.h jpg.h mp4.h mp3.h
	g++ -c main.cpp

mp3.o : mp3.cpp mp3.h visitor.h multimediaelement.h
	g++ -c mp3.cpp

mp4.o : mp4.cpp mp4.h visitor.h multimediaelement.h
	g++ -c mp4.cpp

jpg.o : jpg.cpp jpg.h visitor.h multimediaelement.h
	g++ -c jpg.cpp

multimediaelement.o : multimediaelement.cpp visitor.h multimediaelement.h
	g++ -c multimediaelement.cpp

client.o : client.cpp client.h visitor.h multimediaelement.h
	g++ -c client.cpp

showvisitor.o : showvisitor.cpp showvisitor.h jpg.h mp3.h mp4.h
	g++ -c showvisitor.cpp

spectrographvisitor.o : spectrographvisitor.cpp spectrographvisitor.h jpg.h mp3.h mp4.h
	g++ -c spectrographvisitor.cpp
clean :
	rm *.o main
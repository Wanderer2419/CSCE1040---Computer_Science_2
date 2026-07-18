myprog.exe : main.o account.o accountChecking.o accountSaving.o accounts.o accountSystem.o
	g++ main.o account.o accountChecking.o accountSaving.o accounts.o accountSystem.o -o myprog.exe

main.o : main.cpp accountSystem.h accounts.h account.h accountChecking.h accountSaving.h
	g++ -Wall -c main.cpp

accountSystem.o : accountSystem.cpp accountSystem.h accounts.h account.h accountChecking.h accountSaving.h
	g++ -Wall -c accountSystem.cpp

accounts.o : accounts.cpp accounts.h account.h accountChecking.h accountSaving.h
	g++ -Wall -c accounts.cpp

accountChecking.o : accountChecking.cpp accountChecking.h account.h
	g++ -Wall -c accountChecking.cpp

accountSaving.o : accountSaving.cpp accountSaving.h
	g++ -Wall -c accountSaving.cpp

account.o : account.cpp account.h
	g++ -Wall -c account.cpp

clean:
	rm *.o myprog.exe

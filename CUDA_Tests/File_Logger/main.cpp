#include <string>
#include <fstream>
#include <iostream>
#include <stdio.h>

void logger ( std::string );

int main ( void )
{
	if ( std::remove("log.txt") == 0 )
		std::cout<<"Löschen erfolgreich!"<<std::endl;
	else
		std::cout<<"Fehler beim Löschen!"<<std::endl;	
	
	std::cout<<"Bitte geben sie eine oder mehrere Nachrichten ein."<< std::endl;
	for ( int i = 0; i < 3 ; ++i)
	{
		std::string input;
		std::cin >> input;
		logger( input );
	}
	return 0;
}

void logger ( std::string message )
{
	std::fstream logf;
	logf.open ( "log.txt", std::fstream::out | std::fstream::app );
	
	if ( logf.is_open() )
		logf << message <<std::endl;

	logf.close();
}

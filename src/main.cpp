#pragma once
#include "imported_libraries.h"
#include "welcomewindow.h"
using namespace std;

int main()
{
	//opening config.cfg file, taking window size values, rendering window object
	void extractConfigValues();





	while (welcomeWindow.isOpen())
	{
		while ( const std::optional event = window.pollEvent() )
		{
			if ( event->is<sf::Event::Closed>() )
				window.close();
		}

		window.clear();
		window.draw( shape );
		window.display();
	}
}

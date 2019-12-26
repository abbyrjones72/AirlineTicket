#include "AirlineTicket.h"
#include <iostream>


using namespace std;

int main(int argc, char** argv)
{
	AirlineTicket newTicket;			// stack-based airline ticket

	newTicket.setPassengerName("Abby Jones");
	newTicket.setNumberOfMiles(700);
	int cost = newTicket.calculatePriceInDollars();
	cout << "This ticket will cost $" << cost << endl;

	AirlineTicket* newTicket3;			// heap-based airline ticket

	newTicket3 = new AirlineTicket();	// allocate a new object
	newTicket3->setPassengerName("Abby Jones");
	newTicket3->setNumberOfMiles(2000);
	newTicket3->setHasSuperEliteRewardsStatus(true);
	int cost3 = newTicket3->calculatePriceInDollars();
	cout << "This other ticket will cost $" << cost3 << endl;
	delete newTicket3;

	return 0;
}
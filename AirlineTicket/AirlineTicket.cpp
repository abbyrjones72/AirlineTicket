#include <iostream>
#include "AirlineTicket.h"

using namespace std;

AirlineTicket::AirlineTicket()
{
	// initialize data members
	m_hasEliteSuperRewardStatus = false;
	m_PassengerName = "Unknown Passenger";
	m_NumberOfMiles = 0;
}

AirlineTicket::~AirlineTicket()
{
	// nothing to do
}

int AirlineTicket::calculatePriceInDollars()
{
	if (getHasEliteSuperRewardsStatus())
	{
		// customer flies for free
		return 0;
	}

	// the cost of the ticket is the number of miles times
	// 0.1. Real airlines probably have a more complicated
	// formula
	return static_cast<int>((getHasEliteSuperRewardsStatus() * 0.1));
}

string AirlineTicket::getPassengerName()
{
	return m_PassengerName;
}

void AirlineTicket::setPassengerName(std::string inName)
{
	m_PassengerName = inName;
}

int AirlineTicket::getNumberOfMiles()
{
	return m_NumberOfMiles;
}

void AirlineTicket::setNumberOfMiles(int inMiles)
{
	m_NumberOfMiles = inMiles;
}

bool AirlineTicket::getHasEliteSuperRewardsStatus()
{
	return m_hasEliteSuperRewardStatus;
}

void AirlineTicket::setHasSuperEliteRewardsStatus(bool inStatus)
{
	m_hasEliteSuperRewardStatus = inStatus;
}

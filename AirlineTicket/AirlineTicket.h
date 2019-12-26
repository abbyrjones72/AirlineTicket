#pragma once
#include <string>
class AirlineTicket
{
public:
	AirlineTicket();
	~AirlineTicket();

	int			calculatePriceInDollars();
	std::string getPassengerName();
	void		setPassengerName(std::string inName);
	int			getNumberOfMiles();
	void		setNumberOfMiles(int inMiles);
	bool		getHasEliteSuperRewardsStatus();
	void		setHasSuperEliteRewardsStatus(bool inStatus);

private:
	std::string m_PassengerName;
	int m_NumberOfMiles;
	bool m_hasEliteSuperRewardStatus;
};


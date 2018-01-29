#include "stat.hpp"
#include <iostream>
using namespace std;

Stat::Stat(std::string time, std::string qgag, std::string qpcp) {
	_time = time;
	_precipitationQgag = stof(qgag);
	if (_precipitationQgag<= -9999 || _precipitationQgag >= 999)
		_precipitationQgag = 0;

	_precipitationQpcp = stof(qpcp);
	if (_precipitationQpcp<= -9999 || _precipitationQpcp >= 999)
		_precipitationQpcp = 0;
}

Stat* Day::getStatNext() {
	Stat* stat = nullptr;
	if (_currentStat < _statCount)
		stat = _stats[_currentStat++];
	return stat;
}
#include "matchday/matchday.h"
#include <iostream>

Matchday::Matchday()
{
    std::cout << "Welcome to Matchday" << std::endl;
}

void Matchday::setdefenseStrategy(IDefenseStrategy* defense_strategy)
{
    defense_strategy_ = defense_strategy;
}

std::vector<std::string> Matchday::getMatchdaySquad(int difficulty)
{
    std::vector<std::string> team_sheet;
    std::vector<std::string> defensive_lineup = defense_strategy_->buildTeamDefense(difficulty);
    for(unsigned int i = 0; i < defensive_lineup.size(); i++)
    {
        team_sheet.push_back(defensive_lineup[i]);
        std::cout << defensive_lineup[i] << std::endl;
    }
    return team_sheet;
}

int main()
{
    Matchday matchday;
    DefenseOffsideTrap offside_trap;
    matchday.setdefenseStrategy(&offside_trap);
    matchday.getMatchdaySquad(1);
    return 0;
}
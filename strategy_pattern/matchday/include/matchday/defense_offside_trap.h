/**
 * @file defense_offside_trap.h
 * @author Venkatavaradhan Vembanoor Lakshmi Narayanan (venkatavaradhanvl@hotmail.com)
 * @brief Defense Offside Trap class
 * @version 0.1
 * @date 2019-11-13
 */
#ifndef DEFENSE_OFFSIDE_TRAP_H
#define DEFENSE_OFFSIDE_TRAP_H

#include "matchday/idefense_strategy.h"

/**
 * @brief Defense Offside Trap
 * A class that implements the defense strategy interface class. This is one type of defense
 * strategy behavior for team selection
 */
class DefenseOffsideTrap : public IDefenseStrategy
{
    public:
        /**
         * @brief Build team's defense
         * A method to build team's defense by taking in the difficulty level of the opponent 
         * @param difficulty 
         * @return std::vector<std::string> 
         */
        std::vector<std::string> buildTeamDefense(int difficulty);
        /**
         * @brief Get the Formation
         * A method to get the formation of the team's defense
         * @return unsigned int 
         */
        unsigned int getFormation();
};

#endif  // DEFENSE_OFFSIDE_TRAP_H
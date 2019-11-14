/**
 * @file idefense_strategy.h
 * @author Venkatavaradhan Vembanoor Lakshmi Narayanan (venkatavaradhanvl@hotmail.com)
 * @brief Defense Strategy Interface class
 * @version 0.1
 * @date 2019-11-12
 */
#ifndef IDEFENSE_STRATEGY_H
#define IDEFENSE_STRATEGY_H

#include <vector>
#include <string>

/**
 * @brief Defense Strategy Interface
 * A class that acts as an interface between different defensive strategies of the team
 * based on different oppponents which are run-time variables
 */
class IDefenseStrategy
{
    public:
        /**
         * @brief Build team's defense
         * A virtual method to build team's defense by taking in the difficulty level of the opponent
         * @param difficulty 
         * @return std::vector<std::string> 
         */
        virtual std::vector<std::string> buildTeamDefense(int difficulty) = 0;
        /**
         * @brief Get the Formation
         * A virtual method to get the formation of the team's defense
         * @return unsigned int 
         */
        virtual unsigned int getFormation() = 0;
    
    private:
        /**
         * @brief Formation
         * Formation for defense
         */
        unsigned int formation_;
};

#endif  // IDEFENSE_STRATEGY_H
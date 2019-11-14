/**
 * @file matchday.h
 * @author Venkatavaradhan Vembanoor Lakshmi Narayanan (venkatavaradhanvl@hotmail.com)
 * @brief A Matchday class
 * @version 0.1
 * @date 2019-11-10
 */
#ifndef MATCHDAY_H
#define MATCHDAY_H

#include <stdlib.h>
#include <iostream>
#include "matchday/matchday_includes.h"

/**
 * @brief Matchday class
 * A class that acts as a client using strategy pattern with different strategies as interfaces 
 * and takes in strategy arguments for creating a matchday squad depending on run-time variables
 */
class Matchday
{
    public:
        /**
         * @brief Construct a new Matchday object
         * A constructor for the Matchday class to create an instance of matchday
         */
        Matchday();
        /**
         * @brief Destroy the Matchday object
         * A destructor to destroy all Matchday instances
         */
        virtual ~Matchday(){}
        /**
         * @brief Set the Offense Strategy object
         * @param offense_strategy 
         */
        // void setOffenseStrategy(IOffenseStrategy* offense_strategy);
        /**
         * @brief Set the Offense Strategy object
         * @param defense_strategy 
         */
        void setdefenseStrategy(IDefenseStrategy* defense_strategy);
        /**
         * @brief Set the Offense Strategy object
         * @param substitution_strategy 
         */
        // void setSubstitutionStrategy(ISubstitutionStrategy* substitution_strategy);
        /**
         * @brief Get the Matchday Squad object
         * A method to assemble offense, defense for the team for matchday
         * @param difficulty
         * @return std::vector<std::string> 
         */
        std::vector<std::string> getMatchdaySquad(int difficulty);

    private:
        /**
         * @brief Offense strategy
         * A pointer that keeps the run-time strategy
         */
        // IOffenseStrategy* offense_strategy_;
        /**
         * @brief Offense strategy
         * A shared pointer that keeps the run-time strategy
         */
        IDefenseStrategy* defense_strategy_;
        /**
         * @brief Offense strategy
         * A shared pointer that keeps the run-time strategy
         */
        // ISubstitutionStrategy* substitution_strategy_;
};

#endif  // MATCHDAY_H
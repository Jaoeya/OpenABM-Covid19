/*
 * constant.h
 *
 *  Created on: 5 Mar 2020
 *      Author: hinchr
 */

#ifndef CONSTANT_H_
#define CONSTANT_H_

#include <gsl/gsl_rng.h>
#include <gsl/gsl_randist.h>
#include <gsl/gsl_cdf.h>

#define FALSE 0
#define TRUE 1


enum EVENT_TYPES{
	UNINFECTED,
	PRESYMPTOMATIC,
	ASYMPTOMATIC,
	SYMPTOMATIC,
	HOSPITALISED,
	CRITICAL,
	RECOVERED,
	DEATH,
	QUARANTINED,
	QUARANTINE_RELEASE,
	TEST_TAKE,
	TEST_RESULT,
	CASE,
	N_EVENT_TYPES
};

enum TRANSITIONS_TYPES{
	ASYMPTOMATIC_RECOVERED,
	PRESYMPTOMATIC_SYMPTOMATIC,
	SYMPTOMATIC_RECOVERED,
	SYMPTOMATIC_HOSPITALISED,
	HOSPITALISED_CRITICAL,
	HOSPITALISED_RECOVERED,
	CRITICAL_DEATH,
	CRITICAL_RECOVERED,
	SYMPTOMATIC_QUARANTINE,
	TRACED_QUARANTINE,
	TEST_RESULT_QUARANTINE,
	N_TRANSITION_TYPES
};

enum AGE_GROUPS{
	AGE_0_17,
	AGE_18_64,
	AGE_65,
	N_AGE_GROUPS
};

enum HOUSEHOLD_SIZE{
	HH_1,
	HH_2,
	HH_3,
	HH_4,
	HH_5,
	HH_6,
	UK_HOUSEHOLD_N_MAX
};

enum INTERACTION_TYPE{
	HOUSEHOLD,
	WORK,
	RANDOM,
	N_INTERACTION_TYPES
};

#define UNKNOWN -1
#define NO_EVENT -1
#define NO_EDGE -1
#define NO_TEST -2
#define TEST_ORDERED -1
#define NOT_RECURSIVE 1000
#define MAX_DAILY_INTERACTIONS_KEPT 10
#define MAX_TIME 500
#define MAX_INFECTIOUS_PERIOD 40
#define N_DRAW_LIST 1000

#define INPUT_CHAR_LEN 100


gsl_rng * rng;

#endif /* CONSTANT_H_ */


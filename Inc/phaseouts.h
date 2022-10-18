/*
 * phaseouts.h
 *
 *  Created on: Apr 22, 2020
 *      Author: Alka
 */

#ifndef PHASEOUTS_H_
#define PHASEOUTS_H_

#include "main.h"

void allOff();
void comStep (int newStep);
void fullBrake();
void allpwm();
void proportionalBrake();
void twoChannelForward();
void twoChannelReverse();

#endif /* PHASEOUTS_H_ */

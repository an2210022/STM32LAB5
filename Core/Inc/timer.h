/*
 * timer.h
 *
 *  Created on: Dec 10, 2024
 *      Author: Admin
 */

#ifndef INC_TIMER_H_
#define INC_TIMER_H_

extern int timer_flag[5];
extern int timer_counter[5];

void setTimer(int index, int counter);
void timer_run(void);

#endif /* INC_TIMER_H_ */

#pragma once
#include "tasks.h"

#define RIGHT "completed successfully. WELL DONE!!!"
#define WRONG "was not running successfully. Something was WRONG!"

void testingTask01() {

	bool result = task01(10, 15) == 15
		&& task01(40, 25) == 40
		&& task01(7, 7) == 7;

	cout << "Task 01 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {

	bool result = task02(7, 6) == 1
		&& task02(6, 7) == 2
		&& task02(7, 7) == 0;

	cout << "Task 02 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {

	bool result = task03(1, 1, 1) && task03(3, 4, 5) && task03(5, 3, 4) && task03(4, 5, 3)
		&& !task03(1, 2, 3) && !task03(1, 1, 3) && !task03(1, 3, 1) && !task03(3, 1, 1)
		&& !task03(-3, -4, -5) && !task03(-3, 4, 5) && !task03(3, -4, 5) && !task03(3, 4, -5)
		&& !task03(-1, -1, -1);

	cout << "Task 03 " << (result ? RIGHT : WRONG) << endl;
}

void testingTaskX() {

	bool result = taskX(3, 5, 5) && taskX(1, 1, 1)
		&& taskX(1, 1, 2) && taskX(1, 2, 2) && taskX(2, 1, 2)
		&& !taskX(2, 1, 1) && !taskX(1, 2, 1) && !taskX(4, 6, 5)
		&& !taskX(1, 1, -1) && !taskX(-1, 1, 1) && !taskX(1, -1, 1)
		&& !taskX(0, 1, 1) && !taskX(1, 0, 1) && !taskX(1, 1, 0)
		&& !taskX(0, 0, 0) && !taskX(-1, -1, -1);

	cout << "Task  X " << (result ? RIGHT : WRONG) << endl;
}
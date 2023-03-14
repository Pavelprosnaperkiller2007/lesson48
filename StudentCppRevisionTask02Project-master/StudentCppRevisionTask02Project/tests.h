#pragma once
#include "tasks.h"

#define RIGHT "completed successfully. WELL DONE!!!"
#define WRONG "was not running successfully. Something was WRONG!"

void testingTask01() {

	bool result = task01(3, 14) == 4
		&& task01(4, 24) == 6
		&& task01(3, 20) == 6
		&& task01(10, 20) == 2
		&& task01(16, 1) == 0
		&& task01(3, 3) == 1
		&& task01(6, 20) == 3
		&& task01(7, 20) == 2
		&& task01(1, 20) == 20;

	cout << "Task 01 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask02() {

	bool result = task02(5, 27) == 2
		&& task02(2, 30) == 0
		&& task02(3, 1) == 1
		&& task02(10, 20) == 0
		&& task02(3, 20) == 2
		&& task02(3, 3) == 0
		&& task02(6, 20) == 2
		&& task02(7, 20) == 6
		&& task02(1, 20) == 0;

	cout << "Task 02 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask03() {

	bool result = task03(456) == 5
		&& task03(1234567) == 6
		&& task03(-1234567) == 6
		&& task03(3) == 0
		&& task03(-3) == 0
		&& task03(1000) == 0
		&& task03(-1000) == 0
		&& task03(111111) == 1
		&& task03(-111111) == 1
		&& task03(999999) == 9
		&& task03(-999999) == 9
		&& task03(90) == 9
		&& task03(-90) == 9
		&& task03(0) == 0;

	cout << "Task 03 " << (result ? RIGHT : WRONG) << endl;
}

void testingTask04() {

	bool result = task04(456) == 4
		&& task04(1234567) == 5
		&& task04(-1234567) == 5
		&& task04(3) == 0
		&& task04(-3) == 0
		&& task04(10) == 0
		&& task04(-10) == 0
		&& task04(100) == 1
		&& task04(-100) == 1
		&& task04(1000) == 0
		&& task04(-1000) == 0
		&& task04(111111) == 1
		&& task04(-111111) == 1
		&& task04(999999) == 9
		&& task04(-999999) == 9
		&& task04(0) == 0;

	cout << "Task 04 " << (result ? RIGHT : WRONG) << endl;
}


void testingTaskX() {

	bool result = taskX(1) == 2
		&& taskX(2) == 4
		&& taskX(3) == 4
		&& taskX(5) == 6
		&& taskX(18) == 20
		&& taskX(1111) == 1112
		&& taskX(9000) == 9002
		&& taskX(9999) == 10000;

	cout << "Task X  " << (result ? RIGHT : WRONG) << endl;
}
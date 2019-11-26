#ifndef EDIT_H
#define EDIT_H

#include <stdio.h>
#include <string.h>
#include "task.h"

void addTask(struct Task* ptr);
void removeTask(struct Task* ptr);

extern int lastIndex;

#endif
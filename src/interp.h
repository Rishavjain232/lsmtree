#ifndef INTERP_H
#define INTERP_H

#include <time.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

#include "lsmtree.h"
#include "params.h"

#define WORKLOAD_BUFF_SIZE 8589934592 // 8 GB
#define LINE_BUFF_SIZE 2048

int exec_workload(lsmtree *tree, char *workload);
int exec_query(lsmtree *tree, char* q);

#endif

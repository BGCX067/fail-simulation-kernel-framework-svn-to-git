#ifndef FAILURES_H
#define FAILURES_H
#include <linux/list.h>

#define N_FAILURES 3

#define F_MMAP 0
#define F_BRK 1
#define F_SCHED 2

unsigned short next_random(void);

struct biased_tgid_list_struct{
	struct task_struct *task;
	struct list_head head;
};

extern struct biased_tgid_list_struct biased_tgid_list;
extern unsigned short biased_task_probability;
extern pid_t fudido;


#endif

#ifndef PHILOSOPHERS_H
# define PHILOSOPHERS_H
# include <pthread.h>
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/time.h>

typedef struct S_all
{
	unsigned int		philos;
	unsigned long long	start_time;	
	unsigned int		death;
	unsigned int		death_time;
	unsigned int		eat_time;
	unsigned int		sleep_time;
	unsigned int		think_time;
}						t_all;


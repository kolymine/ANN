/*
**	Neuron Header
*/
#ifndef NEURON_H__
#define NEURON_H__

typedef struct	input {
	double	i;
	double	w;
	struct	input *prev;
} input;

typedef struct	nxtinput {
	double	w;
	double	*i;
	struct	nxtinput *prev;
} nxtinput;

typedef struct	neuron {
	double	Tinput;
	double	output;
	double 	bias;
	input *	input;
	struct	neuron *prev;
} neuron;

typedef struct  neuron_p {
	double  Tinput;
	double  output;
	double 	bias;
	nxtinput * input;
	struct  neuron_p *prev;
} neuron_p;

int	input_init(input **,int);
void	input_push(input **, double , double);
int		input_delete(input **);
int		input_size(input *);
void	input_clear(input **);
void	input_show(input *);
void	neuron_output(neuron *);
double	neuron_Tinput(neuron *);
void	nxtinput_push(nxtinput **, double *, double);
void	neuron_push(neuron **);
void	neuron_show(neuron *);

#endif

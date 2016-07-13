all:
	gcc main.c -o main -DTESTLINE=`echo $(lastword $(filter-out src, $(subst /, ,$(dir $<))))`

# This example shows how to control flow of a makefile based on values
# extracted from the build environment.
#
# The commented out line below uses a backtick to acquire the desired value,
# while the uncommented version uses shell. The backtick version fails the
# ifeq as its evaluation is delayed until the print-% target is reached and the
# echo is executed. The shell version evaluates immediately.

#RELEASE1=$(strip `cat /etc/os-release | grep "^NAME" | sed 's/^NAME="Linux \(.*\)"/\1/g'`)
RELEASE1=$(shell cat /etc/os-release | grep "^NAME" | sed 's/^NAME="Linux \(.*\)"/\1/g')
RELEASE2=Mint
ifeq ($(RELEASE1),$(RELEASE2))
export OS=1
else
export OS=0
endif

print-%:
	@echo $* = $($*)

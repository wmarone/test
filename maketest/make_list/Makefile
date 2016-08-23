LIST = 80 81 82

RELEASE_LIST = $(patsubst %,release-%,$(LIST))

.PHONY = all release-all

#release-%:
#	@echo "$@ => $(subst release-,,$@)"

#release-all: $(patsubst %,release-%,$(LIST))

#all: release-all
all:
	@echo "$(RELEASE_LIST)"

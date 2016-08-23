targets = t_a t_b t_c

incr = 0

t_a:
	@echo $@ pre: $(incr)
	$(eval incr = 1)
	@echo $@ post: $(incr)

t_b:
	@echo $@ pre: $(incr)
	$(eval incr = 2)
	@echo $@ post: $(incr)

t_c:
	@echo $@ pre: $(incr)
	$(eval incr = 3)
	@echo $@ post: $(incr)

.PHONY: $(targets)
all: $(targets)
	@echo "done $(targets)"

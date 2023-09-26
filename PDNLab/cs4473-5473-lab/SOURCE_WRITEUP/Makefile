# NOTE: you must have rubber installed to run this makefile

TEX = writeup.tex

all: writeup movepdf clean ## Compile write up, move it, and remove output files

clean: ## Remove output files (not including final PDF)
	rubber --clean $(TEX)

writeup: $(TEX) ## Generate writeup pdf using LaTeX and move it to deliverables directory
	rubber --pdf $(TEX)

movepdf: ## Moves the output pdf to the /deliverables/ directory.
	mv writeup.pdf ../deliverables/writeup.pdf
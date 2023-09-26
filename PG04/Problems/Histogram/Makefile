# https://javatutoring.com/c-program-count-frequency-of-each-character-in-string/
# Note: the large spaces are tabs, this is important 
# Run GCOV, requires that we build the code 
# All of these runs of ./example are a test case 
# We want to cover 100% of prog.c through these tests 
run-tests-coverage: build
./input 1.txt 
./input 2.txt 
./input 3.txt  
gcov prog.c

# Run Valgrind to find memory leaks, requires that we build the code 
run-tests-leak: build 
valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-
callers=20 --track-fds=yes ./input 1.txt 
valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-
callers=20 --track-fds=yes ./input 2.txt  
valgrind --tool=memcheck --leak-check=yes --show-reachable=yes --num-
callers=20 --track-fds=yes ./input 3.txt

 
# Compile the code, requires that we clean up some files first. 
# Add –lm if your code needs the math library. 
build: clean 
gcc -fprofile-arcs -ftest-coverage -g prog.c -o example 
  
clean: 
rm -f *~ 
rm -f example 
rm -f *.gcda *.gcno *.gcov
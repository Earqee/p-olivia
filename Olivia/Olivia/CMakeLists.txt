# CMakeList.txt : CMake project for Olivia, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# Add source to this project's executable.
add_executable (Olivia "Olivia.cpp" "Olivia.h"  "Data/Database.h" "Menu/Menu.h" "Brain/Frontal/Knowledge/Implication/Disjunction/Conjunction/Clause/Literal/LiteralEvaluator.h" "Brain/Frontal/Knowledge/Implication/Disjunction/Conjunction/Clause/ClauseEvaluator.h" "Brain/Frontal/Knowledge/Implication/Disjunction/Conjunction/ConjunctionEvaluator.h" "Brain/Frontal/Knowledge/Implication/Disjunction/DisjunctionEvaluator.h" "Brain/Frontal/Knowledge/Implication/ImplicationEvaluator.h")

# TODO: Add tests and install targets if needed.

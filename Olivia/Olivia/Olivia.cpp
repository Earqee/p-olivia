#include "Olivia.h"

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

//#include "Brain/Conjunction/Rule/Disjunction/Disjunction.h"
#include "Data/Database.h"

#include "Brain/Frontal/Knowledge/Implication/ImplicationHandler.h"



int main()
{
    /* Get input. */
    Database database;

    /* */
    std::vector<std::string> data = database.load(".\\Database\\Diseases\\test.txt");

    std::string word;

    for (int i = 0; i < data.size(); i++) {
        std::cout << data[i] << std::endl;
        std::cout << i << std::endl;
        if (data[i][0] == '#')
            continue;
        ImplicationHandler result;
        std::istringstream buffer(data[i]);
        std::string word;
        buffer >> word;
        result.process(buffer, word);
        break;
    }


    return 0;
}



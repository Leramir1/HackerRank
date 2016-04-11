#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h>
#include <sstream>


std::vector<std::string> split(std::string str, char delimiter) {
    std::vector<std::string> internal;
    std::stringstream ss(str); 
    std::string tok;
  
    while(std::getline(ss, tok, delimiter)) {
      internal.push_back(tok);
    }

    return internal;
}

int main(int argc, char **argv) {
    //std::string input;
    //std::cin>>input;
    std::string input = "12:30:00AM";
    
    std::string c_time, ap_pm;
    
    for (int i = 0; i < input.size()-2; i++){
        c_time.push_back(input[i]);
    }

    ap_pm.push_back(input[8]);
    ap_pm.push_back(input[9]);

    std::vector<std::string> sep = split(c_time, ':');
   
    if (ap_pm == "PM"){
        if (sep[0] == "12"){
            sep[0] = "00";
        }
        int value = atoi(sep[0].c_str());
        value += 12;
        std::cout << value << ":" << sep[1] << ":" << sep[2] << std::endl;
    }

    else {
        if (sep[0] == "12"){
            sep[0] = "00";
        }
        std::cout << sep[0] << ":" << sep[1] << ":" << sep[2] << std::endl;
    }

    return 0;
}
/*
Feu un programa que llegeixi una seqüència de paraules amb claus i parèntesis, i per a cadascuna indiqui si les claus i els parèntesis tanquen correctament.

Entrada

L’entrada és una seqüència de paraules compostes de |’[’|, |’]’|, |’(’| i |’)’|.

Sortida

Per a cada paraula, cal escriure “si” o bé “no” depenent de si les claus i perèntesis tanquen correctament o no.
*/

#include <iostream>
#include <vector>
#include <string>

bool is_correct_sequence(std::string input) {
    std::vector<char> stack;
    for (int i = 0; i < input.size(); i++) {
        char current = input.at(i);
        if (current == '[' || current == '(')
            stack.push_back(current);
        else { // ] )
            if (stack.size() == 0)
                return false;
            else if (stack.at(stack.size() - 1) == (current == ')' ? '(' : '['))
                stack.pop_back();
            else
                return false;
        }
    }
    return !stack.size();
}

int main() {
    std::string input;
    while (std::cin >> input) {
        std::cout << (is_correct_sequence(input) ? "si" : "no") << std::endl;
    }
    return 0;
}

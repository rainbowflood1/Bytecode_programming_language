/*
0x00 End of line
0x01 push value to stack
0x02 pop from stack




*/

#include <iostream>
#include <vector>
#include <string>

class Bytecode {
private:
    std::string asm_main_code = "";
public:
    const char* code;
    Bytecode(const char* code) {
        this->code = code;
        std::vector<int> stack;

        for (int i = 0; i < sizeof(code)/sizeof(code[0]); i++) {
            switch (code[i]) {
                case '\x01':
                    // Push the number after to the stack and then skip the numbers after so that they don't get confused as instructions
                    std::cout << (int) code[i+1] << std::endl;
                    return;

            }
        }
    }
};
#pragma once

#include <iostream>
#include <stdint.h>
#include <map>
#include <vector>

// #include "../run.h"
#include "../run.h"
#include "../Lexer/list.h"


bool receiver_main(std::vector<uint16_t> full_tok,std::vector<std::string> identifiers,Keyword_List* list,Run* obj);
#pragma once
// #include "Lexer/scanner.h"
// #include "Lexer/list.h"
// #include "Parser/Construct.cpp"
// #include "Disk_Space/Disk_SM.h"
// #include "Disk_Space/FSM.h"

#include "Catalog/Syst_Attr.h"
#include "Catalog/Syst_Index.h"
#include "Catalog/Syst_Root.h"
#include "Catalog/Syst_Rel.h"
#include "B_Tree.h"
#include <iterator>

// #include "B_Tree.hh"

// #include "Lexer/scanner.h"


// #include "Disk_Space/FSM.h"

class Run{
    public:
        // B_Tree<Syst_Index,Syst_Index_Row>tree_ind{B_Tree<Syst_Index,Syst_Index_Row>(std::string{"catalog_ind"})};
        // B_Tree<Syst_Attr,Syst_Attr_Row>tree_attr{B_Tree<Syst_Attr,Syst_Attr_Row>(std::string{"catalog_attr"})};
        // B_Tree<Syst_Rel,System_Rel_Row>tree_rel{B_Tree<Syst_Rel,System_Rel_Row>(std::string{"catalog_rel"})};
        B_Tree<Syst_Index,Syst_Index_Row>tree_ind{std::string{"catalog_ind"}};
        B_Tree<Syst_Attr,Syst_Attr_Row>tree_attr{std::string{"catalog_attr"}};
        B_Tree<Syst_Rel,System_Rel_Row>tree_rel{std::string{"catalog_rel"}};
    
    std::string database{};
    bool run();
    void begin();
    void flush();
    Run(){};
    Run(std::string db):database{db}{};
    ~Run();
};
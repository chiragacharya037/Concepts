#include <iostream>
#include "pugixml.hpp"
#include <string>
#include <fstream>
#include <streambuf>
int main()
{
std::ifstream ifs("images.xml");
//std::string str((std::istreambuf_iterator<char>(t)),std::istreambuf_iterator<char>());
std::string xml_mesg( (std::istreambuf_iterator<char>(ifs) ),(std::istreambuf_iterator<char>()    ) );
//std::cout<<xml_mesg<<std::endl;
   /* pugi::xml_document doc;
    doc.load_string(xml_mesg.c_str());
    pugi::xml_node data = doc.child("data");
    /*for(pugi::xml_node_iterator it=data.begin(); it!=data.end(); ++it)
    {
        for(pugi::xml_node_iterator itt=it->begin(); itt!=it->end(); ++itt)
            std::cout << itt->name() << " " << std::endl;
    }*/
pugi::xml_document doc;
doc.load_string(xml_mesg.c_str());
pugi::xpath_query student_query("/data/student");

pugi::xpath_query name_query("Name/text()");
pugi::xpath_query roll_query("Roll/text()");

pugi::xpath_node_set xpath_students = doc.select_nodes(student_query);
for (pugi::xpath_node xpath_student : xpath_students)
{
    // Since Xpath results can be nodes or attributes, you must explicitly get
    // the node out with .node()
    pugi::xml_node student = xpath_student.node();

    pugi::xml_node name = student.select_node(name_query).node();
    pugi::xml_node roll = student.select_node(roll_query).node();

    std::cout << "Student name: " << name.value() << std::endl;
    std::cout << "        roll: " << roll.value() << std::endl;
}
return 0;
}

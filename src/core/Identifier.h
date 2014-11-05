#ifndef IDENTIFIER_H
#define IDENTIFIER_H

#include <string>
#include <map>

#include <core/Logger.h>

class Identifier
{
public:
	Identifier();
	~Identifier();
        
        std::string gen();
        std::string gen(const char*);
        
        std::string get();

private:
    static int m_nextId;
    static std::map<std::string, bool> m_manualList;
    
    std::string m_id;
    
    Logger* m_pLogger;
};
#endif
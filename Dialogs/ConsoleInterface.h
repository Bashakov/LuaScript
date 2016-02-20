#ifndef _CONSOLEINTERFACE_H 
#define _CONSOLEINTERFACE_H

class ConsoleInterface
{
public:
	ConsoleInterface() {};
	virtual ~ConsoleInterface() {};
	virtual void runStatement(const char *) = 0;
	virtual void openFile(const char *filename, size_t lineNumber) = 0;
};

#endif

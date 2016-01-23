//NavBar Class, builds the main navbar
//Is a QTabWidget, stores a list of QWidgets

#ifndef NAVBAR_H
#define NAVBAR_H

#include <QtWidgets\QTabWidget>
#include <QtWidgets\QWidget>
#include "ZopperScanGuiIncludes.hpp"

class NavBar : public QTabWidget
{
	Q_OBJECT

public:
	//Constructor
	NavBar();

	//Destructor
	~NavBar();
private:

	//Image widget
	ImageWidget *image;

	//Answer key widget
	KeyWidget *key;

	//Configuration widget
	ConfigWidget *config;

	//Results widget
	ResultWidget *result;

	//Options widget
	OptionWidget *option;
	
};

#endif // NAVBAR_H
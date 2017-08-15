/*
 * This is the main source file for the KanBan UI.
 */

/*! \mainpage Open Life Organizer
 *
 * \section intro_sec Introduction
 *
 * The Open Life Organizer(OLO) is a web UI app that enables you to manage all your goals.
 *   OLO takes inspiration from Personal Kanban and RPM(Tony Robbins).
 *
 * \section overview_sec Overview
 *
 * @see Capturing
 *
 * \section install_sec Installation
 *
 * \subsection step1 Step 1: Opening the box
 *
 * etc...
 */

#include <Wt/WApplication>
#include "View.h"
#include "Model.h"

Wt::WApplication *createView(const Wt::WEnvironment& env)
{
	// TODO Create the model, either here or in the main part?
	// TODO V Probably add the model link.
    return new View(env);
}

 int main(int argc, char **argv)  {
     return Wt::WRun(argc, argv, &createView);
 }

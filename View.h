#ifndef VIEW_H
#define VIEW_H

#include <Wt/WApplication>
#include <Wt/WContainerWidget>
#include <Wt/WHBoxLayout>
#include <Wt/WApplication>

#include "Controller.h"

class View : public Wt::WApplication {
public:
  View(const Wt::WEnvironment& env, Controller *pController);


private:
  Wt::WHBoxLayout *CreateTopTab(Wt::WApplication *app, Wt::WContainerWidget *container);

  Controller *m_pController;

  void TestonUserClicked(Wt::WLineEdit* pGoalLine);
  Wt::WContainerWidget* CreateCaptureTab(Wt::WApplication *app);
};

#endif

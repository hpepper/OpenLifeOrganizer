#include "View.h"

#include <Wt/WContainerWidget>
#include <Wt/WText>
#include <Wt/WMenu>
#include <Wt/WVBoxLayout>
#include <Wt/WHBoxLayout>
#include <Wt/WNavigationBar>
#include <Wt/WStackedWidget>
#include <Wt/WPopupMenu>
#include <Wt/WLineEdit>
#include <Wt/WTabWidget>
#include <Wt/WTextArea>
#include <Wt/WGridLayout>
#include <Wt/WLength>

// https://www.webtoolkit.eu/wt/doc/reference/html/classWt_1_1WApplication.html#ae29a843f4d50159b17abfa9503c389db
// wApp->log("notice") << "User " << userName << " logged in successfully.";

// This is the top-level widget container of the application, and corresponds to entire browser window. The user interface of your application is represented by the content of this container.
// The root() widget is only defined when the application manages the entire window.

// The resource files in /usr/share/Wt/resources has to be available.

/**
  Constructor for View

  This will layout the GUI.
  IT uses the gridlayout, because it can actually stretch the gui to fill the
    screen/browser window.
 */
View::View(const Wt::WEnvironment& env)
    : Wt::WApplication(env)
{
  setTitle("WtTest");
  //useStyleSheet("everywidget.css");
  //useStyleSheet("example1.css");


  log("info") << "Test";

  // This is the container for the full screen.
  Wt::WContainerWidget *pScreenContainer = new Wt::WContainerWidget();
  pScreenContainer->resize(Wt::WLength::Auto, Wt::WLength::Auto);
  // Add the primary container to the root widget?
  root()->addWidget(pScreenContainer);

  Wt::WGridLayout *pScreenLayout = new Wt::WGridLayout();
  pScreenContainer->setLayout(pScreenLayout);


  // Create the container for the North field
  Wt::WContainerWidget *pMainContainer = new Wt::WContainerWidget();
  CreateTopTab(this, pMainContainer);

  // Add the main container to the screen layout
  pScreenLayout->addWidget(pMainContainer, 0, 0);



  Wt::WText *item = new Wt::WText("Status text");
  item->setStyleClass("green-box");
  pScreenLayout->addWidget(item, 1,0);

  /*
       * Let row 1 and column 1 take the excess space.
       */
  pScreenLayout->setRowStretch(0, 0);
  pScreenLayout->setColumnStretch(0, 0);

} // end


/**
 * Create the Tab for the top part. It also create the container for each tab.
 */
Wt::WHBoxLayout *View::CreateTopTab(Wt::WApplication *app, Wt::WContainerWidget *container) {
  //TODO N create destructors that delete all the 'new()' operations.
  Wt::WHBoxLayout *hbox = new Wt::WHBoxLayout();
  container->setLayout(hbox);

  // Things are getting added to the hbox.
  Wt::WTabWidget *tabW = new Wt::WTabWidget(container);
  tabW->addTab(new Wt::WTextArea("This is the contents of the first tab."),
	     "Capture", Wt::WTabWidget::PreLoading);
  tabW->addTab(new Wt::WTextArea("The contents of the tabs are pre-loaded in"
			       " the browser to ensure swift switching."),
	     "Chunk", Wt::WTabWidget::PreLoading);
  tabW->addTab(new Wt::WTextArea("You could change any other style attribute of the"
			       " tab widget by modifying the style class."
			       " The style class 'trhead' is applied to this tab."),
	     "Plan", Wt::WTabWidget::PreLoading);
  tabW->addTab(new Wt::WTextArea("The contents of the tabs are pre-loaded in"
     			       " the browser to ensure swift switching."),
     	     "Schedule", Wt::WTabWidget::PreLoading);
  tabW->addTab(new Wt::WTextArea("The contents of the tabs are pre-loaded in"
             			       " the browser to ensure swift switching."),
             	     "Execute", Wt::WTabWidget::PreLoading);
  tabW->addTab(new Wt::WTextArea("The contents of the tabs are pre-loaded in"
                     			       " the browser to ensure swift switching."),
                     	     "Complete", Wt::WTabWidget::PreLoading);
  tabW->addTab(new Wt::WTextArea("The contents of the tabs are pre-loaded in"
                             			       " the browser to ensure swift switching."),
                             	     "Celebrate", Wt::WTabWidget::PreLoading);
  tabW->setStyleClass("tabwidget");
  hbox->addWidget(tabW);

  app->log("info") << "DDD CreateTopTab() done";
  return(hbox);
} // end CreateTopTab

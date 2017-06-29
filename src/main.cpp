/*******************************************************************************
  Copyright (C) 2016 Milo Solutions
  Contact: https://www.milosolutions.com

  This file is part of Milo Code Database, which is a collection of useful code
  snippets often reused within Milo Solutions. As such, this code is present in
  many projects done by Milo Solutions and does not constitute a copyright
  infridgement.

  You are entitled to do anything you please with this code, just as with the
  rest of code you bought. Files not containing this notice were written
  specifically for this project and have not been shared with any other party
  within or without Milo.
*******************************************************************************/

/*
  TEMPLATE main.cpp by Milo Solutions. Copyright 2016
*/

#include <QCoreApplication>
#include <QLoggingCategory>

// Prepare logging categories. Modify these to your needs
//Q_DECLARE_LOGGING_CATEGORY(core) // already declared in MiloLog header
Q_LOGGING_CATEGORY(coreMain, "core.main")

/*!
  Main routine. Remember to update the application name and initialise logger
  class, if present.
  */
int main(int argc, char *argv[]) {
    //MiloLog::instance();
    // Set up basic application data. Modify this to your needs
    QCoreApplication app(argc, argv);
    app.setApplicationVersion(APP_VERSION);
    app.setOrganizationName("Milo Solutions");
    app.setOrganizationDomain("milosolutions.com");
    app.setApplicationName("Template");
    //logger()->enableLogToFile(app.applicationName());
    qCInfo(coreMain) << "Application data set."
                 << "\n\tName:" << app.applicationName()
                 << "\n\tOrganisation:" << app.organizationName()
                 << "\n\tDomain:" << app.organizationDomain()
                 << "\n\tVersion:" << app.applicationVersion();
    
    return app.exec();
}

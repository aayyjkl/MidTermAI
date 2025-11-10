#include "mainwindow.h"

#include <QApplication>
#include <QScreen>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    
    // Get screen dimensions
    QScreen *screen = QApplication::primaryScreen();
    QRect screenGeometry = screen->geometry();
    int screenWidth = screenGeometry.width();
    int screenHeight = screenGeometry.height();
    
    // Window dimensions
    int windowWidth = 800;
    int windowHeight = 600;
    
    // Calculate positions to center both windows horizontally
    int totalWidth = windowWidth * 2;
    int startX = (screenWidth - totalWidth) / 2;
    int startY = (screenHeight - windowHeight) / 2;
    
    MainWindow w;
    MainWindow x;
    w.setGeometry(startX, startY, windowWidth, windowHeight);
    w.show();
    x.setGeometry(startX + windowWidth, startY, windowWidth, windowHeight);
    x.show();
    return a.exec();
}

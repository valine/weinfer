#include "weinfer/zmainviewcontroller.h"
#include "ui/zlabel.h"

MainViewController::MainViewController(char **argv) : ZViewController(argv) {

}


void MainViewController::onCreate() {
    ZViewController::onCreate();

    auto* label = new ZLabel("Hello", this);
    label->setTextSize(40);
    label->setMargin(30);
}


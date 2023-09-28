#include "weinfer/zmainviewcontroller.h"
#include "ui/zlabel.h"
#include "../include/weinfer/model.h"

MainViewController::MainViewController(char **argv) : ZViewController(argv) {

}


void MainViewController::onCreate() {
    ZViewController::onCreate();

    auto* label = new ZLabel("Hello", this);
    label->setTextSize(40);
    label->setMargin(30);


    const int size = 5;
    float a[size] = {1.0, 2.0, 3.0, 4.0, 5.0};
    float b[size] = {5.0, 4.0, 3.0, 2.0, 1.0};
    float c[size] = {0};

    Model model(size);
    model.addVectors(a, b, c);

    for (float i : c) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}


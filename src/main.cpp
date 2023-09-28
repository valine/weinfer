#include <ui/zapplication.h>
#include <weinfer/zmainviewcontroller.h>

int main(int argc, char* argv[]) {
    /**
     * Main application loop
     */
    ZApplication(new MainViewController(argv), "WeInfer", true,
                 500, 500);
}

#include <ui/zapplication.h>
#include <weinfer/zmainviewcontroller.h>

int main(int argc, char* argv[]) {
    /**
     * Main application loop
     */
    ZApplication(new MainViewController(argv), "Heartbeat", true,
                 1920, 1080,1);
}

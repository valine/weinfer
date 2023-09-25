#include "ui/zviewcontroller.h"

static const int MARGIN = 10;
using namespace glm;
using namespace std;

class MainViewController : public ZViewController {

public:

    explicit MainViewController(char* argv[]);
    void onCreate() override;
private:

};


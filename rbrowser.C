#include "TApplication.h"
#include "TSystem.h"
#include "TFile.h"
#include "TBrowser.h"

class RBrowser : public TBrowser {

public:

    RBrowser();
    ~RBrowser();
};

RBrowser::RBrowser() : TBrowser()
{
}

RBrowser::~RBrowser()
{
    // exit on close window
    gApplication->Terminate();
}

int main(int argc, char **argv)
{
    TFile *f[256];
    gSystem->Load("libTreeViewer");
    gSystem->Load("libGeom");
    if(argc > 1) {
        for(int i=1;i<argc;i++)
           f[i] = TFile::Open( argv[i], "READ" );
    }
    TApplication theApp("rbrowser", &argc, argv);
    new RBrowser();
    theApp.Run();
    return 0;
}

#include"HybridApplication.h"

//Stuff for cross platform support

#if OGRE_PLATFORM == OGRE_PLATFORM_WIN32
#define WIN32_LEAN_AND_MEAN
#include "windows.h"
#endif

#if OGRE_PLATFORM == OGRE_PLATFORM_WIN32
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,\
	       	LPSTR lpCmdLine, int nCmdShow)
#else
int main(int *argc, char *argv[])
#endif
{
	HybridRenderer::Application app;
	std::cout<<"Hello";
	try
        {
		app.go();
		
        } 
        catch( Ogre::Exception& e )
        {
                 #if OGRE_PLATFORM == OGRE_PLATFORM_WIN32
	         MessageBox( NULL, e.getFullDescription().c_str(),\
				 "An exception has occured!",\
				 MB_OK | MB_ICONERROR | MB_TASKMODAL);
                 #else
	         std::cerr << "An exception has occured: " <<\
			 e.getFullDescription().c_str() << std::endl;
                 #endif
         }
	return 0;
}

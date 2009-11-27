/*
 * Author: Bharathan Rajaram
 * This is the class that sets up the Ogre application and the ray trace system.
 */

#include<Ogre.h>

/*
 * Class HybridApplication
 */
class HybridApplication
{
	public:
		HybridApplication();
		~HybridApplication();
		bool go();	//Start the application
	protected:
		Ogre::Root *mRoot;
		Ogre::SceneManager *sceneManager;
	
		void initialiseOgre();
		virtual void initialiseResourcePaths();
		virtual void initialiseResources();
		virtual void chooseSceneManager();
		void setupInputSystem();
		bool setupRenderSystem();
		virtual void createRenderWindow();
		virtual void createScene();
		virtual void createRayTraceScene();
		void createFrameListener();
		virtual void startRenderLoop();
		bool initialiseRayTraceSystem();

};
